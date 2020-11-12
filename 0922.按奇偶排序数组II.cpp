#include "solution.h"

vector<int> sortArrayByParityII(vector<int>& A)
{
    int n = A.size();
    vector<int>res(n);
    int i = 0;
    int j = 1;
    for(int elem:A)
    {
        if(elem % 2 == 0)
        {
            res[i] = elem;
            i += 2;
        }
        if(elem % 2 == 1)
        {
            res[j] = elem;
            j += 2;
        }
    }
    return res;
}
	
