#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int check = 0;
    cin >> m >> n;
    int cnt = 0;
    int arr[m][n];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "********************" << endl;
    for(int x = 0;x<m;x++)
    {
        for(int y = 0;y<n;y++)
        {
           if(arr[x][y] == 1)
           {
               if(arr[x+1][y+1] == 1)//1
               {
                   check = 1;
               }
               if(arr[x-1][y-1] == 1)//2
               {
                   check = 1;
               }
               if(arr[x-1][y+1] == 1)//3
               {
                   check = 1;
               }
               if(arr[x+1][y-1] == 1)//4
               {
                   check = 1;
               }
               if(arr[x+1][y] == 1)//5
               {
                   check = 1;
               }
               if(arr[x][y+1] == 1)//6
               {
                   check = 1;
               }
               if(arr[x-1][y] == 1)//7
               {
                   check = 1;
               }
               if(arr[x][y-1] == 1)//8
               {
                   check = 1;
               }
           }
        }
        cout << endl;
    }

    if(check == 0)
    {
        cout << "No";
    }
    else if(check == 1)
    {
        cout << "Yes";
    }
}
