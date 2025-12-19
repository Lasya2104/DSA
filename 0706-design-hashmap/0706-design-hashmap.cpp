class Node{
    public:
        int key;
        int value;
        Node* next;
        Node(int k,int v)
        {
            key=k;
            value=v;
            next=NULL;
        }
};
class MyHashMap {
public:
    Node* head;
    MyHashMap() {
        head=new Node(-1,-1);
    }
    
    void put(int key, int value) {
        // if(contains(key))return;
        Node* temp=head;
        while(temp->next!=NULL)
        {
            if(temp->next->key==key)
            {
                temp->next->value=value;
                return;
            }
            temp=temp->next;
        }
        temp->next=new Node(key,value);
    }
    
    int get(int key) {
        Node* temp=head;
        while(temp)
        {
            if(temp->key==key)
            {
                return temp->value;
            }
            temp=temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            if(temp->next->key==key)
            {
                Node* del=temp->next;
                temp->next=del->next;
                delete del;
                return;
            }
            temp=temp->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */