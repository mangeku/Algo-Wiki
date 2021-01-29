#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll a , b , c; 
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",a*a-2LL*b);
	}
	return 0; 
}
