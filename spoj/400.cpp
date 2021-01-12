#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	while(cin >> n){
		if(n == 0) break; 
		string s; 
		cin >> s; 
		int k = 0;
		int flag;  
		int sz = s.size(); 
		for(int i = 0 ; i < n ; i++){
			k += 1;
			flag = 0;  
			for(int j = i; j < sz ;j += n){
				if(flag == 0){
					cout << s[j]; 
					flag = 1; 
				}
				else{
					cout << s[j + n - k - i]; 
					flag = 0; 
				}
			}
		}
		cout << endl;
	}
	return 0; 
}
