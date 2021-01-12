#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int n; 
	while(cin >> n){
		if(n == 0) break; 
		int cnt = 1; 
		stack<int> st; 
		int flag = 1; 
		vector< int > a(n); 
		for(int i = 0 ; i < n ; i++)  cin >> a[i]; 
		for(int i = 0 ; i < n ; i++){
			while(!st.empty() && st.top() == cnt){
				cnt++; 
				st.pop(); 
			}
			
			if(a[i] == cnt){
				cnt++; 
			} 
			else if(!st.empty() && st.top() < a[i]){
				flag = 0; 
				break; 
			}
			else{
				st.push(a[i]);
			}
		}
		if(flag) cout << "yes" << endl; 
		else cout << "no" << endl; 
	}
	
	return 0; 
	
}
