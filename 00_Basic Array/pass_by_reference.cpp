#include<iostream>

#include<string>

using namespace std;

void Changearr(int arr[] , int size)
{
    cout<<"In function: "<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main(){
    
    int arr[]= {1 ,2 , 3};

    
    cout<<"In Main: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    Changearr(arr , 3);


    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}