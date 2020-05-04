//Insertion Sort in Non Decreasing Order
#include<bits/stdc++.h>
using namespace std;
void insertion_sort_nio(vector < int > &nums){
    int i(0), j(1), key;
    for(j = 1; j < nums.size(); j++){
        key = nums[j];
        i = j - 1;
        while(i >= 0 && nums[i] < key){
            nums[i+1] = nums[i];
            i--;
        }
        nums[i+1] = key;
    }
}
int main(){
    vector < int > nums = {4,5,6,7,8};
    insertion_sort_nio(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << "\n";
    return 0;
}