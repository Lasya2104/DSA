class Skiplist {
private:
    vector<int>arr;
public:
    Skiplist() {
        
    }
    
    bool search(int target) {
        if(arr.size()==0)return false;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==target)return true;
        }
        return false;
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    bool erase(int num) {
        auto it=find(arr.begin(),arr.end(),num);
        if(it==arr.end())return false;
        arr.erase(it);
        return true;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */