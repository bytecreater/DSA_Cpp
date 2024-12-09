//     int profit = 0;
//     for (int i =0 ; i<n-1; i++){
//         for (int j = i+1; j<n; j++){
//             profit = arr[j]-arr[i];
//             if (profit<0){
//                 profit = 0;
//             }
//             maxProfit = max(profit,maxProfit);
//         }
//     }
//     cout<<maxProfit;
//     return 0;
// }



// optimal algorithm
#include <iostream>
using namespace std;

int main() {

    int arr[]={7,1,5,3,6,19};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int profit=0;
    int maxProfit=0;
    int bestbuy = arr[0];