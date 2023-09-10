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
    bool isPalindrome(ListNode* head) {
      vector<int>v;
      ListNode *p=head;
      while(p!=NULL){
          v.push_back(p->val);
          p=p->next;
      }
      int s=0;
      int e=v.size()-1;
      while(e>=s){
          if(v[s]!=v[e]){
              return false;
          }
          s++;
          e--;
      }
      return true;
        
    }
};