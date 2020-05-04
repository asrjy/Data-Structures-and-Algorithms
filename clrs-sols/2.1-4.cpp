#include<bits/stdc++.h>
using namespace std;
int compute_result(int a, int b){
    if((a == 0 && b == 1) || (a == 1 && b == 0))
        return 1;
    else if(a == 0 && b == 0)
        return 0;
    else 
        return 2;
}
int main(){
    int i(0), carry(0), n(0);
    cin >> n;
    int a[n], b[n], c[n+1];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 0; i < n; i++){
        cin >> b[i];
    }
    for(i = n; i > 1; i--){
        if(carry == 1){
            if(compute_result(a[i-1], b[i-1]) == 0){
                c[i - 1] = 1;
            } else if(compute_result(a[i-1], b[i-1]) == 1){
                c[i - 1] = 0;
                carry = 1;
            } else {
                c[i - 1] = 1;
            }
        } else {
            if(compute_result(a[i-1], b[i-1]) == 0){
                c[i - 1] = 0;
            } else if(compute_result(a[i-1], b[i-1]) == 1){
                c[i - 1] = 1;
            } else {
                carry = 1;
                c[i - 1] = 0;
            }   
        }
    }
    if(carry == 1){
        c[0] = 1;
    } else {
        c[0] = 0;
    }
    for(i = 0; i < n+1 ; i++){
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
