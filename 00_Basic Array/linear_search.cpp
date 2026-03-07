#include<iostream>

#include<string>

using namespace std;

int LinearSearch(int arr[] , int size , int target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        return i;
    }
    return -1;
}


int main(){
    
    int arr[] = {4 ,2, 7 ,8 , 9, 2, 5};
    int size = 6 ;
    int target = 9;

    cout<< LinearSearch(arr , size , target)<<endl;


    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}