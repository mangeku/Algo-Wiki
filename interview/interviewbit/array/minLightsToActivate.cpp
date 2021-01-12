#include<bits/stdc++.h> 
using namespace std; 

int solve(vector< int > &A , int B)
{
	int n = A.size();
	int i = 0; 
	int ans = 0; 
	while(i < n)
	{
		int ind = -1; 
		for(int j = max(0 , i - B + 1) ; j <= min(n -1 , i + B - 1) ; j++)
		{
			if(A[j])
				ind = j; 
		}
		if(ind == -1)
			return -1; 
		else{
			i = ind + B; 
			ans++; 
		}
	}
	return ans; 
}
int main()
{
	int n;
	cin >> n; 
	vector< int > arr(n);	
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];
	int B; 
	cin >> B; 
	int ans = solve(arr , B);
	if(ans == -1){
		cout << "No way possible" << endl; 
	}
	else{
		cout << "The minimum numbers of lamps required is : " << ans << endl; 
	}
	return 0; 
}
