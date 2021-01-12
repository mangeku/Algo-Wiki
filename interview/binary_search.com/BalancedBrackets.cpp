#include<bits/stdc++.h> 
using namespace std; 
bool solve(string s) {
   int cnt = 0; 
   for(int i = 0 ; i < (int)s.size() ; i++){
        if(s[i] == '(')
            cnt++; 
        else{
            if(cnt <= 0)
                return false; 
            cnt--; 
        }
   }
   if(cnt == 0)
     return true; 
   return false; 
}
int main(){
	string s; 
	cin >> s; 
	bool ans = solve(s); 
	if(ans) cout << "Balanced" <<endl;
	else 
			cout << "Unbalanced" << endl; 
	
	
	return 0;
}
