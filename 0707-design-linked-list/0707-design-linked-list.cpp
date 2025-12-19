class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};
class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        Node* temp=head;
        for(int i=0;i<index;i++)
        {
            if(temp==NULL)return -1;
            temp=temp->next;
        }
        if(temp==NULL)return -1;
        else return temp->data;
    }
    
    void addAtHead(int val) {
        Node* nn=new Node(val);
        nn->next=head;
        head=nn;
    }
    
    void addAtTail(int val) {
        Node* temp=head;
        if(head==NULL)
        {
            head=new Node(val);
            return;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new Node(val);
        temp=temp->next;
        temp->next=NULL;
    }
    
    void addAtIndex(int index, int val) {
        Node* temp=head;
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        for(int i=0;i<index-1;i++)
        {
            if(temp==NULL)return;
            temp=temp->next;
        }
        if(temp==NULL)return;
        Node* nn=new Node(val);
        nn->next=temp->next;
        temp->next=nn;
    }
    
    void deleteAtIndex(int index) {
        Node* temp=head;
        if(index == 0) {
        if(head==NULL)return;
        Node* del = head;
        head = head->next;
        delete del;
        return;
        }
        for(int i=0;i<index-1;i++)
        {
            if(temp->next==NULL)return;
            temp=temp->next;
        }
        if(temp->next==NULL)return;
        Node* del=temp->next;
        temp->next=del->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */