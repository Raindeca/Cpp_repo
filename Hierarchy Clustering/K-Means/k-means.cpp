#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

int main()
{	

	int xVal[5] = {1,4,1,3,5};
	int yVal[5] = {1,1,2,4,4};
	float centroid[2][2];
	float dEuclidian[5][2];
	int i,j,c;
	float a,b;


	cout<<"How many centroid do you need?"; cin>>c;
	for ( i = 0; i < c; i++)
	{
		
			cout<<"Input centroid "<<i+1<<" (using spacebar for dividing x and y coordinate value) = "; cin>>a>>b;
			centroid[i][0] = a;
			centroid[i][1] = b;
		
		/* code */
	}


	 for (i = 0; i < 5; i++)
	 {
	 	for (j = 0; j < 2; j++) {
	 		dEuclidian[i][j] = 
	 		sqrt(
	 			(
	 				pow((xVal[i] - centroid[j][0]), 2) + pow((yVal[i] - centroid[j][1]), 2)
	 			) 
	 		); // Eulidean Formula
	 	}
	 	/* code */
	 }

	 cout<<"Euclidian Distance: "<<endl;
	 for (i = 0; i < 5; i++)
	 {
	 	for (j = 0; j < 2; j++) {
	 		cout<<"xVal["<<i<<"] - centroid["<<j<<"][0] + yVal["<<i<<"] - centroid["<<j<<"][1]"<<" = "<<dEuclidian[i][j]<<" "<<endl;
	 		//cout<<"Euclidian Distance["<<i<<"]"<<"["<<j<<"] : "<<dEuclidian[i][j]<<" ";
	 		//cout<<dEuclidian[i][j]<<" ";
	 		cout<<endl;
	 	}
	 	//cout<<endl;
	 	/* code */
	 }
	/* code */
	return 0;
}
