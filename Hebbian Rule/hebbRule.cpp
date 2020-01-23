#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int xVal[4][2];
	int yVal[4];
	int wVal[4][2];
	int bVal[4];
	int i,j;

	for (i = 0; i < 4; i++)
	{	
		for (j = 0; j < 2; j++)
		{
			cout<<"Input X values in a form of matrix ["<<i+1<<"]"<<"["<<j+1<<"]: "; cin>>xVal[i][j];
			cout<<endl;
		}
		cout<<endl;
		cout<<"Input the Y value "<<i+1<<": "; cin>>yVal[i];
	}

	wVal[0][0] = 0;
	wVal[0][1] = 0;
	bVal[0] = 0;
	int bVal2 = 1;
	cout<<"Perubahan bobot: "<<endl;
	for (i = 0; i < 4; i++) {
		cout<<"Data ke-"<<i+1<<endl;
		for (j = 0; j < 2; j++) {
			wVal[i][j] = wVal[i][j] + xVal[i][j]*yVal[i];
			cout<<"wVal["<<i+1<<"]"<<"["<<j+1<<"]"<<" = "<<wVal[i][j]<<endl;
			wVal[i+1][j] = wVal[i][j];
		}
		bVal[i] = bVal[i] + bVal2*yVal[i];
		cout<<"bVal["<<i+1<<"]"<<" = "<<bVal[i]<<endl;
		bVal[i+1] = bVal[i];

		
		cout<<"\n\n";
	}

	return 0;
}

