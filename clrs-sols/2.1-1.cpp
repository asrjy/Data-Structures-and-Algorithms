#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&nums){
  int i(0), j(0), key(0);
  for(j = 1; j < nums.size(); j++){
    key = nums[j];
    i = j - 1;
    while(i >= 0 && nums[i] > key){
      nums[i+1] = nums[i];
      i--;
    }
    nums[i+1] = key;
  }
}
int main(){
  vector <int> nums = {31, 41, 59, 26, 41, 58};
  insertion_sort(nums);
  for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
