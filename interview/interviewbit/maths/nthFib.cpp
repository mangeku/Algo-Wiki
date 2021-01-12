#include<bits/stdc++.h> 
using namespace std; 

const int mod = 1e9 + 7; 
typedef long long ll; 
vector<vector<ll>> multiply(vector<vector<ll>>a,vector<vector<ll>>b){
    vector<vector<ll>>m(2, vector<ll>(2));
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            m[i][j]=0;
            for(int k=0;k<2;k++){
                m[i][j]+=((a[i][k]%mod)*(b[k][j]%mod))%mod;
            }
        }
    }
return m;
}
int solve(int n) {
   vector<vector<ll>>PS= {{1, 1},{1, 0}};
   vector<vector<ll>>P= {{1, 0},{0, 1}};
   while(n>0){
       if ((n%2)==1) P=multiply(P, PS);
            n=n/2; PS =multiply(PS, PS);
   }
    
return P[0][1]%mod;
}

int main(){
	int n; 
	cin >> n; 
	int ans  = solve(n); 
	cout << ans << endl; 
	
}
