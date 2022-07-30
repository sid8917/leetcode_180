class LRUCache {
public:
    map<int,int> val;
    map<int,list<int>::iterator> address;
    list<int> lru;
    int cap;
    int siz;
    LRUCache(int capacity) {
        cap=capacity;
        siz=0; 
    }
    
    int get(int key) {
        
        if(val.find(key)==val.end()) return -1;
        
        //update only list
        lru.erase(address[key]);
        siz--;
        lru.push_front(key);
        
        
        // new address added
        siz++;
        address[key]=lru.begin(); 
        return val[key];
    }
    
    void put(int key, int value) {
        if(val.find(key)!=val.end()){
            lru.erase(address[key]);
            address.erase(key);
            val.erase(key);
            siz--;
        }
        
        
        if(siz==cap){
            int listLast=lru.back();
            lru.pop_back();
            address.erase(listLast);
            val.erase(listLast);
            siz--;
        }
        
            siz++;
            lru.push_front(key);
            val[key]=value;
            address[key]=lru.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */