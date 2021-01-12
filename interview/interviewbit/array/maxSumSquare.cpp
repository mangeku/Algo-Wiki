#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<vector<int>> & A , int B){
	 int n = A.size();
    vector<vector<int>> sum(n,vector<int>(n,0)); 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == 0 && j == 0) sum[i][j] = A[i][j]; 
            else if(i == 0) sum[i][j] = sum[i][j-1] + A[i][j]; 
            else if(j == 0) sum[i][j] = sum[i-1][j] + A[i][j]; 
            else sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + A[i][j]; 
        }
    }
    int ans = INT_MIN; 
    for(int i = B - 1 ; i < n ; i++){
        for(int j = B - 1 ; j < n ; j++){
            int total = sum[i][j]; 
            if(i - B >= 0) total -= sum[i-B][j]; 
            if(j - B >= 0) total -= sum[i][j-B];
            if(i-B >= 0 && j - B >= 0) total += sum[i-B][j-B]; 
            ans = max(ans,total); 
        }
    }
    return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector<vector<int> >nums(n, vector< int>(n,0));
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ;j++){
			cin >> nums[i][j];
		}	
	}
	int B; 
	cin>>B; 
	int ans = solve(nums,B); 
	cout << ans << endl; 
	return 0; 
}
