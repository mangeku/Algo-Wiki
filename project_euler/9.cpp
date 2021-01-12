#include<bits/stdc++.h>
using namespace std; 
typedef long long ll; 
bool check(int sum){
	int temp = sqrt(sum);
	return temp*temp == sum; 
}
int main(){
	int ans = 0; 
	for(int i = 1 ; i <= 1000; i++){
		for(int j = i + 1 ; j <= 1000 ; j++){
			if(check(i*i+j*j)){
				if(i + j + sqrt(i*i+j*j) == 1000){
					cout << i <<" " << j << " " << sqrt(i*i+j*j) << endl;
					ans = i * j * sqrt(i*i+j*j);
					break; 
				}
			}
		}
	}
	cout << ans << endl; 
	
	return 0; 
}
