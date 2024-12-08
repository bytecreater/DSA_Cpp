// #include <iostream>
// using namespace std;

// //Brute force solution

// int main() {
//     int n = 6;
//     int arr[n] = {2, 3, 11, 7, 1, 15};

//     int maxSum=0;
//     int l1=0;
//     int l2=0;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             maxSum=max(arr[i]+arr[j],maxSum);
//             if (arr[i]+arr[j]==maxSum){
//                 l1=i;
//                 l2=j;
//             }
//         }
//     }
//     cout<<maxSum<<endl;
//     int length = l2 - l1 ;
//     int size = length *  min(arr[l1],arr[l2]);
//     cout<<"capacaity of conatiner : "<<size<<endl;
//     cout<<l1<<endl;
//     cout<<l2;
//     return 0;
// }


#include<iostream>
using namespace std;
int main() {
    int n = 6;
    int arr[n] = {2, 3, 11, 7, 1, 15};

    int maxWater=0;
    int lp=0; // left pointer
    int rp=n-1;// right pointer
    for (int i=0; i<n; i++){
        int width = rp - lp ;
        int height = min(arr[lp],arr[rp]);
        int curWater = width * height ;
        maxWater=max(maxWater,curWater);

        arr[lp]<arr[rp]? lp++ : rp--; 
    }
    cout<<maxWater<<endl;
    return 0;
}