#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int j = 0;j<n;j++)
    {
        cin >> arr[j];
    }
    for(int k = 0;k<pow(2,n);k++)
    {
        if(k<n)
        {
            cout <<"["<< arr[k]<<"]" << endl;
        }
        else if(k>n)
        {
            cout <<"["<< arr[k/n] <<"," << arr[k%(n+1)] <<"]" << endl;
        }
        else
        {
            cout << "[]" << endl;
        }
    }
}

