#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxs=0;
    for(int x=0;x<n;x++)
    {
        cin >> arr[x];
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k =0;k<n-2;k++)
            {
                if(arr[i]+arr[j]+arr[k] > maxs)
                {
                    maxs = max(arr[i],(arr[j],arr[k]));
                }
                else
                {
                    return(0);
                }
            }
        }
    }
    cout << maxs;
}
