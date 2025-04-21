/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if(head == null || head.next == null)
            return false ; 

        ListNode f, s; 

        f = s = head;
        boolean entr = false;
        while(f != null && f.next != null && s.next != null && s.next.next != null){
            entr = true; 
            f = f.next;
            s = s.next.next ;
            if(s == f)
                break;   
        }
        
                    
        return f == s && f != null && entr;
    }
}