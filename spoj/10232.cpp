#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 10005; 
int main(){
	int t; 
	cin >> t; 
	vector< int > ans; 
	vector< int > factor(nax + 1,0);
	for(int i = 2 ; i <= nax ; i++){
		if(factor[i] == 0){
			factor[i] = 1; 
			for(int j = 2 * i ; j <= nax ; j += i){
				factor[j]++; 
			}
		}
	}
	for(int i = 2 ; i <= nax ; i++){
		if(factor[i] >= 3)
		{
			 ans.push_back(i);
			 //cout << factor[i] << endl; 
		}
		
	}
//	cout << ans.size() << endl; 
//	for(int i = 1 ; i <= 1000 ; i++) cout << ans[i - 1] << endl; 
	//cout << ans.size() << endl; 
	while(t--){
		int n; 
		cin >> n; 
		cout << ans[n-1] << endl; 
	}
	
	
	return 0; 
}
