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
    ListNode* reverseList(ListNode* head) {
       ListNode *prev_node=NULL;
       ListNode *current_node=head;
       while(current_node!=NULL){
           ListNode *next_node=current_node->next;
           current_node->next=prev_node;
           prev_node=current_node;
           current_node=next_node;
       }
       return prev_node;
    }
};
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         vector<int>data;
//         ListNode *temp=head;
//         ListNode* final=head;

//         while(temp!=NULL){

//             int n=temp->val;
//             data.push_back(n);
//             temp=temp->next; //switch to next node
           
//         }
        
//         int start=0;
//         int end=data.size()-1;
//         while(start<=end){
//             int d=data[end];
//             data[end]=data[start];
//             data[start]=d;

//             start++;
//             end--;
//         }
        
//         int i=0;
//         while(final){
//             final->val=data[i];
//             final=final->next;
//             i++;
//         }
        
//         return head;
//     }
// };
