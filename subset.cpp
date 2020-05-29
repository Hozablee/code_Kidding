#include<iostream>
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
    for(int k = 0;k<n*n;k++)
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

