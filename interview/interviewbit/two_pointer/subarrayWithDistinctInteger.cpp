#include<bits/stdc++.h> 
using namespace std; 
int helper(vector<int> &A , int k){
     int i = 0; 
    int n = A.size();
    int cnt = 0; 
    map< int , int > mp; 
    for(int j = 0 ; j < n ; j++){
        mp[A[j]]++;
        while(i <= j && (int)mp.size() > k){
            mp[A[i]]--; 
            if(mp[A[i]] == 0) mp.erase(A[i]); 
            i++; 
        }
            cnt += (j - i + 1); 
    }
    return cnt; 
}
int solve(vector<int> &A, int k) {
   return helper(A,k) - helper(A,k-1); 
}
int main(){
	int n , k; 
	cin >> n >> k;
	vector< int > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr,k); 
	cout << ans << endl; 
}
