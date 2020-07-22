#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sums = 0;
    int arr[n][n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int x = 0;x<n;x++)
    {
        for(int y = 0;y<n;y++)
        {
            if(x==y)
            {
                sums = sums+arr[x][y];
            }
        }
    }
    if(sums == n*n*(n-1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
