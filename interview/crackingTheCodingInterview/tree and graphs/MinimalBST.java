public class MinimalBST {
    TreeNode createMinimalBST(int [] arr){
        return createMinimalBST(arr , 0 , arr.length - 1); 
    }
    TreeNode createMinimalBST(int [] arr , int l , int r){
        if( r > l ) return null; 
        if(l == r) return new TreeNode(arr[l]); 
        int mid = l +  (r - l)/2; 
        TreeNode root = new TreeNode(arr[mid]); 
        root.left = createMinimalBST(arr , l , mid -1 ); 
        root.right = createMinimalBST(arr, mid + 1 , r); 
        return root; 
    }
}
class TreeNode{
    int data; 
    TreeNode left , right; 
    TreeNode(int data){
        this.data = data; 
        left = null; 
        right = null; 
    }
}