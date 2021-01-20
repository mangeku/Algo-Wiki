#include<bits/stdc++.h> 
using namespace std; 
const int nax = 1e6 + 5; 
bool prime[nax]; 
void seive(){
	memset(prime,true,sizeof(prime)); 
	prime[0] = prime[1] = false; 
	for(int i = 4 ; i <= 9999 ; i += 2) prime[i] = false; 
	for(int i = 3 ; i*i <= 9999 ; i+=2){
		if(prime[i]){
			for(int j = i*i; j <= 9999 ; j += i){
				prime[j] = false; 
			}
		}
	}
}
int main(){
	int t; 
	cin >> t;
	seive(); 
	while(t--){
		int l , r; 
		cin >> l >> r; 
		queue< int > q; 
		int dis[100000]; 
		memset(dis,-1,sizeof(dis)); 
		q.push(l);
		dis[l] = 0; 
		while(!q.empty()){
			int cur = q.front(); 
			q.pop(); 
			
			for(int i = 0 ; i < 4 ; i++){
				string curstring = to_string(cur); 
				for(char j = '0' ; j <= '9' ; j++){
					curstring[i] = j; 
					int num = stoi(curstring); 
					if(num > 1000 && prime[num] && dis[num] == -1){
						//cout << num << endl; 
						q.push(num); 
						dis[num] = dis[cur] +1; 
					}
				}
			}
		}
		cout << dis[r] << endl; 
	}
	return 0; 
}
