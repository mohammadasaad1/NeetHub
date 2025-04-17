/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
           public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
            var dummyHead = new ListNode(-1);
            var current = dummyHead ; 
            while (true){
                if(list1 == null) {
                    current.next = list2;
                    break;
                }
                else if(list2 == null){
                    current.next = list1 ; 
                    break;
                }
                // no null yet
                if(list1.val <= list2.val){
                    current.next = list1;
                    current = list1;
                    list1 = list1.next ; 
                }
                else{
                    current.next = list2;
                    current = list2;
                    list2 = list2.next ;
                }
            }
            return dummyHead.next;
        }

}