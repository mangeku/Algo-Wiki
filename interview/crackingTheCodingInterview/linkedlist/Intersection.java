public class Intersection {
    // return null when there is no intersection between linkedlists
    public LinkedListNode find(LinkedListNode l1 , LinkedListNode l2){
        if(l1 == null || l2 == null) return null; 
        int sz1 = 0,sz2 = 0; 
        LinkedListNode x , y; 
        x = l1; 
        y = l2;
        while(x.next != null){
            sz1++; 
            x = x.next;
        } 
        while(y.next != null){
            sz2++; 
            y = y.next; 
        }
        if(x!=y) return null; 
        sz1++;
        sz2++;
        LinkedListNode longer = l1, shorter = l2; 
        if(sz2 > sz1){
            longer = l2; 
            shorter = l1; 
            while(sz2 > sz1){
                longer = longer.next;
                sz2--; 
            }
        }
        while(sz1 > sz2){
            longer = longer.next; 
            sz1--; 
        }
        while(longer != shorter)
        {
            longer = longer.next; 
            shorter = shorter.next; 
        }
        return longer; 
    }
}
