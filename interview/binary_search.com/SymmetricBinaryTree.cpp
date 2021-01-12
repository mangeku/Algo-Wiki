#include<bits/stdc++.h> 
using namespace std; 


 class Tree {
    public:
       int val;
       Tree *left;
       Tree *right;
 };

bool helper(Tree * first , Tree * second){
    if(first == NULL && second == NULL) return true; 
    if(first == NULL || second == NULL) return false;
    if(first->val != second->val) return false;  
    return helper(first->left,second->right) && helper(first->right,second->left);
}
bool solve(Tree* root) {
   if(root == NULL) return true;    
   if(root->left == NULL && root->right == NULL ) return true; 
   return helper(root->left , root->right); 

}
int main(){ 
		
		return 0; 
}
