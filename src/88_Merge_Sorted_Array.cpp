#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
void Print(vector<int> &nums_1, int m, vector<int> &nums_2, int n)
{
    cout << "nums_1: {";
    for (auto i = nums_1.begin(); i != nums_1.end(); ++i)
    {
        if (next(i) != end(nums_1))
            cout << *i << ",";
        else
            cout << *i;
    }
    cout << "}"
         << " value: " << m << endl;

    cout << "nums_2: {";
    for (auto i = nums_2.begin(); i != nums_2.end(); ++i)
    {
        if (next(i) != end(nums_2))
            cout << *i << ",";
        else
            cout << *i;
    }
    cout << "}"
         << " value: " << n << endl;
}
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

void merge(vector<int> &, int, vector<int> &, int);
int main()
{
    vector<int> nums_1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums_2 = {2, 4, 5};

    int m = 3;
    int n = 3;
    Print(nums_1, m, nums_2, n);
    merge(nums_1, m, nums_2, n);
    Print(nums_1, m, nums_2, n);
    return 0;
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int max_num1 = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    
    while (i >= 0 && j >= 0)
    {
        //prnt(nums1);
        if (nums1[i] > nums2[j])
        {
            nums1[max_num1] = nums1[i];
            i--;
            max_num1--;
        }
        else
        {
            nums1[max_num1] = nums2[j];
            j--;
            max_num1--;
        }
    }
    while (i >= 0)
        nums1[max_num1--] = nums1[i--];
    while (j >= 0)
        nums1[max_num1--] = nums2[j--];
    
}