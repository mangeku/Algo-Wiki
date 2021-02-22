
public class deleteMiddleNode {
    public boolean solve(LinkedListNode nodeToDelete){
        if(nodeToDelete == null || nodeToDelete.next == null ) return false; 
        LinkedListNode nextNode = nodeToDelete.next; 
        nodeToDelete.data = nextNode.data; 
        nodeToDelete.next = nextNode.next; 
        return true; 
    }
}
