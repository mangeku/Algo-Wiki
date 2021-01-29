//SHPATH
#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int arr[n]; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
		int m; 
		cin >> m; 
		int brr[m];
		for(int j = 0 ; j < m ; j++) cin >> brr[j]; 
		sort(arr , arr + n);
		sort(brr , brr + m); 
		int ptr1 = 0 , ptr2 = 0; 
		int ans = INT_MAX; 
		while(ptr1 < n && ptr2 < m){
			if(arr[ptr1] == brr[ptr2]){
				ans  = 0; 
				break; 
			}
			else{
				ans = min(ans , abs(arr[ptr1] - brr[ptr2])); 
				if(arr[ptr1] < brr[ptr2]) ptr1++; 
				else ptr2++; 
			}
		}
		cout << ans << endl; 
	}
	return 0; 
}
