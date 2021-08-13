#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }

    int GetLength()
    {
        return length;
    }

    int GetBreadth()
    {
        return breadth;
    }

    int SetLength(int l)
    {
        length = l;
    }

    int SetBreadth(int b)
    {
        breadth = b;
    }
    ~Rectangle()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{   
    Rectangle r(10,5);
    cout<<"Area :"<<r.area()<<endl<<"Perimeter :"<<r.perimeter()<<endl;

    return 0;
}