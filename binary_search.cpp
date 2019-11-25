#include<bits/stdc++.h>
using namespace std;
int binary_search(vector < int > arr, int left, int right, int target){
    if(right >= left){
        int middle = left + (right - left) / 2;
        cout << "Changing Middle Value to " << middle << endl;
        cout << "Now:\nLeft:" << left << " Middle: " << middle << " Right: " << right << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        if(arr[middle] == target){
            cout << "Element found at " << middle << endl;
            return middle;
        }
        else if (arr[middle] > target){
            return binary_search(arr, left, middle-1, target);
        }
        return binary_search(arr, middle+1, right, target);
    }
    return -1;
}

int main(){
    vector < int > numbers;
    int n(0);
    cout << "\nEnter the number of digits:\n";
    cin >> n;
    cout << "\nEnter Numbers in sorted order:\n";
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        numbers.push_back(temp);
    }
    int presence, left, right, target;
    cout << "\nElement to be searched:\n";
    cin >> target;
    left = numbers[0];
    right = numbers[numbers.size()-1];;
    presence = binary_search(numbers, left, right, target);
    if (presence != -1) {
        cout <<"Target element is found in the array\n" << endl;
    } else {
        cout << "Target element was not found in the array\n" << endl; 
    }
    return 0;
}