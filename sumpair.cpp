// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     int arr[n]={7,2,11,15};
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             int sum=0;
//             sum=arr[i]+arr[j];
//             if (sum==9){
//                 cout<<arr[i]<<" + "<<arr[j]<<" = "<<" 9"<<endl;
//             }
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {2, 3, 6, 7, 11, 15};
    int key = 9;

    int start = 0, end = n - 1;
    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == key) {
            cout << arr[start] << " + " << arr[end] << " = " << key << endl;
            break; // If only one pair is required, otherwise remove this
        } else if (sum > key) {
            end--;
        } else {
            start++;
        }
    }
    return 0;
}
