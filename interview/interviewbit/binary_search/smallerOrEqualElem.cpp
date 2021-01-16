#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(vector<int> &arr, int B) {
    int n = arr.size(); 
    int l = 0 , r = n - 1; 
    int ans = -1; 
    while(l <= r){
        int mid = l + (r - l)/2; 
        if(arr[mid] <= B){
            ans = mid; 
            l = mid + 1; 
        }
        else{
            r = mid - 1;  
        }
    }
    if(ans == -1) return 0; 
    return ans + 1;  
    
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int x; cin>>x; 
	int ans = solve(arr,x); 
	cout << ans << endl; 
	return 0; 
}
