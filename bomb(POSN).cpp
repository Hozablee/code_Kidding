#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector < pair<int,int> > v;
    int n;
    int a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        v.push_back( pair<int,int> (a,b) );
    }

    for(int x=0;x<v.size();x++)
    {
        if(v[x].first > v[x+1].first )
        {
            cout << v[x].first << " " << v[x].second;
        }
        cout << endl;
    }
}
