#include <iostream>
using namespace std;

// Kadane's Algorithm

int main() {
    int n=4;
    int arr[n]={3,-4,5,-2};
    int curSum=0;
    int maxSum=0;
    for (int i=0;i<n;i++){
        curSum=curSum=arr[i];
        maxSum=max(curSum,maxSum);
        if (curSum<0){
            curSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}



// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n=5;
//     int arr[n]={1,2,3,4,5};

//     int maxsum=-465654;
//     // brute force approach to print sum of subarrays

//     for (int start = 0; start < n; start++){
//         int sum=0;
//         for (int end = start; end < n; end++){
//                 sum=sum+arr[end];
//                 cout<<sum;
//                 cout<<" ";
//             }
//             cout<<endl;
//             maxsum=max(sum,maxsum);
//         }  
//     cout<<"the maximum sum of array is: "<<maxsum;
//     return 0;
// }