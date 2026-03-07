#include<iostream>

#include<string>

using namespace std;

int main(){
    

        
    int marks[8];

    // For store in array
    for (int i = 0; i < 7; i++)
    {
        cin>> marks[i];
    }


    int max = marks[0];
    for (int i = 0; i < 7; i++)
    {
        if(max < marks[i])
        {
            max = marks[i];
        }
    }
    
    cout<<"Maximum value of array is "<<max<<endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}