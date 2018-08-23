#include<iostream>
using namespace std;

class fraction
{
	float numerator;
	float denominator;
	public:
	void input()
	{
		cout<<"Numerator: "<<endl;
		cin>>numerator;
		cout<<"Denominator: "<<endl;
		cin>>denominator;
	}
	void display()
	{
		cout<<"Fraction is : "<<numerator<<"/"<<denominator<<endl;
	}
	float convert()
	{
		return float(numerator/denominator);
	}
};
 
void fraction_input(fraction f[],int n)
{
	int i;
	for (i = 0; i < n;i++)
	{
		cout<<"Fraction "<<i+1<<":"<<endl;
		f[i].input();
	}
	cout<<endl;
}
void fraction_output(fraction f[],int n)
{
	int i;
	for (i = 0; i < n;i++)
	{
		f[i].display();
	}
}
float fraction_sum(fraction f[],int n)
{
	int i;
	float sum = 0.0;
	for (i = 0;i < n; i++)
	{
		sum+=f[i].convert();
	}
	return sum;
}
main()
{
	int n;
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	
	fraction f[n];
	
	cout<<"Enter the fraction values : "<<endl;
	fraction_input(f,n);

	cout<<"Output: "<<endl;
	fraction_output(f,n);
	
	cout<<"Sum of n fractions : "<<endl;
	cout<<fraction_sum(f,n)<<endl;
	
	return 0;
}