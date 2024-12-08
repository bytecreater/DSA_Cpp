// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     cout<<"Enter the no. of elements: ";
// //     cin>>n;

// //     int arr[n];
// //     for (int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }

// //     for (int i=0; i<n-1; i++){
// //         for (int j=i+1; j<n+1; j++){
// //             if (arr[j]<arr[i]){
// //                 int temp=arr[j];
// //                 arr[j]=arr[i];
// //                 arr[i]=temp;

// //             }
// //         }
       
// //     }
// //     for (int i=0; i<n; i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }


// #include <iostream>
// #include <string>
// using namespace std;
// void selectionsort(int arr[],int n){
//     for (int i=0; i<n; i++){
//         int min=i;
//         for(int j=i+1; j<n; j++){
//             if (arr[j]<arr[min]){
//                 int temp=arr[min];
//                 arr[min]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
// int main() {
//     int n;
//     cout<<"Enter the no. of elements: ";
//     cin>>n;

//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }
        
//     selectionsort(arr,n);
//     for (int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[]{1,2,3,4};
    swap(arr[1],arr[0]);
    cout<<arr[0];
    return 0;
}
