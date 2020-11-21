#include<iostream>
using namespace std;
int fib_topdown[1000] = {0};
int fib_topdown_func(int n){
	if(n==0 || n==1)
		return 1;
	fib_topdown[0] = 1;
	fib_topdown[1] = 1;
	for(int i=2; i<n; i++)
		fib_topdown[i] = fib_topdown[i-1]+fib_topdown[i-2];
	return fib_topdown[n-1];
}
int fib_bottomup[1000] = {0};
int fib_bottomup_func(int n){
	if(n==1) 
		return 1;
	if(n==2)
		return 1;
	if(fib_bottomup[n] != 0)
		return fib_bottomup[n];
	return fib_bottomup[n] = fib_bottomup_func(n-1) + fib_bottomup_func(n-2);
}
int main(){
	int n;
	cin >> n;
	cout << fib_topdown_func(n) << endl;
	cout << fib_bottomup_func(n) << endl;
	return 0;
}