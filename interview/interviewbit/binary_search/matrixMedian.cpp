#include<bits/stdc++.h> 
using namespace std; 

int findMedian(vector<vector<int> > &A) {
     int min = A[0][0], max = A[0][0];
    int n = A.size(), m = A[0].size();
    for (int i = 0; i < n; ++i) {
        if (A[i][0] < min) min = A[i][0];
        if (A[i][m-1] > max) max = A[i][m-1];
    }

    int element = (n * m + 1) / 2;
    while (min < max) {
        int mid = min + (max - min) / 2;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
            cnt += (int)(upper_bound(A[i].begin(), A[i].end() , mid) - A[i].begin());
        if (cnt < element)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}
int main(){
	int n , m; 
	cin >> n >> m; 
	vector< vector< int >> matrix(n,vector< int > (m)); 
	for(int i = 0 ; i < n ; i++) 
		for(int j = 0 ; j < m ; j++) 
			cin >> matrix[i][j]; 
	int ans = findMedian(matrix); 
	cout << ans << endl; 
	return 0; 
}
