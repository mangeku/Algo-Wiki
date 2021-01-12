#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<int>A(n) , B(n); 
		for(int i = 0 ; i < n ; i++) cin >> A[i]; 
		for(int i = 0 ; i < n ; i++) cin >> B[i]; 
		sort(A.begin(),A.end());
		sort(B.begin(),B.end()); 
		long long ans = 0; 
		for(int i = 0 ; i < n ; i++){
			ans += (1LL*A[i]*B[i]); 
		}
		cout << ans << endl;
	}
	return 0; 
}
