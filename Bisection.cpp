#include <iostream>
#include <cmath>

using std::cout;

//This code is supposed to find square root approximation using bisection algorithm

int Bisection(double &x)
{	
//	public double x={};
//	double x=100;
//	std::cin>>x;
	int lower_bnd=1;
	double upper_bnd=(x)/2;
	while (upper_bnd>=lower_bnd)
	{
		double mid_val=(upper_bnd + lower_bnd)/2;
		if (mid_val*mid_val>(x))
		{
			upper_bnd=mid_val-1;
		}
		else
		{
			lower_bnd=mid_val+1;
		}
		
	}
	cout<<"\nSqrt(" << (x) << ") = "<<((upper_bnd+lower_bnd)/2)<< " \n";
	return 0; 
}
int SquareRoot(double &x)
{
	if((x)>=0.0)
	{
		cout<<"\nSqrt("<< (x) << ") = " << std::sqrt((x)) <<std::endl;

	}
	else
	{
		cout<<"\nWrong value - cannot compute Sqrt\n";
	}
		return 0;
}


int main()
{
	double x={};
	cout<<"Welcome to Bisection Square Root finding little code snippet written to learn some C++"<<"\n";
	cout<<"Enter number you wann find square root of x = ";
	std::cin>>x;
	cout<<"\n"<<"The approximated value found using Bisection algorithm";
	int Bi=Bisection(x);
	cout<<"\n"<<"The exact value found using function sqrt";
	int Sq=SquareRoot(x);
}
