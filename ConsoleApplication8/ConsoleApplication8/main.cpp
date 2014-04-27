#include "includes.h"
#include "output.h"
#include "adder.h"

void main()
{
	int number_1;
	int number_2;
	int res_1;

	cout<<"Enter nember_1 - ";
	cin>>number_1;
	cout<<endl;
	cout<<"Enter nember_2 - ";
	cin>>number_2;
	cout<<endl;


	res_1=adder(number_1,number_2);
}