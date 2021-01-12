#include<bits/stdc++.h> 
using namespace std; 

int solve(int row, int column) {
    int topLeft = min(row, column) - 1; 
    int bottomRight = 8 - max(row, column);
    int topRight = min(row, 9 - column) - 1; 
    int bottomLeft = 8 - max(row, 9 - column); 
    return (topLeft + topRight + bottomRight + bottomLeft); 
}

int main(){
	int r , c;
	cin >> r >> c; 
	int ans = solve(r,c); 
	cout << ans << endl;
	return 0; 
}
