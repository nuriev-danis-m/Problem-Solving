// 445. Add Two Numbers II
// Medium
// You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example 1:
// Input: l1 = [7,2,4,3], l2 = [5,6,4]
// Output: [7,8,0,7]

// Example 2:
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [8,0,7]

// Example 3:
// Input: l1 = [0], l2 = [0]
// Output: [0]
 


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
        //Make two stacks to keep numbers
        stack<int> n1, n2;
        //Fill 2 stack
        while(l1){
            n1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            n2.push(l2->val);
            l2 = l2->next;
        }
        //Add in loop
        int carry = 0;
        ListNode *result = nullptr;
        while(!n1.empty() || !n2.empty() || carry){
            int sum = carry;
            if(!n1.empty()){
                sum += n1.top();
                n1.pop();
            }
            if(!n2.empty()){
                sum += n2.top();
                n2.pop();
            }
            carry = sum / 10;
            ListNode *newNode = new ListNode(sum % 10);
            newNode->next = result;
            result = newNode;
        }
        return result;
    }
};