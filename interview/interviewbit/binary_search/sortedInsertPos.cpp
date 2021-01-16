#include<bits/stdc++.h> 
using namespace std; 
int searchInsert(vector<int> &A, int B) {
    int n = A.size(); 
    int l = 0 , r = n - 1; 
    int ans = -1; 
    while(l <= r){
        int mid = l + (r - l)/2; 
        if(A[mid] == B) return mid; 
        else if(A[mid] < B){
            ans = mid; 
            l = mid + 1; 
        }
        else r = mid - 1; 
    }
    if(ans == -1) return 0; 
    else return ans + 1; 
}

int main(){
	int n; 
	cin >> n; 
	vector< int > A(n); 
	for(int i = 0 ; i < n ; i++) cin >> A[i]; 
	int B; 
	cin >> B; 
	int ans = searchInsert(A,B);
	cout << ans << endl;
	return 0; 
}
