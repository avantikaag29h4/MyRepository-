
int getMiddle(Node* head) {
        vector<int>res;
        Node *temp=head;
        while(temp!=NULL){
            res.push_back(temp->data);
            temp=temp->next;
        }
         int n=res.size();
        // for(int i=0;i<n;i++){
            // cout<<res[i]<<endl;
        // }
        // int n=res.size();
        if(n%2==0){
        int x=n/2;
        return res[x];
        }
        else
        return res[n/2];
    }
};
