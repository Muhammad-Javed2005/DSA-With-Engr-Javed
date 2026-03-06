#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int n = 7;
    int arr[n] = {3 , -4 , -5 , 4 , -1 , 7 , -8};

    // int n = 5;
    // int arr[n] = {1 ,2 ,3 ,4, 5} ;

    int currsum = 0 , maxsum = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum , currsum);

        if(currsum < 0)
        {
            currsum = 0; 
        }
    }
    
    cout<<"Maximum sum of subarray is "<<maxsum<<endl;


    cout << "This program is developed by \"Engineer Muhammad Javed\"";

    return 0;
}

