#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;  
int main(){
	ll r1 , c1 , r2 , c2; 
	cin >> r1 >> c1 >> r2 >> c2; 
	ll ans = 3; 
	if((r1 == r2) && (c1 == c2)) ans = 0; 
	else if(r1+c1 == r2+c2||r1-c1 == r2-c2||(abs(r1-r2) + abs(c1-c2) <= 3)) ans = 1; 
	else if((r1+r2+c1+c2)%2 == 0 || abs(r2-r1)+abs(c2-c1) <= 6 || abs((r2+c2)-(r1+c1)) <= 3 || abs((r2-c2)-(r1-c1))<= 3) ans = 2;
	cout << ans << endl; 
	return 0; 
}
