#include<bits/stdc++.h> 
using namespace std; 
int main(){
	int a , b; 
	cin >> a >> b; 
	int sum1 = 0 , sum2 = 0; 
	while(a){
		sum1 += a%10; 
		a /= 10; 
	}
	while(b){
		sum2 += b%10; 
		b /= 10; 
	}
	cout << max(sum1,sum2) << endl; 
}
