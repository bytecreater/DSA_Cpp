#include <iostream>
using namespace std;

int main() {
    int arr[]={3,4,5,6,7,0,1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    int start=0;
    int end=n-1;
    while (end>=start){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            cout<<"Key is found at index: "<<mid<<endl;
            return 0;
        }
        if (arr[mid] >= arr [start]){ //  left sorted
            if (key >= arr [start] && key <= arr[mid]){
               end=mid-1; 
            }
            else{
                start=mid+1;
            }
        }
        else { // right sorted
            if (key <= arr[end] &&  key >= arr[mid]){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
    }

    cout<<"Key is not found in the array"<<endl;
    return 0;
}