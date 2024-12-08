// Leetcode Solution
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head, *ptr=head;
        int count=1;
        if(head==nullptr || head->next==NULL || k==0) return head;
        while(temp->next !=nullptr){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        int rt=k%count;
        for(int i=0;i<count-rt-1;i++){
            ptr=ptr->next;
        }
        head=ptr->next;
        ptr->next=nullptr;
        return head;
    }
};