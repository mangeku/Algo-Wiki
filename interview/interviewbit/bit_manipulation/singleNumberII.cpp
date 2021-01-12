#include<bits/stdc++.h> 
using namespace std; 
int solve(vector< int> & arr){
	 int n = arr.size(); 
    int ans =0; 
    for(int i = 0 ; i < 32 ; i++){
        int cnt = 0; 
        for(int j = 0 ; j < n ; j++){
            if((arr[j]>>i) & 1) cnt++; 
        }
        ans = (ans|((cnt%3)<<i)); 
    }
    return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr); 
	cout << ans << endl; 
	return 0; 
}
