#include<bits/stdc++.h> 
using namespace std; 
int pow(int x, int n, int d) {
    if(n == 0 && x == 0) return 0; 
    if(n == 0 ) return 1%d; 
    long long base = x; 
    long long exp = n;
    long long ans = 1; 
    while(exp){
        if(exp&1){
            ans = (ans*base)%d; 
            exp--; 
        }
        else{
            base = (base*base)%d; 
            exp /= 2;
        }
    }
    return (ans+d)%d; 
}

int main(){
	int x , n , d; 
	cin >> x >> n >> d; 
	cout << pow(x,n,d) << endl; 
	return 0; 
	
}
