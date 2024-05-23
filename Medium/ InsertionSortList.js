/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var insertionSortList = function(head) {
    var shadow = new ListNode(0, head);
    var prev = head, curr = head.next;
    
    while (curr)
    {
        if (curr.val >= prev.val)
        {
            prev = curr;
            curr = curr.next;
            continue ;
        }
        var tmp = shadow;
        while (curr.val > tmp.next.val)
            tmp = tmp.next;
        prev.next = curr.next;
        curr.next = tmp.next;
        tmp.next = curr;

        curr =  prev.next;
    }
    return shadow.next;
};