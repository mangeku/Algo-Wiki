#include<bits/stdc++.h> 
using namespace std; 
int perfectPeak(vector<int> &a) {
    int n = a.size(); 
    vector< int > pre(n); 
    vector< int > suf(n); 
    pre[0] = a[0]; 
    suf[n - 1] = a[n -1]; 
    for(int i = 1 ; i < n ; i++){
        pre[i] = max(pre[i-1] , a[i]); 
    }
    for(int i = n - 2 ; i >= 0 ; i--){
        suf[i] = min(suf[i+1] , a[i]); 
    }
    int flag = 0;
    for(int i = 1 ; i < n - 1 ; i++){
        if(a[i] > pre[i - 1] && a[i] < suf[i+1])
            flag = 1; 
    }
    return flag; 
    
}
int main(){
	int n; 
	cin >> n; 
	vector< int > a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i]; 
	int ans = perfectPeak(a);
	if(!ans) cout << "No perfect peak exist" << endl; 
	else cout <<"Exist perfect peak" << endl; 
	
	
	return 0; 
}
