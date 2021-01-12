#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(vector< int > &B)
{
	int n = B.size(); 
	ll sum = 0; 
	vector< int > cnt(n , 0);
	for(int i = 0 ; i < n ; i++)
		sum += B[i];
	if(sum % 3) return 0;
	ll equ = sum/3; 
	sum = 0; 
	for(int i = n - 1 ; i >= 0 ; i--){
		sum += B[i]; 
		if(sum == equ)
			cnt[i] = 1; 
	} 
	for(int i = n - 2 ; i >= 0 ; i--){
		cnt[i] += cnt[i + 1]; 
	}
	int ans = 0; 
	sum = 0; 
	for(int i = 0 ; i + 2 < n ; i++){
		sum += B[i]; 
		if(sum == equ){
			ans += cnt[i+2]; 
		}
	}
	return ans; 
}
int main(){
	int n; cin >> n; 
	vector< int > B(n);
	for(int i = 0 ; i < n; i++)
		cin >> B[i]; 
	int ans = solve(B);
	cout << "Total number of partitions are : " << ans << endl; 
	return 0; 
}
