#include<iostream>
using namespace std;
int isSorted(int arr[], int n){
    if(n==1)
        return 1;
    else
        return arr[n-1]<arr[n-2]?0:isSorted(arr, n-1);
}
int main(){
    int n,i;
    cout << "Number of elems:";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    isSorted(arr,n)==0?cout<<"Array is not in sorted order\n":cout<<"Array is in sorted order\n";
    return 0;
}