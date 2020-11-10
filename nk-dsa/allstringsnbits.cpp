#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void generateStrings(int arr[], int i, int n){
    if(i==n)
        printArr(arr,n);
    else{
        arr[i]=0;
        generateStrings(arr,i+1,n);
        arr[i]=1;
        generateStrings(arr,i+1,n);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    generateStrings(arr,0,n);
    return 0;
}
/*
4
0 0 0 0 
0 0 0 1 
0 0 1 0 
0 0 1 1 
0 1 0 0 
0 1 0 1 
0 1 1 0 
0 1 1 1 
1 0 0 0 
1 0 0 1 
1 0 1 0 
1 0 1 1 
1 1 0 0 
1 1 0 1 
1 1 1 0 
1 1 1 1 

Uses Backtracking
Recurrence Relation: T(n) = 2T(n-1)+c
T(n) = O(2^n)

*/