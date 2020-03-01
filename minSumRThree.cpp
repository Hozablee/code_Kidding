#include<iostream>
using namespace std;
int three_min(int a[],int n)
{
    int sums = 0;
    for(int i=0;i<n-2;i++)
    {
        for(int j = 0;j<n-1;j++)
        {
            for(int k = 0;k<n;k++)
            {
                sums = min(a[i],(a[j],a[k]))+min((a[i],a[j]),a[k]);
            }
        }
    }
    return sums;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int in=0;in<n;in++)
    {
        cin >> arr[in];
    }
    cout << three_min(arr,n);
}
