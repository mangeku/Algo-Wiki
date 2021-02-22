class Wrapper{
    boolean flag = true; 
}
public class Palindrome {
    LinkedListNode head2; 
    public boolean isPalindrome(LinkedListNode head){
        Wrapper ans = new Wrapper();
        head2 = head;
        solve(head,ans); 
        return ans.flag;  
    }
    public void solve(LinkedListNode head , Wrapper ans){
        if(head == null) return ; 
        solve(head.next , ans);
        if(head2.data != head.data){
            ans.flag = false; 
            return ; 
        }
        head2 = head2.next; 
    }
}
