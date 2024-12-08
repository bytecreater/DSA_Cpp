#include<iostream>
#include<string>
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
    cout<<"\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j]==key){
            cout<<"The index is "<<i<<" "<<j<<"\n";
            cout<<"The key"<<"("<<key<<")"<<" is present at: "<<"\n"<<i+1
            <<" row"<<"\n"<<j+1<<" column";
        }
        }
    }


    return 0;
}