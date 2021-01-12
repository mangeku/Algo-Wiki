#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n , x ; 
	cin >> n >> x; 
	string s; 
	cin >> s; 
	for(int i = 0 ; i < (int) s.size() ; i++){
		if(s[i] == 'x') x = max(0,x- 1); 
		else x += 1;
	}
	cout << x << endl; 
	return 0; 
}
