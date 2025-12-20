class Node{
    public:
        string id;
        int time;
        Node* next;
        Node(string i,int t)
        {
            id=i;
            time=t;
            next=NULL;
        }
};

class AuthenticationManager {
public:
    Node* head;
    int deadline;
    AuthenticationManager(int timeToLive) {
        head=NULL;
        deadline=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        if(head==NULL)
        {
            head=new Node(tokenId,currentTime);
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new Node(tokenId,currentTime);
    }
    
    void renew(string tokenId, int currentTime) {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->id==tokenId && temp->time+deadline>currentTime)
            {
                temp->time=currentTime;
                return;
            }
            temp=temp->next;
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        Node* temp=head;
        int cnt=0;
        while(temp)
        {
            if(temp->time+deadline>currentTime)
            {
                cnt++;
            }
            temp=temp->next;
        }
        return cnt;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */