#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<map>
#include<set>
using namespace std;
bool isAnagram(string s, string t)
{
    int n=s.size();
    int m=t.size();
    unordered_map<char,int> mp;
    unordered_map<char,int> np;
    if(n!=m)
    {
        return false;
    }
    else{
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            np[t[i]]++;
        }
    }
    return mp==np;
}
int main()
{
    string s;
    string t;
    cin>>s>>t;
    cout<<isAnagram(s,t)<<endl;
    return 0;
}