#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		string s; 
		cin >> s; 
		stack<string> st; 
		int n = s.size(); 
		for(int i = 0 ;i < n ; i++){
			//cout << i << endl;
			if(s[i] == '(') continue; 
			else if(s[i] == ')'){
				string x , op , y; 
				y = st.top(); 
				st.pop(); 
				op = st.top(); 
				st.pop(); 
				x = st.top(); 
				st.pop(); 
				st.push(x+y+op); 
			}
			else
			{
				string str(1,s[i]); 
				st.push(str);
				
			}
		}
		cout << st.top() << endl;
	}
}
