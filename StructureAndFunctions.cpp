#include <iostream>
using namespace std;

struct Rectangle
{
    int length,breadth;
};

void initialsie(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
    return 2*(r.length+r.breadth);
}
int main()
{   
    Rectangle r= {0,0};

    int length, breadth;
    int l,b;
    cout << "Enter length & breadth :" << endl;
    cin >>l >> b;
    initialsie(&r,l,b);
    cout << "Area :" << area(r) << endl
         << "Perimeter :" << perimeter(r) << endl;

    return 0;
}