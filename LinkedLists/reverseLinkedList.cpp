    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return(head);
        }
        ListNode* temp = head; 
        ListNode* ref = head;
        while(temp->next){
            ref = temp->next->next;
            temp->next->next = head;
            head = temp->next;
            temp->next = ref;
        }
        return(head);
    }