#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std; 
 
int main(){
	for(int i = 0 ; i < 10 ; i++){
		cpp_int a , b;
		cin >> a >> b; 
		cout << (a-b)/2 + b<< endl; 
		cout << (a-b)/2 << endl;
	}
}
