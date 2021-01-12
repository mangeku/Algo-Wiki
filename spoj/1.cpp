#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int flag = 1; 
	int x; 
	while(flag && cin >> x){
		if(x == 42 ) flag = 0; 
		if(!flag) continue; 
		cout << x << endl; 
	}
	return 0; 
}
