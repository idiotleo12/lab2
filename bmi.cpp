#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "bmi.h"

using namespace std;

int main(){

int height,weight;
float bmi;
string str;
ifstream inFile("file.in",ios::in);
if (!inFile)
{
        cerr<<"Fail opening input file."<<endl;
        exit(1);
}

ofstream outFile("file.out",ios::out);
if(!outFile)
{
	cerr<<"File opening output file."<<endl;
	exit(1);
}



BMI_counting count;


while(inFile>>height>>weight)
{
        if(height ==0 && weight == 0)
        {
                outFile<<"The End"<<endl;
        }

        else
        {
        //cout<<height<<"\t"<<weight<<endl;
        count.setBMI(height,weight);
        bmi = count.getBMI();
        count.setCategory(bmi);
        str = count.getCategory();

        outFile<<setprecision(4)<<bmi<<"\t\t"<<str<<endl;
        outFile.unsetf(ios::fixed);
        }
}

}

