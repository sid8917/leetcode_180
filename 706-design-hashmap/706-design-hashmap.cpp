class MyHashMap {
public:
    int siz;
    vector<list<pair<int,int>>> m;
    MyHashMap() {
        siz=10;
        m.resize(siz);
        
    }
    
    int hash(int key){
        return key%siz;
    }
    
    list<pair<int,int>>::iterator search(int key){
        int i=hash(key);
        list<pair<int,int>>::iterator it=m[i].begin();
        while(it!=m[i].end()){
            if(it->first==key) return it;
            it++;
        }
        return it;
    }
    void put(int key, int value) {
        int i=hash(key);
        remove(key);
        m[i].push_back({key,value});
    }
    
    int get(int key) {
        int i=hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=m[i].end()) return it->second;
        else return -1;
    }
    
    void remove(int key) {
        int i=hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=m[i].end()) m[i].erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */