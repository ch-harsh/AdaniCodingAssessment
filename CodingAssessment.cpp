#include <bits/stdc++.h>
using namespace std;
void rowSort(vector<vector<int> >& vec)
{
	for (int i = 0; i < (int)vec.size(); i++) {
		sort(vec[i].begin(), vec[i].end());
	}
}

vector<vector<int>> trp(vector<vector<int> > arr,int r, int c)
{
	vector<vector<int> > tr(c, vector<int>(r));
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			tr[j][i] = arr[i][j];
		}
	}

	return tr;
}

void afterColSort(vector<vector<int> > arr,int r, int c)
{
	vector<vector<int>> vec = trp(arr, r, c);
	rowSort(vec);
	arr = trp(vec, c, r);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {

			cout << arr[i][j] << " ";
		}
		cout <<"\n";
	}
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r, vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
	afterColSort(arr, r, c);
	return 0;
}
