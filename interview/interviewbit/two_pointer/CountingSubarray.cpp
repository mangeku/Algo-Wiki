#include<bits/stdc++.h> 
using namespace std; 
int solve(vector< int > & A, int B){
	int i = 0;
    int sum =0 , ans = 0; 
    int n = A.size(); 
    for(int j = 0 ; j < n ; j++){
        sum += A[j];
        while(j >= i && sum >= B){
            sum -= A[i++]; 
        }
        ans += (j-i+1); 
    }
    return ans; 
}
int main(){
	int n, B; 
	cin >> n >> B; 
	vector< int > arr(n); 
	for(int i = 0 ;i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr,B); 
	cout << ans << endl; 
	return 0; 
}
