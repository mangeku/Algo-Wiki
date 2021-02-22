
class BinaryTreeNode<T> {
    T data;
    BinaryTreeNode<T> left;
    BinaryTreeNode<T> right;

    public BinaryTreeNode(T data) {
        this.data = data;
    }
}

public class Solution {
    public static BinaryTreeNode<Integer> lcaOfThreeNodes(BinaryTreeNode<Integer> root, int node1, int node2,
            int node3) {
        BinaryTreeNode<Integer> lca = lcaOfTwoNodes(root,node1,node2); 
        return lcaOfTwoNodes(root,lca.data,node3); 
    }
    public static BinaryTreeNode<Integer> lcaOfTwoNodes(BinaryTreeNode<Integer> root , int a , int b){
		if(root == null) return null; 
        if(root.data == a || root.data == b) return root; 
        BinaryTreeNode<Integer> lft = lcaOfTwoNodes(root.left,a,b); 
        BinaryTreeNode<Integer> rgt = lcaOfTwoNodes(root.right,a,b);
        if(lft!=null && rgt!=null) return root; 
        if(lft!=null) return lft; 
        return rgt; 
    }
}
