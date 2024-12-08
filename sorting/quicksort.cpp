#include <iostream>
#include <string>
using namespace std;
int partition(int arr[],int p, int q){ 
    int pivot=arr[p];
    int count=0;
    for (int i=p+1; i<=q; i++ ){
        if (arr[i]<=pivot){
            count++;
        }
    }

    // placing pivot element at right place
    int pivotIndex= p + count;
    swap(arr[pivotIndex], arr[p]);

    // solve the left and right
    int i=p,j=q;
    while (i<pivotIndex && j>pivotIndex){
        while (arr[i]<pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if (i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int p,int q){
    if (p>=q){
        // base case
        return;
    }

    // do the partition
    int m = partition(arr , p , q);

    // left part sort karo
    quickSort(arr,p,m-1);

    // right part sort karo
    quickSort(arr,m+1,q);
}
int main() {
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}