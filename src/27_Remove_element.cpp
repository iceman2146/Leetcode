#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
void prnt(vector<int> &nums_1)
{
    cout << "nums_1: {";
    for (auto i = nums_1.begin(); i != nums_1.end(); ++i)
    {
        if (next(i) != end(nums_1))
            cout << *i << ",";
        else
            cout << *i;
    }
    cout << "}" << endl;
}

int removeElement(vector<int>&, int);
int main()
{
    vector<int> nums_1 = {1, 2, 3, 2, 3, 1};
    int m = 3;

    prnt(nums_1);
    removeElement(nums_1, m);
    prnt(nums_1);

    return 0;
}

int removeElement(vector<int>& nums, int val)
{
    int k=0;
    for(auto i = nums.begin(); i != nums.end(); ++i)
    {
        if(*i==val)
        {
            k++;
            nums.erase(i);
            //nums.
        }
    }
    return k;
}