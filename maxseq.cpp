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
                    maxs += 1+max( (arr[i],arr[j]),(arr[j],arr[k]));
                }
                arr[k]=arr[k++];
            }
            arr[j]=arr[j++];
        }
        arr[i]=arr[i++];
    }
    cout << maxs;
}
