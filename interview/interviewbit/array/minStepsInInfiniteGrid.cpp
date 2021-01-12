#include<bits/stdc++.h> 
using namespace std; 
int coverPoints(int n , int a[] , int b[])
{
	int ans = 0; 
	for(int i = 1 ; i < n ; i++)
	{
		ans += max(abs(a[i] - a[i-1]) , abs(b[i] - b[i-1]));
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	int a[n] , b[n]; 
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] >> b[i]; 
    int ans = coverPoints(n , a , b);
	cout << ans << endl;
	return 0; 
}
