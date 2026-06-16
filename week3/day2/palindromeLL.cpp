class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *front = head;

        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front; 
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode *newHead = reverse(slow->next);
        ListNode *first = head;
        ListNode *second = newHead;

        while(second != NULL){
            if(first->val != second->val){
                reverse(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};