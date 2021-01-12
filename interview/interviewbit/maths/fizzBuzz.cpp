#include<bits/stdc++.h> 
using namespace std; 
vector<string > solve(int A){
	vector<string > ans;
    for(int i = 1 ; i <= A ; i++){
        if(i%3 == 0 && i % 5 == 0)
            ans.push_back("FizzBuzz");
        else if(i%3 == 0)
            ans.push_back("Fizz");
        else if(i%5 == 0)
            ans.push_back("Buzz");
        else
            ans.push_back(to_string(i));
    }
    return ans;
}
int main(){
	int A; 
	cin >> A;
	vector<string > ans = solve(A); 
	for(int i = 0 ; i < (int) ans.size() ; i++)
		cout << ans[i] <<" "; 
	cout << endl; 
	
	
	return 0; 
}
