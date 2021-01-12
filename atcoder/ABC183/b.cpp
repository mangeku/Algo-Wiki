#include<bits/stdc++.h> 
using namespace std; 

int main(){
	long double a , b , c , d; 
	cin >> a >> b >> c >> d; 
	long double ans = (a*d+b*c)/(b+d); 
	printf("%10Lf",ans); 
	return 0; 
}
