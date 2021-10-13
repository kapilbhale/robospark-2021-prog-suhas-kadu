import cv2
import os

org=cv2.imread("vllCR.png")
img = cv2.imread("vllCR.png", cv2.IMREAD_GRAYSCALE)
ret, thresh = cv2.threshold(img, 240, 255, cv2.THRESH_BINARY)
contours, hierarchy = cv2.findContours(thresh, mode=cv2.RETR_LIST, method=cv2.CHAIN_APPROX_SIMPLE)

for cnt in contours:
    approx = cv2.approxPolyDP(cnt, 0.01*cv2.arcLength(cnt, True), True)
    cv2.drawContours(img, contours, -1, color=(0, 255, 0), thickness=2)
    x = approx.ravel()[0]
    y = approx.ravel()[1]

    if len(approx) == 3:
        cv2.putText(img, "Triangle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif len(approx) == 4:
        a1,a2,a3,a4=cv2.boundingRect(approx)
        if a1==a2:
            cv2.putText(img, "Square", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
        else:
            cv2.putText(img, "Rectangle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif len(approx) == 5:
        cv2.putText(img, "Pentagon", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif 6 < len(approx) < 15:
        cv2.putText(img, "Ellipse", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    else:
        cv2.putText(img, "Circle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))

cv2.imshow("original", org)
cv2.imshow("shapes", img)
cv2.imshow("Threshold", thresh)
cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite('shapedetect.png', img)