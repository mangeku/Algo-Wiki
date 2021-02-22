
class BinaryTreeNode<T> {
    T data;
    BinaryTreeNode<T> left;
    BinaryTreeNode<T> right;
    
    public BinaryTreeNode(T data) {
        this.data = data;
    }
}

public class Solution {
    public static int largestCommonAncestor(BinaryTreeNode<Integer> root, int data1, int data2) {
        return solve(root,data1,data2); 
        
    }
    public static int solve(BinaryTreeNode<Integer> root, int data1, int data2) {
        if(root == null) return -1; 
        if(root.data == data1 || root.data == data2) return root.data; 
		int lft = solve(root.left , data1 , data2); 
        int rgt = solve(root.right ,data1 , data2); 
        if(lft != -1 && rgt != -1) return root.data; 
        if(lft != -1) return Math.max(root.data,lft); 
        if(rgt != -1) return Math.max(root.data,rgt); 
        return -1; 
    }

}
