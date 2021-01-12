 #include<bits/stdc++.h> 
 
 struct Tree{
	 int val; 
	 Tree * left; 
	 Tree * right; 
 };
 bool check(Tree * root){
     if(root->left && root->right){
         if((root->left->val%2 == 0 && root->right->val%2 ==1) || (root->left->val%2 ==1 && root->right->val%2 ==0)) return true; 
         else return false; 
     }
     else return false; 
 }
int helper(Tree *root , int & cnt){
    if(root == NULL)
        return 0; 
    root->val += helper(root->left,cnt) + helper(root->right,cnt);
    if(check(root))
        cnt++; 
    return root->val; 
}
int solve(Tree* root) {
    int cnt = 0; 
    int ans = helper(root , cnt);
    return cnt; 
}
int main(){ 
	return 0; 	
	}
/*
	there is also a different way of checking of parities of both children 
	* we can simply get the value of mod by 2 and compare the value of their sum to 1 if the sum is 1 that means they have opposite parity 
	* or we can simply check by this (a&1)^(b&1); 
 
 
 */ 
