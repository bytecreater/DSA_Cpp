#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[n]={1,2,3,4,5};

    // int maxsum= INT_MIN;
    // brute force

    for (int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            for (int k = start; k <= end; k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }    
    return 0;
}