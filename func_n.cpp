#include<iostream>
#define MAX 50
using namespace std;

void get_numbers()
{
	int n,i,array[MAX];
	
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	
	cout<<"Input "<<n<<" values"<<endl;
	for(i = 0;i < n;i++)
		cin>>array[i];

	cout<<endl<<"Values inputed: "<<endl;
	for(i = 0;i < n;i++)
		cout<<array[i]<<"  ";
	
	cout<<endl;
}

main()
{
	get_numbers();	
	return 0;
}