#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		string s; 
		cin >> s; 
		int n = s.size(); 
		char special[] = {'@' , '#' , '%' , '&' , '?'}; 
		bool flag1,flag2,flag3,flag4,flag5; 
		flag1 = flag2 = flag3 = flag4 = flag5 = false; 
		for(int i = 0 ; i < n ; i++){
			if(s[i] >= 'a' && s[i] <= 'z') flag1 = true; 
			if(i != 0 && i != (n - 1) && s[i] >= 'A' && s[i] <= 'Z') flag2 = true; 
			if(i != 0 && i != (n-1) && s[i] >= '0' && s[i] <= '9') flag3 = true; 
			if(i != 0 && i != (n-1) && !flag4){
				bool flag = false; 
				for(int j = 0 ; j < 5 ; j++){
					if(s[i] == special[j])
						flag = true; 
				}
				flag4 = flag; 
			}
			if(n >= 10) flag5 = true; 
		}
		if(flag1 && flag2 && flag3 && flag4 && flag5) cout << "YES" << endl; 
		else cout << "NO" << endl; 
	}
	
	
}
