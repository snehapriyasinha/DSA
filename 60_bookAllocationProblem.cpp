#include <stdio.h>
#include <vector>
using namespace std;

bool isValid(vector<int> v, int pages, int students, int mid)
{
    int maxAllowedPages = mid;
    int stud = 1;
    int page = 0;
    for (int i = 0; i < pages; i++)
    {
        if (v[i] > maxAllowedPages)
        { // corner case v[i]=5, maxAllowedPages=10
            return false;
        }
        if (v[i] + page <= maxAllowedPages)
        {
            page += v[i];
        }
        else
        {
            stud++;
            page = v[i];
        }
    }
    return stud <= students;
    // If books can assigned to less than students students then, it can be assigned to exactly students students as well
    // return stud == students;
}

int minPossibleMaxPages(vector<int> v, int pages, int students)
{
    int sum = 0;
    for (int i = 0; i < pages; i++)
    {
        sum += v[i];
    }
    int st = 0, end = sum, mid, ans = -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (isValid(v, pages, students, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {2, 1, 3, 4};
    int students = 2;
    int pages = v.size();
    int ans = minPossibleMaxPages(v, pages, students);
    printf("Minimum possible maximum pages allocated: %d", ans);
    return 0;
}