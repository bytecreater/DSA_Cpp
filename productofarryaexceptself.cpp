// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>arr={1,2,3,4};
//     arr.push_back(5);
//     int n = arr.size();
//     vector<int>ans(n,1);
//     vector<int>prefix(n,1);
//     vector<int>suffix(n,1);

//     //prefix
//     for (int i=1; i<n; i++){
//         prefix[i]=prefix[i-1]*arr[i-1];
//     }

//     //suffix
//     for (int i=n-2; i>=0; i--){
//         suffix[i]=suffix[i+1]*arr[i+1];
//     }

//     // multiplication of prefix and suffix
//     for (int i=0; i<n; i++){
//             ans[i]=suffix[i]*prefix[i];
//         }

//     cout<<"[ ";
//     for (int i=0; i<n; i++){
//             cout<<ans[i]<< " ";
//         }
//     cout<<"]";
    
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr={1,2,3,4};
    int n = arr.size();
    vector<int>ans(n,1);

    //prefix
    for (int i=1; i<n; i++){
        ans[i]=ans[i-1]*arr[i-1];
    }

    int suffix =1;
    //suffix
    for (int i=n-2; i>=0; i--){
        suffix= suffix*arr[i+1];
        ans[i]=ans[i]*suffix;
    }

    cout<<"[ ";
    for (int i=0; i<n; i++){
            cout<<ans[i]<< " ";
        }
    cout<<"]";
    
    return 0;
}