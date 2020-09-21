#include"solution.h"

class CQueue 
{
    stack<int> s1, s2;
public:
    CQueue() 
    {
        while (!s1.empty()) s1.pop();
        while (!s2.empty()) s2.pop();
    }

    void appendTail(int value) 
    {
        s1.push(value);
    }

    int deleteHead() 
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) return -1;
        else
        {
            int delElem = s2.top();
            s2.pop();
            return delElem;
        }
    }
};