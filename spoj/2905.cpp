#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int n; 
	while(cin >> n){
		if(n == 0 ) break; 
		int a[n + 1]; 
		for(int i = 0 ; i < n ; i++){
			cin >> a[i]; 
		}
		a[n] = INT_MAX; 
		sort(a , a + n); 
		int ans = 0; 
		for(int i = 0 ; i + 2 < n ; i++){
			for(int j = i + 1 ; j + 1 < n ; j++)
			{
				int temp = a[i] + a[j];
				int ind = upper_bound(a + j + 1 , a + n , temp) - a; 
				if(a[ind] == temp) ind++; 
				ans += (n - ind); 
			}
		}
		cout << ans << endl; 
	}
	return 0; 
}
