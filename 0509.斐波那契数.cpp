int fib(int n) 
{
    if (n < 2) return n;
    int p1 = 0, p2 = 1;
    n -= 1;
    int cur = 0;
    while(n--)
    {
        cur = p1 + p2;
        p1 = p2;
        p2 = cur;
    }
    return cur;
}
