#include<bits/stdc++.h> 
using namespace std; 
int getMax(set< int > &st , int n)
{
	set< int > ::iterator  it  = st.lower_bound(n);
	int res = *(--it); 
	return res;  
}
int maxTripSum(vector< int > & arr)
{
	int n = arr.size();
	vector< int > suffMax(n + 1);
	suffMax[n] = 0; 
	for(int i = n -1 ; i >= 0 ; i--)
	{
		suffMax[i] = max(suffMax[i + 1], arr[i]);
	}
	set< int > st; 
	st.insert(INT_MIN);
	int ans = -1; 
	for(int i = 0 ; i < n - 1 ; i++)
	{
		if(suffMax[i+1] > arr[i])
			ans = max(ans , getMax(st , arr[i]) + arr[i] + suffMax[i+1]);
		st.insert(arr[i]);
	}
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
	int ans = maxTripSum(arr);
	cout << ans << endl; 
	return 0; 
}
