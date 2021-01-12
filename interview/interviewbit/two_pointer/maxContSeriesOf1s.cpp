#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(vector<int> &A, int B) {
    int wL = 0, wR = 0; 
    int nZero = 0;
    int bestWindowWidth = -1;
    vector<int> result;
    int start = 0, end = 0;
    while (wR < (int)A.size())
    {    
        if (nZero <= B){
            if (A[wR] == 0) 
                ++nZero; 
            ++wR;
		}
        if (nZero > B){ 
            if (A[wL] == 0) --nZero;
            ++wL;
        }
        if (wR - wL + 1 > bestWindowWidth){
            bestWindowWidth = wR - wL + 1;
            start = wL;
            end = wR;
        }
    }
    for (auto i = start; i<end; ++i)
        result.emplace_back(i);
    return result;
    
}
int main(){
	int n , B; 
	cin >> n >> B; 
	vector< int > arr(n,B); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	vector< int > ans = solve(arr,B); 
	int sz = ans.size(); 
	for(int i = 0 ;i < sz ; i++) cout << ans[i] <<" "; 
	cout << endl; 
	return 0; 
}
