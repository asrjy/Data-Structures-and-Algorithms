//Linear Search Demonstrating Loop Invariants
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector < int > nums;
    int i(0), n(0), x(0), t(0);
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> t;
        nums.push_back(t);
    }   
    cin >> x;
    i = n - 1;
    //Initiation of the Loop Invariant
    while(i > 0){
        //Maintenance of the Loop Invariant
        if(nums[i] == x){
            cout << i << endl;
            return 0;
        } else {
            i--;
        }
    }
    //Termination of the Loop Invariant
    cout << "NIL" << endl;
    return 0;
}