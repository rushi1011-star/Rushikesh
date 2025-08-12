#include<iostream>
using namespace std;

int main()
{
    int num[50], i, first, last, middle, n, search;

    cout << "Enter the number of elements:\n";
    cin >> n;

    cout << "Enter " << n << " numbers in ascending order:\n";
    for(i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "Enter the number you want to search:\n";
    cin >> search;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while(first <= last)
    {
        if(num[middle] == search)
        {
            cout << search << " found at location: " << (middle + 1) << endl;
            break;
        }
        else if(num[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if(first > last)
    {
        cout << search << " is not present in the array." << endl;
    }

    return 0;
}
