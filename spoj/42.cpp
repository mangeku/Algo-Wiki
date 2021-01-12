#include<bits/stdc++.h> 
using namespace std; 
int reverse(int num){
		int rev = 0; 
		while(num){
			rev = rev * 10 + num%10; 
			num = num/10; 
		}
		return rev; 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int a , b; 
		cin >> a >> b; 
		a = reverse(a);
		//cout << a << endl; 
		b = reverse(b);
	//	cout << b << endl; 
		//cout << a + b << endl; 
		cout << reverse(a + b) << endl;
	}		
	return 0; 
}
 
