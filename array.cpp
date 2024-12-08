#include<iostream>
#include<string>
using namespace std;

int main(){
    
    // int array[4]={10,20,30,40};
    // cout<<array[2]<<endl;

    // int n;
    // cout<<"Enter your number: ";
    // cin>>n;

    // int array[n];
    // for (int i=0; i<n; i++){
    //     cin>>array[i];
    // }

    // for (int i=0; i<n; i++){
    //     cout<<array[i]<<endl;
    // }


    // printing maximum and minimum element from array

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];

    for (int i=0; i<n; i++){
        cin>>array[i];
    }
   int max=array[0];
    for (int i=1; i<n; i++){
        if(max<array[i])
        max=array[i];
    }

    int min=array[0];
    for (int i=1; i<n; i++){
        if(min>array[i])
        min=array[i];
    }
    cout<<"The maximum no. is: "<<max<<endl;
    cout<<"The minimum no. is: "<<min<<endl;

    return 0;
}