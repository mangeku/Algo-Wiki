#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
#define pi 3.1415926535897
int main(){
	while(1){
		int l; 
		cin >> l; 
		if(l == 0) break; 
		double r = l/pi; 
		cout << fixed << setprecision(2) << pi*r*r/2 << endl;
	}
	return 0; 
}
