#include <iostream>

#include <string>

using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int Product(int arr[], int size)
{
    int Product = 1;
    for (int i = 0; i < size; i++)
    {
        Product *= arr[i];
    }

    return Product;
}

int main()
{

    int arr[] = {2, 3, 6, 7, 4, 6, 5, 4};
    int size{8};

    cout << "The sum of all element in array is " << sum(arr, size) << "." << endl;
    cout << "The Product of all element in array is " << Product(arr, size) << "." << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}