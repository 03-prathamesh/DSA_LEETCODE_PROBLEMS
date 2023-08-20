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
    ListNode* sortList(ListNode* head) {
        vector<int>temp;
        ListNode *p=head;
        while(p!=NULL){
            temp.push_back(p->val);
            p=p->next;
        }
        sort(temp.begin(),temp.end());
        ListNode *q=head;
        int i=0;
        while(q){
            q->val=temp[i];
            q=q->next;
            i++;
        }
        return head;
    }
};