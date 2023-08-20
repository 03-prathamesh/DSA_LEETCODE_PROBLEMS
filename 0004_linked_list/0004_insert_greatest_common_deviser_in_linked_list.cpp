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
    int gcd(int a, int b){
        int maxi=max(a,b);
        int mini=min(a,b);
        for(int i=mini;i>=0;i--){
            if(maxi%i==0 && mini%i==0){
                return i;
            }
            
        }
        return 1;
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *p=head;
        ListNode *q=p->next;
     //   ListNode *temp;//for creating the new node
        while(q!=NULL){
            int element=gcd(p->val,q->val);
           ListNode *temp=new ListNode;  //creating a new node
            temp->val=element;
            temp->next=q;
         
            p->next=temp;
           p=q;
           q=q->next;
            
        }
        return head;
    }
};