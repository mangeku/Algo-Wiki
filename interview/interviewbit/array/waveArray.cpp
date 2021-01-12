#include<bits/stdc++.h> 
using namespace std; 
vector<int> transformArray(vector< int > & arr)
{
	int n = arr.size();
	sort(arr.begin() , arr.end());
	for(int i = 0 ; i + 1 < n ; i+=2)
    {
		swap(arr[i] , arr[i+1]);
	}
	return arr; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i]; 
	vector< int > ans = transformArray(arr);
	for(int i = 0 ; i < n ; i++)	
	{
		cout << ans[i] << " ";
	}
	cout << endl; 
	return 0; 
}
