#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;  
int main(){
	while(1){
		int a , b; 
		cin >> a >> b; 
		if(a == -1 && b == -1) return 0; 
		int mini = min(a,b); 
		if(mini == 0) cout << a + b - mini << endl; 
		else{
			int temp = a + b - mini; 
			cout << (temp + mini)/(mini + 1 )<< endl; 
		}
	}

	return 0; 
	
}
