#include<iostream>

#include<string>

using namespace std;

int main(){
    
    int marks[5];

    // For store in array
    for (int i = 0; i < 5; i++)
    {
        cin>> marks[i];
    }
    
    // For display of array

    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<endl;
    }
    



    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}