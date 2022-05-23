/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        ListNode* l3= nullptr;
        ListNode* lresults= nullptr;
        while (l1 || l2 || sum)
        {
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            ListNode* newNode = new ListNode(sum%10);
            if(!lresults)
            {
               lresults = l3 = newNode;
            }                
            else
            {
                l3->next = newNode;
                l3 = newNode;
            }
            
            sum /= 10; // new sum start with carry value
        }
        
        return lresults;
    }
};