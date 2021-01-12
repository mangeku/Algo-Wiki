#include<bits/stdc++.h> 
using namespace std; 
int solve(int A){
	int rev = 0 , sign = 1; 
    if(A < 0){
        sign = -1; 
        A *= -1; 
    }
    while(A){
        int digit = A%10; 
        if(rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > (INT_MAX%10)))
            return 0; 
        rev = rev*10 + digit; 
         A/=10; 
    }
    return rev*sign; 
}
int main(){
	int A; 
	cin >> A; 
	int ans = solve(A); 
	if(ans == 0) cout << "Integer Overflow" << endl; 
	else cout << ans << endl; 
	return 0; 
}
