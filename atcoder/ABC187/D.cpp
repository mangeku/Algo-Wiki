#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
bool comp(pair<ll,ll> &a , pair< ll , ll > &b){
	if(2LL*a.first+a.second > 2LL*b.first+b.second) return true; 
	else return false; 
}
int main(){
	int n; 
	cin >> n; 
	pair< ll , ll > p[n];  
	ll sum1 = 0 , sum2 = 0; 
	for(int i = 0 ; i < n ; i++){
		cin >> p[i].first >> p[i].second;  
		sum1 += p[i].first; 
		sum2 += p[i].second; 
	}
	sort(p , p + n , comp); 
	ll cnt = 0;
	ll s1 = 0 , s2 = sum1;  
	for(int i = 0; i < n ; i++){
		s1 += (p[i].first + p[i].second); 
		s2 -= p[i].first; 
		cnt++; 
		if(s1 > s2){ 
			cout << cnt << endl;
			return 0;  
		}
	}
	cout << 0 << endl; 
	return 0; 
}
