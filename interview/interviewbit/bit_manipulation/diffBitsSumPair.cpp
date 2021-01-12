#include<bits/stdc++.h> 
using namespace std; 
const int MOD = 1e9 + 7; 
int solve(vector<int> &A) {
    int n = A.size();
    int sum = 0;
    for (int i = 0; i<31; ++i)
    {
        
        int count = 0;   
        for (int j = 0; j<n; ++j)
            if(A[j] & (1<<i))
                ++count;       
        sum += (1LL*count*(n-count)*2)%MOD;
        
        if(sum>=MOD)
            sum -= MOD;
    }
    return sum;
}

int main(){
	int n; 
	cin >> n; 
	vector< int > A(n); 
	for(int i = 0 ; i < n ;i++) cin >> A[i]; 
	int ans = solve(A);
	cout << ans << endl; 
	
	
}
