private:
        stack<int> pringles;
        stack<int> stax;
public:
    void push(int val) {
        pringles.push(val);
        if (stax.empty() || val <= getMin())
        {
            stax.push(val);	  
        }       
    }
    
    void pop() {
        if (pringles.top() == getMin())
        {
            stax.pop();
        }
        pringles.pop();
    }
    
    int top() {
        return pringles.top();
    }
    
    int getMin() {
		if(stax.empty())
		{
			return NULL;
		}
        return stax.top();
    }
};
