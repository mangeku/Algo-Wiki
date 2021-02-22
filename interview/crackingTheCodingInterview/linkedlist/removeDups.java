import java.util.*; 
class LinkedListNode{
	int data; 
	LinkedListNode next; 
	LinkedListNode(){
		data = 0; 
		next = null; 
	}
}

public class removeDups{
	// O(n) time complexity and O(1) space complexity
	public void deleteDups(LinkedListNode n){
		HashSet<Integer> set = new HashSet<Integer>(); 
		LinkedListNode previous = null; 
		while( n != null){
                	if(set.contains(n.data)){
				previous.next = n.next; 
			}
			else{
				set.add(n.data); 
				previous = n;
			}		
			n = n.next; 
		}	

	}
	// O(n^2) time complexity and O(1) space complexity
	public void deleteDups2(LinkedListNode n){
		LinkedListNode current = n; 
		while(current !=  null){
			LinkedListNode runner = current; 
			while(runner.next != null){
				if(runner.next.data == runner.data){
					if(current.data == runner.next.data){
						runner.next = runner.next.next; 
					}
					else{
						runner = runner.next; 
					}
				}
			}
		}	
	}
}
