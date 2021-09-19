#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int a)
    {
        length=a;
        breadth=a;
    }

    Rectangle(int len,int bre)
    {
        length=len;
        breadth=bre;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int setLength(int len)
    {
        length=len;
    }

    int setBreadth(int bre)
    {
        breadth=bre;
    }

    int calculateArea()
    {
        return length*breadth;
    }
};

int main()
{

    char ch;
    do
    {
    int choice;

    cout << "<----------------Operations--------------->"<< endl << endl << endl;
    cout << " 1) Enter 1 Using the default constructor and finding the area " <<endl;
    cout << " 2) Enter 2 Using the Parametrized constructor with 1 Arguments and find the area " <<endl;
    cout << " 3) Enter 3 Using the Parametrized constructor with 2 Arguments and find the area " <<endl;
    cout << " 4) Enter 4 Using the Getter and Setter method to find the area " <<endl;

    cin >> choice;

    
    
        switch(choice)
        {
            case 1:
                    {
                        Rectangle r1;
                        cout<<"Area of rectangle1 is "<<r1.calculateArea()<<endl;
                    }
                    break;
            case 2:
                    {
                        Rectangle r2(5);
                        cout<<"Area of rectangle2 is "<<r2.calculateArea()<<endl;
                    }
                    break;
            case 3:
                    {
                        Rectangle r3(3,5);
                        cout<<"Area of rectangle3 is "<<r3.calculateArea()<<endl;
                    }
                    break;
            case 4:
                    {
                        Rectangle r4(3, 5);
                        r4.setLength(2);
                        r4.setBreadth(3);  
                        cout<<"Updated length rectangle1 is "<<r4.getLength()<<endl;
                        cout<<"Updated breadth rectangle1 is "<<r4.getBreadth()<<endl;
                        cout<<"Updated area of rectangle1 is "<<r4.calculateArea()<<endl; 
                    }
                    break;
            default:
                    {
                        cout << "Entered the wrong option" << endl;
                    }
                    break;
        }
        cout << "Do you want continue ? (Y/N)" << "\t" <<endl;
        cin >> ch;
    } while (ch == 'Y');
    

    return 0;
}
