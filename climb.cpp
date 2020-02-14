#include<iostream>
using namespace std;
int climb(int arr[],int sizes)
{
    arr[0]=1;
    arr[1]=1;
    for(int walk = 2;walk<=sizes;walk++)
    {
        arr[walk] = arr[walk-1]+arr[walk-2];
    }
    return arr[sizes];
}
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    cout << climb(arr,n);
}
