#include <iostream>

#include <string>

using namespace std;

void Intersection(int arr[], int arr1[], int sz1, int sz2)
{
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout<<endl;
}

int main()
{

    int arr[] = {1, 2, 6, 54, 3, 2, 4};
    int arr1[] = {2, 43, 64, 3, 2, 4, 5};
    int sz1 = 7;
    int sz2 = 7;

    cout << "The intersection of of two array is " << endl;
    Intersection(arr, arr1, sz1, sz2) ;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}