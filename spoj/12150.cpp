// JNEXT
// can easily done by next_permuatation function in cpp
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
		int i = n - 1; 
		for( ; i > 0 ; i--){
			if(arr[i-1] < arr[i]) break; 
		}
		if(i == 0){
			cout << -1 << endl; 
			continue; 
		}
		int to = i - 1; 
		int j = n - 1; 
		for( ; j >= i ; j--){
			if(arr[j] > arr[to])
				break; 
		}
		swap(arr[j], arr[to]); 
		reverse(arr + i , arr + n); 
		for(i = 0 ; i < n ; i++) cout << arr[i]; 
		cout << endl; 
		
	}
	return 0; 
}
