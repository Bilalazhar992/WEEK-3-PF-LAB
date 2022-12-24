#include <iostream>
using namespace std;
main()
{
float matric;
float intermediate;
float ecat;
float percentage_matric;
float percentage_intermediate;
float percentage_ecat;
float aggregate;
cout<<" Enter Matric Marks ";
cin>> matric;
cout <<" Enter Intermediate Marks ";
cin>> intermediate;
cout<<" Enter ECAT Marks ";
cin>> ecat;
percentage_matric = (matric/1100)*100;
percentage_intermediate= (intermediate/1100)*100;
percentage_ecat = (ecat/400) *100;
aggregate = (0.50*percentage_ecat)+ (0.4 *percentage_intermediate)+(0.10*percentage_matric);
cout<<"Your Aggregate IS .."<<aggregate;
}