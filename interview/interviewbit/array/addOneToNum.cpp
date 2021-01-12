#include<bits/stdc++.h> 
using namespace std; 

vector<int> solve(vector< int > & A)
{
	int n = A.size(); 
	A[n - 1] += 1;
	int carry = 0;  
	for(int i = n - 1 ; i  >= 0 ; i--)
	{
		A[i] += carry; 
		carry = A[i]/10; 
		A[i] %= 10;
	}
	vector< int > ans; 
	if(carry) ans.push_back(carry);
	for(int i = 0 ; i < n ; i++)
		ans.push_back(A[i]);
	vector< int > res; 
	int ind = 0; 
	while(ans[ind] == 0) ind++; 
	for(int i = ind ; i < (int)ans.size() ;i++)
	    res.push_back(ans[i]);
	return res; 
}
int main()
{
	int n; 
	cin >> n; 
	vector< int > arr; 
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i]; 
	}
	vector< int > ans = solve(arr);
	for(int i = 0 ; i < (int)ans.size() ; i++)
	{
		cout << ans[i] <<""; 
	}
	cout << endl; 
	return 0; 
}
