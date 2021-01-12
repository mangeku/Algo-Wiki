#include<bits/stdc++.h> 
using namespace std; 
bool helper(vector<vector<int>> &courses,int cur,vector<int>&color){
    color[cur] = 1; 
    for(auto it : courses[cur]){
        if(color[it] == 1)
            return true;
        if(color[it] ==0 && helper(courses,it,color))
            return true; 
    }
    color[cur] = 2; 
    return false; 
}
bool solve(vector<vector<int>>& courses) {
    int n = courses.size(); 
    vector< int > color(n , 0); 
    for(int i = 0 ; i < n ; i++){
        if(!color[i]){
            if(helper(courses , i , color))
                return false; 
        }
    }
    return true; 
}
int main(){
	int n , m; 
	cin >> n >> m; 
	vector< vector< int > > course(n);
	for(int i = 0 ; i < m ; i++){
		int u , v; 
		cin >> u >> v; 
		course[u].push_back(v);
	}
	bool ans = solve(course);
	if(ans)
		cout << "yes it is possible to complete the courses" << endl; 
	else 
		cout << "NO it is not possible" << endl; 
	return 0;  
}
