/************************************************************

    Following is the TreeNode class structure

    class TreeNode {
	int data;
	TreeNode left;
	TreeNode right;

	TreeNode(int data) {
		this.data = data;
		this.left = null;
		this.right = null;
	}

}

************************************************************/
import java.util.ArrayList;
import java.util.Stack; 
import java.util.LinkedList; 
import java.util.Queue; 

public class Solution {
	public static ArrayList<Integer> reverseLevelOrder(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<Integer>(); 
		Queue<TreeNode> q = new LinkedList<TreeNode> (); 
        Stack<Integer> st = new Stack<>(); 
        if(root == null) return ans; 
        q.add(root); 
        while(q.isEmpty() == false){
            TreeNode cur = q.peek(); 
            q.remove(); 
            st.push(cur.data); 
            if(cur.left != null )  q.add(cur.left); 
            if(cur.right != null) q.add(cur.right); 
        }
        while(st.empty() == false){
            int temp = st.peek(); 
            st.pop(); 
           ans.add(temp); 
        }
        return ans; 
	}
}
