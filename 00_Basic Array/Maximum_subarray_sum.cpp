#include<iostream>

#include<string>

using namespace std;

int main(){
    
    // int n = 7;
    // int arr[n] = {3 , -4 , -5 , 4 , -1 , 7 , -8};

    int n = 5;
    int arr[n] = {1 ,2 ,3 ,4, 5} ;

    int maxsum = INT16_MIN;

    for (int st = 0; st < n; st++)
    {

        int currsum = 0;
        for (int en = st; en < n ; en++)
        {
 
            currsum += arr[en];
            maxsum = max(currsum , maxsum);
        }
    
    }
    
    cout<<"Maximum sum of subarray is "<<maxsum<<endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}