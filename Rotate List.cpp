    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        int n=1;
        ListNode* p = head;
        while(p->next!=NULL){
            n++;
            p=p->next;
        }
        k = k%n;
        if(k==0) return head;
        ListNode* q=head;
        int j=0;
        while(j<n-k-1){
            j++;
            q=q->next;
        }
        ListNode* ans = q->next;
        q->next = NULL;
        p->next = head;
        return ans;
    }
