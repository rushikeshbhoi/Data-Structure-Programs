#include<iostream>
using namespace std;
// Structure
struct Rectangle{
    int length,breadth;
};
// Function
// int area(struct Rectangle r1)  // This is call by value 
// {
//     return r1.length*r1.breadth;
// }

//  int area(struct Rectangle &r1)  // This is call by reference 
// {
//     return r1.length*r1.breadth;
// }

/*  Some Error in this code rest other is working fine 
void ChangeLength(strut Rectangle *p,int l )  //Call by Address   
{
    p->lenght = 15;
}
int main()
{
    struct Rectangle r={10,5};
    ChangeLength(&r,20);
    
  */  
    // cout<<"Area of Rectangle :"<<area(&r);

    return 0;
}