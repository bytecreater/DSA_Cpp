// #include <iostream>
// #include <string>
// using namespace std;

// // Brute Force Approach

// int main() {
//     int n=6;
//     int arr[n]={2,2,2,1,2,1};
//     for (int i=0; i<n; i++){
//         int count=0;
//         for (int j=0; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if (count>(n/2)){
//             cout<<arr[i]<<" is majority element"<<endl;
//             break;
//         }
//     }
//     return 0;
// }


// Moore's Voting Algorithm
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=6;
    int arr[n]={2,2,2,1,2,1};
    int count=0;
    int maj=0;
    for (int i=0; i<n; i++){
        if (count==0){
            maj=arr[i];
        }
        if (maj==arr[i]){
            count++;
            }
        else{ 
            count--;
        }
    }
    cout<<"majority element is: "<<maj<<endl;

    return 0;
}