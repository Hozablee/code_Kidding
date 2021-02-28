#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxs = 2*n + 1;
    for(int j = 0;j<n;j++)
    {
        for(int k =0;k<maxs;k++)
        {
            if(j == k || j+k == maxs-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = 0;i<maxs;i++)
    {
        cout<< "*";
    }
    cout << endl;
    int cnt = 1;
    for (int i=n; i>=1; i--) {
    	for (int j=0; j<maxs; j++){
			if (j == i-1) {
				cout << "*";
			} else if (j == (2*cnt)+i-1) {
				cout << "*";
				cnt++;
				break;
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
    /*for(int a = 0;a<=n;a++)
    {
        for(int b = 0;b<maxs;b++)
        {
            if(a+b == maxs-n-1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }*/
}
