#include<iostream>

#include<string>

using namespace std;

int main(){
    
    int n = 5;
    int arr[5] = {1 ,2, 3, 4, 5};

    for (int st = 0; st < n; st++)
    {
        for (int en = st; en < n ; en++)
        {
            for (int i = st; i <= en; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    


    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}