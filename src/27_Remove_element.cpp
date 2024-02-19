#include <vector>
#include <iterator>
#include <iostream>
struct dummy
{
    
    short a;
    short b;
    dummy():a(1),b(2){}
    dummy(int na, int nb):a(na),b(nb){}
};
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
    int c=3;
    dummy D;
    vector<int> nums_1 = {0,1,2};
    int m = 2;

    prnt(nums_1);
    m=removeElement(nums_1, m);
    cout<<endl<<m<<endl;
    prnt(nums_1);

    return 0;
}

int removeElement(vector<int>& nums, int val)
{
    int k=0;
     /*for(auto i = nums.begin(); i != nums.end(); ++i)
    {
        if(*i==val)
        {
            k++;
            nums.erase(i);
            
        }
    } */
     for(auto i=0;i<nums.size();i++)
    {
        if(nums[i]!=val)
            nums[k++]=nums[i];
        
    }
    //k=nums.size()-k;
    return k; 
}