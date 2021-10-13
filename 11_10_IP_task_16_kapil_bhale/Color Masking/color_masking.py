import cv2
import numpy as np
import os

cap = cv2.imread("masking.jpg")


def fun(x):
    pass


def colormask():
    cv2.namedWindow("masking")

    while True:
        hsv = cv2.cvtColor(cap, cv2.COLOR_RGB2HSV)

        rl = np.array([110, 50, 50], np.uint8)
        rh = np.array([130, 255, 255], np.uint8)
        bl = np.array([2, 120, 0], np.uint8)
        bh = np.array([40, 255, 255], np.uint8)
        gl = np.array([65, 60, 60], np.uint8)
        gh = np.array([80, 255, 255], np.uint8)

        maskr = cv2.inRange(hsv, rl, rh)
        maskb = cv2.inRange(hsv, bl, bh)
        maskg = cv2.inRange(hsv, gl, gh)
        cv2.imshow("original", cap)
        cv2.imshow('maskedred', maskr)
        cv2.imshow('maskedblue', maskb)
        cv2.imshow('maskedgreen', maskg)

        k = cv2.waitKey(1)
        if k == 32:
            break

        cv2.imwrite('maskred.png', maskr)
        cv2.imwrite('maskblue.png', maskb)
        cv2.imwrite('maskgreen.png', maskg)


colormask()
cv2.destroyAllWindows()

