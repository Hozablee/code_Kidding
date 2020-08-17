#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compares(int i,int j)
{
    return i>j;
}
int main()
{
    vector<int> v;
    int n,t;
    int nums;
    int s=0;
    cin >> n >> t;
    for(int i = 0;i<n;i++)
    {
        cin >> nums;
        v.push_back(nums);
    }
    sort(v.begin(),v.end(),compares);
    for(int j = 0;j<t;j++)
    {
        s += v[j];
    }
    cout << s;
}
