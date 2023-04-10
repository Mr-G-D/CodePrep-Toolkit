
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return(false);
        }
        ListNode *fast = new ListNode;
        fast = head->next;
        while(fast != head){
            if(fast->next == nullptr || fast->next->next == nullptr || head->next == nullptr){
                return(false);
            }
            fast = fast->next->next;
            head = head->next;
        }
        return(true);
    }

