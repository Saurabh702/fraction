#include<iostream>
using namespace std;

main()
{
	int count,i,input,sum=0;
	
	cout<<"Enter the value of n : "<<endl;
	cin>>count;
	
	cout<<"Enter "<<count<<" numbers:"<<endl;
	for(i = 0; i < count; i++)
	{
		cin>>input;
		sum += input;
	}
	
	cout<<"Total sum: "<<sum<<endl;
	
	return 0;
}