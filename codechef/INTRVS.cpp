#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin >> t; 
	while(t--){
		int n , k; 
		cin >> n >> k; 
		int arr[n]; 
		for(int i = 0; i < n ; i++) cin >> arr[i]; 
		int cnt = 0 , flagk = 0; 
		bool notBot = true; 
		for(int i = 0 ; i < n ; i++){
			if(arr[i] != -1){
				if(arr[i] > k)
					flagk = 1;
				if(arr[i] > 1)  notBot = false;  
			}
			else cnt++; 
		}
		int solve = n - cnt; 
		if(solve < (n + 1)/2){
			cout << "Rejected" << endl; 
		}
		else if(flagk == 1){
			cout << "Too Slow" << endl; 
		}
		else if(notBot && cnt == 0){
			cout << "Bot" << endl; 
		}
		else{
			cout << "Accepted" << endl;
		}
		
		
	}
	
	
	return 0; 
}
