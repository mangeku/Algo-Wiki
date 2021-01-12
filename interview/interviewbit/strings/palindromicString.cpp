#include<bits/stdc++.h> 
using namespace std; 
// O(N) space solution
int solve(string A) {
    int n = A.size(); 
    string s = ""; 
    for(int i = 0 ; i < n ; i++){
        if(A[i] >= 'A' && A[i] <= 'Z') s += (A[i]-'A'+'a'); 
        else if(A[i] >= 'a' && A[i] <= 'z') s += (A[i]); 
        else if(A[i] >= '0' && A[i] <= '9') s += A[i]; 
    }
    int sz = s.size(); 
    for(int i = 0 ; i < sz/2 ; i++){
        if(s[i] != s[sz-i-1]) return 0; 
    }
    return 1; 
}
// O(1) space solution
int solve2(string B){
	int n = B.size(); 
	int i = 0; 
	int j = n - 1; 
	while(i < j){
		while(i < j && !isalnum(B[i])) i++; 
		while(i < j && !isalnum(B[j])) j--; 
		if(toupper(B[i]) != toupper(B[j])) return 0; 
		i++,j--; 
	}
	return 1; 
}
int main(){
	string s; 
	cin >> s; 
	int ans = solve(s); 
	if(ans) cout << "Yes it is a palindrome" << endl; 
	else cout << "No it is not a palindrome" << endl; 
}
