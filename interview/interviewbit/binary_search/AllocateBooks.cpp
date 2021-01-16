#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
bool flag(ll mid,vector< int >&A , int B){
    int n= A.size(); 
    int cnt = 1;
    ll sum = 0; 
    for(int i = 0 ; i < n ; i++){
        sum += A[i];
        if(A[i] > mid) return false; 
        if(sum > mid){
            cnt++; 
            sum = A[i]; 
        }
        if(cnt > B) return false; 
    }
    return cnt <= B; 
}
int books(vector<int> &A, int B) {
    int n = A.size(); 
    if(n < B) return -1; 
    ll sum = 0; 
    for(int i = 0 ; i < n ;i++) sum += A[i]; 
    ll l = 0 , r = sum; 
    ll ans = 0; 
    while(l <= r){
        ll mid = l + (r-l)/2; 
        if(flag(mid,A,B)){
            ans = mid; 
            r = mid -1; 
        }
        else{
            l = mid + 1; 
        }
    }
    return (int)ans; 
}

int main(){
	int n; 
	cin >> n; 
	vector< int > A(n); 
	for(int i = 0 ; i < n ; i++) cin >> A[i]; 
	int B; 
	cin >> B; 
	cout << books(A,B) << endl;
}
