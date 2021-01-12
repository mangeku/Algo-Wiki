#include<bits/stdc++.h> 
using namespace std; 
class LLNode {
      public:
         int val;
         LLNode *next;
};
LLNode* solve(LLNode* node, int target) {
  
    while(node && node->val == target){
        node = node->next; 
    }
    LLNode * head = node; 
    LLNode * pre = NULL; 
    while(head != NULL){ 
        if(head->val != target)
        {
            pre = head; 
            head = head->next; 
        }
        else{
            LLNode * temp = head; 
            head = head->next; 
            pre->next = head; 
            delete temp; 
        }
    }
    return node;  
}
int main(){
	
	
	return 0; 
}
