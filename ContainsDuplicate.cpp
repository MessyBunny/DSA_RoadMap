#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

bool checkDuplicates(vector<int> &nums)
{
    int n=nums.size();
    int m=set<int>(nums.begin(),nums.end()).size();
   
    return n>m;
}
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    vector<int> nums ;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    if(checkDuplicates(nums))
    {
        cout<<"Array contains duplicates"<<endl;
    }
    else
    {
        cout<<"Array does not contain duplicates"<<endl;
    }
   
}
