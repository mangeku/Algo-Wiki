import java.util.HashMap;

public class PathsWithSum {
    // nlog(n) time complexity brute force appraoch
    int countPathsWithSum(TreeNode root , int targetSum){
        if(root == null) return 0; 

        int pathsFromRoot = countPathsWithSumFromNode(root,0,targetSum); 
        int pathsOnLeft = countPathsWithSum(root.left , targetSum); 
        int pathsOnRight = countPathsWithSum(root.right , targetSum); 
        return pathsOnLeft + pathsOnRight + pathsFromRoot; 
    }
    int countPathsWithSumFromNode(TreeNode root , int currentSum , int targetSum){
        if(root == null) return 0; 
        currentSum += root.data; 
        int totalPaths = 0; 
        if(currentSum == targetSum){
            totalPaths++;
        }
        totalPaths += countPathsWithSumFromNode(root.left, currentSum, targetSum); 
        totalPaths += countPathsWithSumFromNode(root.right,currentSum , targetSum); 
        return totalPaths; 
    }

    public int countPathsWithSumII(TreeNode root, int targetSum){
        return countPathWithSumII(root, targetSum , 0 , new HashMap< Integer , Integer > ()); 
    }
    public int countPathsWithSumII(TreeNode root , int targetSum , int runningSum , Hashmap< Integer , Integer > pathCounts){
        if(root == null) return 0; 
        runningSum += root.data; 
        int sum = runningSum - targetSum; 
        int totalPaths = pathCount.getOrDefault(sum,0); 
        if(targetSum == runningSum) totalPaths++; 
        // Increment pathCount , recurse , then decrement pathCount 
        incrementHashTable(pathCount,runningSum , 1); 
        totalPaths += countPathsWithSumII(root.left, targetSum, runningSum, pathCounts);
        totalPaths += countPathsWithSumII(root.right, targetSum, runningSum, pathCounts); 
        return totalPaths; 
    }

    public void incrementHashTable(HashMap<Integer,Integer> hashTable , int key , int delta){
        int newCount = hashTable.getOrDefault(key,0) + delta; 
        if(newCount <= 0) hashTable.remove(key); 
        else hashTable.put(key,newCount); 
    }

}
