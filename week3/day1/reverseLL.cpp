ListNode* reverseList(ListNode* head) {
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