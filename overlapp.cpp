#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int c = 0;
    vector< pair<int,int> > v1;
    int n ;
    int num1,num2;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> num1 >> num2;
        num1 = num1%104729;
        num2 = num2%104729;
        v1.push_back( pair<int,int> (num1,num2) );
        sort(v1.begin(),v1.end());
    }
    for(int x = 0;x<n;x++)
    {
        //cout << v1[x].first << " " << v1[x].second << endl;
       for(int y = v1[x].first;y<v1[x].second;y++)
        {
           if(y > v1[x+1].first && y <= v1[x+1].second)
           {
               c++;
           }
        }
    }
    cout << c;
}
