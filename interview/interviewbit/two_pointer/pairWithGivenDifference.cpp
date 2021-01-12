#include<bits/stdc++.h> 
using namespace std; 
 
int solve(vector<int> &A , int B){
	  sort(A.begin(),A.end()); 
    int i = 0 ;
    
    int n = A.size(); 
    for(int j = 0 ; j < n ; j++){
        while(i < j &&abs(A[j] - A[i]) > abs(B)) i++; 
        if(i != j && abs(A[j]-A[i]) == abs(B)) return 1; 
    }
    return 0; 
}

int main(){
	int n , B; 
	cin >> n >> B; 
	vector< int > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr,B); 
	if(ans) cout << "Yes There is a pair with that difference" << endl; 
	else cout << "There is  no possible pair" << endl; 
	
	return 0; 
}
