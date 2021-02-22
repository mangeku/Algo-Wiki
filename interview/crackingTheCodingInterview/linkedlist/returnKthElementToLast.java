
public class returnKthElementToLast{
    public int kthElementFromLast(LinkedListNode head , int k){
        if(head == null) return 0; 
        int l = kthElementFromLast(head.next,k) + 1; 
        if(l == k){
            System.out.println("Kth Element From the Last is : " +  head.data);
        }
        return l; 
    }
    public LinkedListNode kthElementFromLastIterative(LinkedListNode head , int k){
        LinkedListNode p1 = head; 
        LinkedListNode p2 = head; 
        for(int i = 0 ; i < k ; i++){
            if(p1 == null){
                return null; 
            }
            p1 = p1.next;
        }
        while(p1 != null){
            p1 = p1.next; 
            p2 = p2.next; 
        }
        return p2;
    }
}