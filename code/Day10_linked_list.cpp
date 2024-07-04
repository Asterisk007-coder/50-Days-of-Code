/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// swap linked list
// https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/

using n = ListNode *;
ListNode *Solution::swapPairs(ListNode *a)
{

    n head = a;
    n b;
    while (a != 0 and a->next != 0)
    {
        if (head == a)
            head = a->next;
        else
            b->next = a->next;

        b = a->next;
        a->next = b->next;
        b->next = a;

        b = a;
        a = a->next;
    }
    return head;
}
