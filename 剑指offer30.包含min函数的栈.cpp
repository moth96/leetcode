#include"solution.h"

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st, minst;
    MinStack() 
    {
        if (!st.empty()) st.pop();
        if (!minst.empty()) minst.pop();
    }

    void push(int x) 
    {
        st.push(x);
        if (minst.empty() || x <= minst.top())
        {
            minst.push(x);
        }
    }

    void pop() 
    {
        if (!st.empty())
        {
            int temp = st.top();
            st.pop();
            if (temp == minst.top()) minst.pop();
        }
    }

    int top() 
    {
        return st.top();
    }

    int min() 
    {
        return minst.top();
    }
};