#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	ll num; 
	cin >> num; 
	if(num <= 9){
		cout << 1 << endl; 
		cout << num << endl; 
		return 0; 
	}
	if(num%10){
		cout << 1 << endl; 
		cout << (num%10) << endl; 
	}
	else{
		cout << 2 << endl;
	}
	return 0; 
	
}
