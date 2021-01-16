#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
int sqrt(int A) {
    ll l = 0 , r = A; 
    int ans = -1; 
    while(l <= r){
        ll mid = l + (r - l)/2; 
        if(mid*mid == A) return mid; 
        else if(mid*mid > A) r = mid - 1; 
        else{
            ans = mid; 
            l = mid + 1;
        }
    }
    return ans; 
}

int main(){
	int n; 
	cin >> n;
	cout << sqrt(n) << endl; 
	return 0; 
}
