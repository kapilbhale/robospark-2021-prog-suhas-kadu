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
    Rectangle r1;
    Rectangle r2(4);
    Rectangle r3(3,5);

    cout<<"Area of rectangle1 is "<<r1.calculateArea()<<endl;
    cout<<"Area of rectangle2 is "<<r2.calculateArea()<<endl;
    cout<<"Area of rectangle3 is "<<r3.calculateArea()<<endl<<endl;

    //Update member variables using setter methods
    r1.setLength(2);
    r1.setBreadth(3);

    //Get member variables using getter methods
    cout<<"Updated length rectangle1 is "<<r1.getLength()<<endl;
    cout<<"Updated breadth rectangle1 is "<<r1.getBreadth()<<endl;
    cout<<"Updated area of rectangle1 is "<<r1.calculateArea()<<endl;
}
