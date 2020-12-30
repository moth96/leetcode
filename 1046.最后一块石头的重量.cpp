int lastStoneWeight(vector<int>& stones) 
{
    int n = stones.size();
    if (n == 0) return 0;
    if (n == 1) return stones[0];
    priority_queue<int> q;
    for (int x : stones) q.push(x);
    while(q.size() > 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        if(a == b) continue;
        else q.push(a-b);
    }    
    return q.size() ? q.top() : 0;
}
