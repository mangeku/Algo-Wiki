#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(vector< int > &arr){
	vector<int>ans; 
	int l , r , i; 
	int n = arr.size(); 
	for(i = 0 ; i < n - 1; i++){
		if(arr[i] > arr[i+1])
		{
			l = i; 
			break; 
		}
	}
	if(i == n - 1) 
	{
		ans.push_back(-1);
		return ans; 
	}
	for(i = n - 1 ; i > 0 ; i--){
		if(arr[i] < arr[i-1]){
			r = i; 
			
			break; 
		}
	}
	int maxi = INT_MIN , mini = INT_MAX; 
	for( i = l ; i <=r ; i++){
		maxi = max(maxi , arr[i]);
		mini = min(mini , arr[i]);
	}
	for(i = 0 ; i < l ; i++){
		if(arr[i] > mini) 
		{
			l = i; 
			break; 
		}
	}
	for(i = r + 1 ; i < n ; i++){
		if(arr[i] < maxi)
		{
			r = i; 
			break; 
		}
	}
	ans = {l , r}; 
	return ans; 	
	
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i]; 
	}
	vector< int > ans = solve(arr);	
	if(ans[0] == -1) 
		cout << "Already sorted " << endl; 
	else  
		cout << ans[0] << " " << ans[1] << endl; 
	
	return 0; 
}
