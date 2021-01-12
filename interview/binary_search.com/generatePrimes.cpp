#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(int n) {
   vector<int> primes; 
   if(n >= 2) primes.push_back(2); 
   bool prime[n+1]; 
   memset(prime , true , sizeof(prime));  
   for(int i = 3 ; i*i <= n ; i += 2){
       if(prime[i]){
           for(int j = i*i ; j <= n ; j += i){ 
               prime[j] = false; 
           }
       }
   } 
   for(int i = 3 ; i <= n ; i += 2)
    if(prime[i]) primes.push_back(i); 
 return primes; 
}

int main(){
	int n; 
	cin >> n; 
	vector< int > ans = solve(n); 
	for(int i = 0 ; i < (int)ans.size() ; i++)
			cout << ans[i] <<" "; 
	cout << endl;
	return 0; 
}
