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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        while(true)
        {
            ListNode* newNode = new ListNode();

            if(list1 && list2){
                if(list1->val < list2->val){
                    newNode->val = list1->val;
                    list1 = list1->next;
                }
                else{
                    newNode->val = list2->val;
                    list2 = list2->next;
                }
            }
            else if(list1 && !list2){
                newNode->val = list1->val;
                list1 = list1->next;
            }
            else if(!list1 && list2){
                newNode->val = list2->val;
                list2 = list2->next;
            }
            else{
                break;
            }

            temp->next = newNode;
            temp = newNode;
        }

        return head->next;
    }
};
