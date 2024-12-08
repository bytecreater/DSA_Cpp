// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the length of array: ";
//     cin>>n;

//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int counter=1; counter<n; counter++){
//         for (int i=0; i<n-counter; i++){
//             if (arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }

//     for (int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=1; i<n; i++){
        for (int j=0; j<n-i; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int n=5;
    int arr[n]={2,5,1,6,4};
    bubblesort(arr,n);
    cout<<"{";
    for  (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<"}";
    return 0;
}