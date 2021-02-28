#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector< pair<int,int> > vec;
    int sz;
    int x,y;
    cin >> sz;
    int cnt = 0;
    for(int j = 0;j<sz;j++)
    {
        cin >> x >> y;
        vec.push_back( pair<int,int> (x,y) );
    }
    sort(vec.begin(),vec.end());
    for(int a=0;a<sz;a++)
    {
        for(int b = 0;b<vec[a].first;b++)
        {
            if(vec[a].first >= vec[b].second)
            {
                cnt++;
            }
        }
    }
    cnt=cnt+1;
    cout << cnt;
}
