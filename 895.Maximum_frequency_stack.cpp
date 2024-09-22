class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int,stack<int>> s;
    int maxF=0;
    FreqStack() {
                                        
    }
    
    void push(int val) {
        freq[val]++;
        maxF=max(maxF,freq[val]);
        s[freq[val]].push(val);
    }
    
    int pop() {
        int x=s[maxF].top();
        s[maxF].pop();
        freq[x]--;
        if(s[maxF].empty()) maxF--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */