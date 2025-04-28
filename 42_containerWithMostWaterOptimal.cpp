#include <iostream>
#include <vector>
using namespace std;

// O(n) , if i travel d distance then j travel n-d distance total travel =d+n-d=n
int main()
{
    vector<int> vec;
    vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int len = vec.size(), i, j, width, height, left, right, area, maxWater = 0;

    i = 0, j = len - 1;
    while (i < j)
    {
        width = j - i;
        height = min(vec[i], vec[j]);
        area = width * height;
        maxWater = max(area, maxWater);

        // we change smaller bar because if we change bigger bar
        // case 1: next bar is smaller than bigger bar still water is stored as per smaller bar so less water store
        // case 2: next bar is bigger than bigger bar still water is stored as per smaller bar so less water store
        // case 3: next bar is equal to bigger bar still water is stored as per smaller bar so less water store
        // case 4: next bar is smaller than smaller bar then water store as per new smaller bar meaning less water store
        // therefore we update the smaller bar hoping the next bar gives more water
        // don't worry already last maxWater is stored so even if we don't find a bigger container after shifts we still have maxWater stored in variable as if never is changed
        if (vec[i] < vec[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << maxWater;
    return 0;
}