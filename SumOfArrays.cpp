#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int A[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + A[i];
    }
    cout << "The sum of Array is " << sum << endl;
}