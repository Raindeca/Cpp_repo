#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;


float single_linkage(float dEuclidian[][5])
{
        float min = FLT_MAX, d;
        for (int i = 0; i < 5; ++i)
                for (int j = 0; j < 5; ++j) {
                        d = dEuclidian[i][j];
                        if (d < min)
                                min = d;
                }
        return min;
}


int main()
{
	 int xVal[5] = {1,4,1,3,5};
	 int yVal[5] = {1,1,2,4,4};
	 float dEuclidian[5][5];
	 //float temp;
	 int i,j;


	//Calculating the distance using Euclidian Distance

	 for (i = 0; i < 5; i++)
	 {
	 	for (j = 0; j < 5; j++) {
	 		dEuclidian[i][j] = 
	 		sqrt(
	 			(
	 				pow((xVal[i] - xVal[j]), 2) + pow((yVal[i] - yVal[j]), 2)
	 			) 
	 		); // Eulidean Formula
	 	}
	 	/* code */
	 }

	 cout<<"Euclidian Distance: "<<endl;
	 for (i = 0; i < 5; i++)
	 {
	 	for (j = 0; j < 5; j++) {
	 		//cout<<"xVal["<<i<<"] - xVal["<<j<<"] + yVal["<<i<<"] - yVal["<<j<<"]"<<" = "<<dEuclidian[i][j]<<" "<<endl;
	 		cout<<"Euclidian Distance["<<i<<"]"<<"["<<j<<"] : "<<dEuclidian[i][j]<<" ";
	 		//cout<<dEuclidian[i][j]<<" ";
	 		cout<<endl;
	 	}
	 	//cout<<endl;
	 	/* code */
	 }

	 cout<<"\n\n\n\nDmin = "<<single_linkage<<endl;
	 

	/* code */
	return 0;
}
