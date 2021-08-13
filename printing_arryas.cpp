#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many number you want to continue with :" << endl;
    cin>>n;
    int arr[20];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array elemnts present in the list are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}