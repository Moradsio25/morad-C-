//Print the elements of an array in reverse order using pointers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements:"<<endl;
    for (int i = 0; i < n; ++i)
        cin >> *(arr + i);

    cout << "Array in reverse order:"<<endl;
    for (int i = n - 1; i >= 0; --i)
        cout << *(arr + i) << " ";

    cout << endl;
    delete[] arr;
    return 0;
}
