#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		cin.ignore(); 
		string s[n];
		for(int i = 0 ; i < n ; i++){
			getline(cin,s[i]);  
		}
		//for(int i = 0 ; i < n ; i++) cout << s[i] << endl; 
		sort(s,s + n);  
		for(int i = 0 ;i < n ; i++){
			int j = i + 1; 
			int cnt = 1; 
			while(j < n && s[i] == s[j]){
				cnt++; 
				j++; 
			}
			cout << s[i]  << " " << cnt << endl; 
			i = j - 1; 
		}
	}
}
