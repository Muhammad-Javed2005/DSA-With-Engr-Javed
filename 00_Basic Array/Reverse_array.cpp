#include<iostream>

#include<string>

using namespace std;

void ReverseArray(int arr[] , int size)
{
    int start = 0 , end = size-1;

    while(start < end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;

    }
}


int main(){
    
    int arr[ ] = {1 , 2 ,  3  , 4 , 5 , 6 , 7 , 8};
    int size {8};

    ReverseArray(arr , size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}