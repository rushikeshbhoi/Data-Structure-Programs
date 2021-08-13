#include <iostream>
using namespace std;
int main()
{
    int n, arr[10];
    cout << "Enter number :";
    cin >> n;
    cout << "Enter array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search in the list" << endl;
    int key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at location at " << i << endl;
        }
    }

    return 0;
}