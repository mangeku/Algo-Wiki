import java.util.*; 
public class maxPathSumBetTwoLeaf{
	public static long findMaxSumPath(TreeNode root) {
		MyWrapper ans = new MyWrapper(); 
		solve(root , ans); 
        if(ans.res == -999999999) return -1; 
        return ans.res; 
	}
    public static long solve(TreeNode root , MyWrapper ans){
        if(root == null) return 0; 
        if(root.left == null && root.right == null) return root.data; 
        long ls = solve(root.left,ans); 
        long rs = solve(root.right,ans); 
        if(root.left != null && root.right !=  null){
            ans.res = Math.max(ans.res , ls + rs + root.data); 
            return Math.max(ls,rs) + root.data; 
        }
        if(root.left != null) return ls + root.data; 
        return rs + root.data; 
    }
}
class MyWrapper{
	long res = -999999999; 
}