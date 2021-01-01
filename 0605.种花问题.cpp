bool canPlaceFlowers(vector<int>& flowerbed, int n) 
{
    int num = 0;
    int count = 1;
    for(int i = 0; i < flowerbed.size(); i++)
    {
        if (0 == flowerbed[i]) count++;
        else count = 0;
        if (count == 3)
        {
            count = 1;
            num++;
        }
    }
    if (3 == ++count) num++;
    return num >= n;
}
