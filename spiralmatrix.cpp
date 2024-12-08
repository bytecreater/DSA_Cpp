#include<iostream>
using namespace std;

int main(){

        int n,m;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"Enter the no. columns: ";
    cin>>m;

    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    return 0;
}