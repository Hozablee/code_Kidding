#include <iostream>
using namespace std;

int main()
{

	int T;
	int n;

	cin >> T;

	for (int i=0; i<T; i++)
    {
		cin >> n;
		int x[n];
		int y[n];
		int result[n];

		for (int j=0; j<n; j++)
        {
			cin >> x[j];
		}

		for (int k=0; k<n; k++)
        {
			cin >> y[k];
		}
        int total = 1;
		int walk = 0;
        while (walk < n)
        {

			if ( ((x[walk]*total) % y[walk]) == 0 )
			{
				result[walk] = (x[walk]*total)/y[walk];
				walk++;
			}
            else {
				walk = 0;
				total++;
			}
		}

		cout << total << endl;

		for (int l=0; l<n; l++) {
			cout << result[l] << " ";
		}
        cout << endl;
	}
}
