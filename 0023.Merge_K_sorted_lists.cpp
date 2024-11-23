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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v1;
        for (auto list : lists) {
            while (list) {
                v1.push_back(list->val);
                list = list->next;
            }
        }
        sort(v1.begin(), v1.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for (auto i : v1) {
            temp->next = new ListNode(i);
            temp = temp->next;
        }
        return dummy->next;
    }
};