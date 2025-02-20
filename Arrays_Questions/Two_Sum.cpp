#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) 
{
    map<int,int>m;
    vector<int> result;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int diff=target-nums[i];
        if(m.find(diff)!=m.end())
        {
            result.push_back(m[diff]);
            result.push_back(i);
            return result ;
        }
      m[nums[i]]=i;
    }
    return result;

}
int main()
{
    vector<int> nums;
    int target;
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<int> result = twoSum(nums, target);
    cout<<"The indices of the two numbers are: ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
   
}