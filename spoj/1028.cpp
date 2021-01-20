#include<bits/stdc++.h> 
using namespace std; 

int main(){
	string pattern; 
	cin >> pattern; 
	string a = pattern; 
	reverse(pattern.begin(),pattern.end()); 
	string b = pattern; 

	
	cout << a << b.substr(1) << endl; 
	int n = a.size(); 
	int cnt = 1; 
	for(int i = 1 ; i < n ; i++){
		cout << a.substr(0,n-i); 
		for(int k = 0 ; k < cnt ; k++) cout <<" "; 
		cout << b.substr(i);
		cout << endl; 
		cnt+=2; 
	}
}
