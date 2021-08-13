#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={6,7,8};
    int arr3[10];
    arr3[10]=arr1[5]+arr2[3];
    for (int i = 0; i < 10; i++)
    {
    cout<<arr3[i]<<endl;
        
    }
    

    return 0;
}