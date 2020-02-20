#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<pair<int,int> > v1;
    int a,b;
    for(int outs = 0;outs<num;outs++)
    {
        cin >> a>>b;
        v1.push_back(pair<int,int> (a,b));
    }
    for(int p =0;p<v1.size();p++)
    {
        cout << v1[p].first << " " << v1[p].second<<endl;
    }
}
