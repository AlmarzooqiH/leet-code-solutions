//https://leetcode.com/problems/add-two-numbers/description/


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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode head = new ListNode(0);
        ListNode tmp = head;

        while (l1 != null || l2 != null) {
            int d1 = (l1 != null) ? l1.val : 0;
            int d2 = (l2 != null) ? l2.val : 0;
            int sum = d1 + d2 + carry;
            tmp.next = new ListNode(sum % 10);
            carry = sum / 10;

            tmp = tmp.next;
            l1 = (l1 != null) ? l1.next : null;
            l2 = (l2 != null) ? l2.next : null;
        }

        if (carry > 0)
            tmp.next = new ListNode(carry);
        return (head.next);
    }
}

//Ignore this attempt (It got about 500 test cases properly before overflowing)
// class Solution {
//     public int getVal(ListNode n, int multipier){
//         if (n == null || (n.val < 0 || n.val > 9))
//             return (0);
//         return (getVal(n.next, multipier * 10) + (n.val * multipier));
//     }
//     public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
//         int val = getVal(l1, 1) + getVal(l2, 1);
//         ListNode head = new ListNode(val % 10);
//         val /= 10;
//         ListNode tmp = head;
//         while (val > 0)
//         {
//             ListNode nn = new ListNode(val % 10);
//             tmp.next = nn;
//             tmp = tmp.next; 
//             val /= 10;
//         }
//         return (head);
//     }
// }
