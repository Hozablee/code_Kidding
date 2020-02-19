#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    int r1,r2;
    int sums = 0;
    for(int i = 0 ;i<num;i++)
    {
        cin >> arr[i];
    }
    cin >> r1>>r2;
    for(int j = r1;j<=r2;j++)
    {
        sums = sums+arr[j];
    }
    cout << sums;
}
