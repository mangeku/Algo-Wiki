#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
bool fun(vector< int > &arr , int height , int B){
    ll cut = 0; 
    int n = arr.size(); 
    for(int i = 0 ; i < n ; i++){
        cut += max(0,arr[i]-height); 
    }
    return cut >= B; 
}
int solve(vector<int> &A, int B) {
    int n = A.size(); 
    sort(A.begin(),A.end()); 
    int l = 0 , r = A[n-1]; 
    int ans = 0; 
    while(l <= r){
        int mid = l + (r - l)/2; 
        if(fun(A,mid,B)){
            ans = mid; 
            l = mid + 1; 
        }
        else{
            r = mid - 1; 
        }
    }
    return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > A(n); 
	for(int i = 0 ;i < n ; i++) cin >> A[i]; 
	int B; 
	cin >> B; 
	cout << solve(A,B) << endl; 
}
