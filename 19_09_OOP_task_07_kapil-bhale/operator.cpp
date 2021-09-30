#include<iostream>
using namespace std;
class Box
{
    float length,breadth,height;

public:

    Box()
    {
        length = breadth = height = 0;
    }
    Box(float length, float breadth, float height)
    {
        this -> length = length;
        this -> breadth = breadth;
        this -> height = height;
    }
    float getVolume()
    {
        return length*breadth*height;
    }
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    float getHeight()
    {
        return height;
    }
    void setLength(float length)
    {
        this -> length = length;
    }
    void setBreadth(float breadth)
    {
        this -> breadth = breadth;
    }
    void setHeight(float height)
    {
        this -> height = height;
    }

    void printDim()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << getVolume() << endl;
    }

    bool operator<(Box obj)
    {
        if (getVolume() < obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator>(Box obj)
    {
        if (getVolume() > obj.getVolume())
        {
            return true;
        }
        return false;
    }


    bool operator<=(Box obj)
    {
        if (getVolume() <= obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator>=(Box obj)
    {
        if (getVolume() >= obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator==(Box obj)
    {
        if (getVolume() == obj.getVolume())
        {
            return true;
        }
        return false;
    }
};

int main() {
    Box b1;
    Box b2(10, 20, 30);
    Box b3(10.5, 20.5, 30.5);
    cout<<"Volume of Box1 is "<<b1.getVolume()<<endl;
    cout<<"Volume of Box2 is "<<b2.getVolume()<<endl;
    cout<<"Volume of Box3 is "<<b3.getVolume()<<endl;
    
    b1.setLength(4);
    b1.setBreadth(2);
    b1.setHeight(6);
    
    cout << "Volume of b1 < b2 is " << ((b1 < b2) ? "True" : "False" ) << endl;
    cout << "Volume of b1 <= b2 is " << ((b1 <= b2)? "True" : "False" )  << endl;
    cout << "Volume of b1 > b2 is " << ((b1 > b2)? "True" : "False"  )<< endl;
    cout << "Volume of b1 >= b2 is " << ((b1 >= b2)? "True" : "False" ) << endl;
    cout << "Volume of b1 == b2 is " << ((b1 == b2)? "True" : "False" ) << endl;
}