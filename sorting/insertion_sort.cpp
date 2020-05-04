#include<iostream>
using namespace std;
void insertion_sort(int *nums, int n){
	int j(2), i(0), key(0);
	for(j = 1; j < n; j++){
		key = nums[j];
		i = j - 1;
		while(i > 0 && nums[i] > key){
			nums[i+1] = nums[i];
			i = i - 1;
		}
		nums[i+1] = key;
	}
}
int main(){
	int n(0);
	cin >> n;
	int nums[n];
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	insertion_sort(nums, n);
	for(int i = 0; i < n; i++){
		cout << nums[i] << " ";
	}
	return 0;
}
