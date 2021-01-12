#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int> &A, int B) {
 int n=A.size();
    int l=0, i=0, count=0;
    int ans=INT_MIN;
    for(i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
        while(count>B){
            if(A[l]==0)count--;
            l++;
        }
        ans=max(ans, i-l+1);
    }
    return ans;
}


int main(){
	int n , B; 
	cin >> n >> B; 
	vector< int > A(n); 
	for(int i = 0 ; i < n ;i++) cin >> A[i]; 
	int ans = solve(A,B); 
	cout << ans << endl;
	return 0; 
}
