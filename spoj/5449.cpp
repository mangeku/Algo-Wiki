#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int t = 1; 
	while(1){
		string s; 
		cin >> s; 
		if(s[0] == '-') break; 
		int open = 0 , ans = 0; 
		int n =  s.size(); 
		for(int i = 0 ; i < n ;i++){
			if(s[i] == '{') open++; 
			else if(open==0){
				open++; 
				ans++; 
			}
			else{
				open--; 
			}
		}
		ans += (open/2); 
		cout << t << ". " << ans << endl; 
		t++; 
	}
	
	return 0; 
	
}
