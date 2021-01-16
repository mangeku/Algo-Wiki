#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(vector<int> &a, int B) {
    int n = a.size(); 
    int l = 1 , r = n - 2; 
    int pos = -1; 
    while(l <= r){
        int mid = l + (r-l)/2; 
        if(a[mid] > a[mid-1] && a[mid] < a[mid+1]){
            pos = mid; 
            break; 
        }
        else if(a[mid] > a[mid-1]) l = mid+1; 
        else r = mid - 1; 
    }
    l = 0 , r = pos; 
    while(l <= r){
        int mid = l + (r - l)/2 ; 
        if(a[mid] == B) return mid; 
        else if(a[mid] < B) l = mid + 1; 
        else r = mid - 1; 
    }
    l = pos + 1 , r = n - 1; 
    while(l <= r){
        int mid = l + (r-l)/2; 
        if(a[mid] ==B) return mid; 
        else if(a[mid] < B) r = mid - 1; 
        else l = mid + 1; 
    }
    return -1; 
    
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
