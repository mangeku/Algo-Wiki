#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
bool isPalindrome(int x){
	int rev = 0; 
	int temp = x; 
	while(temp != 0){
		int unit = temp%10; 
		rev = rev*10 + unit; 
		temp /= 10; 
	}
	return rev == x; 
	
}
int main(){
	int ans = 0; 
	for(int i = 100 ; i <= 999 ; i++){
		for(int j = i ; j <= 999 ; j++){
			if(isPalindrome(i*j))
				ans = max(ans , i*j);
		}
	}
	cout << ans << endl; 
	
	return 0; 
}
