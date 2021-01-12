#include<bits/stdc++.h> 
using namespace std; 

int solve(int N) {
    N = abs(N);
    int i = 1;
    int s = 0 ;
    while( s< N || (s-N) % 2 != 0 )s+=i++;
    return i-1;
}

int main(){
	int n; 
	cin >> n; 
	int ans = solve(n); 
	cout << ans << endl; 
	return 0; 
}
