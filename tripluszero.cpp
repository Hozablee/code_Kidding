#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int z=0;z<n;z++)
    {
        cin >> arr[z];
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-2;k++)
            {
               if(arr[i]+arr[j]+arr[k]==0)
                {
                    cout << arr[i] <<"," << arr[j] << "," << arr[k] << endl;
                }

            }
         arr[j]=arr[j+1];
        }
        arr[i]=arr[i+2];
    }
}
