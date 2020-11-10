#include<iostream>
using namespace std;
int getMaxBlock(int *arr, int c_row, int c_col, int o_row, int o_col, int size, bool* countArray, int &maxSize){

}
int maxBlockSize(int *arr, int row, int col){
    int maxSize = 0;
    int size = 0;
    bool** countArray[row][col];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            if(*((arr+i*col)+j) > 0)
                getMaxBlock(&arr[0][0], i, j, row, col, 0, &countArray[0][0], maxSize);

}
int main(){
    int row,col;
    cout << "Enter row and col size: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter array elements:\n";
    for(int i=0; i<row; i++)
        for(int j=0;j<col;j++)
            cin >> arr[i][j];
    cout << "Biggest block is sized: " << maxBlockSize(&arr[0][0], row, col);
    return 0;   
}