#include<bits/stdc++.h> 
using namespace std; 
int getValue(string s){
    int num  = 0;
    for(int i=0;i<(int)s.size();i++){
        num = num*2 + (s[i]-'0');
    }
    return num;
}
int solve(int A) {
    if(A==1) return A;
    A--;
    queue<string> q;
    q.push("11");
    while(!q.empty()){
        string s = q.front();
        q.pop();
        A--;
        if(!A){
            return getValue(s);
        }
        int mid = s.size()/2;
        if(s.size()%2==0){
            string s0 = s, s1=s;
            s0.insert(mid,"0");
            s1.insert(mid,"1");
            q.push(s0);
            q.push(s1);
        } else{
            string ch(1,s[mid]);
            string temp = s;
            temp.insert(mid,ch);
            q.push(temp);
        }
    }
    return 0;
}
int main(){
	int n; 
	cin >> n; 
	int ans = solve(n); 
	cout << ans << endl; 
	return 0;
}
