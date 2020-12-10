#include "solution.h"

bool lemonadeChange(vector<int>& bills)
{
    vector<int> vec(2,0);
    for (const auto x : bills)
    {
        if (x == 5)
            vec[0]++;
        else if(x == 10)
        {
            if(vec[0])
            {
                vec[0]--;
                vec[1]++;
            }
            else return false;
        }
        else if(x == 20)
        {
            if(vec[0] && vec[1])
            {
                vec[0]--;
                vec[1]--;
            }
            else if(vec[0] > 2)
            {
                vec[0] -= 3;
            }
            else return false;
        }
    }
    return true;
}
