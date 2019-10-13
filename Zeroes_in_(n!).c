#include<iostream>
using namespace std;
int Zeroes(int n)
{
	int c=0;
	for(int i=5;n/i>=1;i*=5)
		c+=n/i;
	return c;
}

int main()
{
	int n;
	cout<<"Enter The Number(n) to count the Zeroes in n!: ";
	cout<<"Number Of Zeroes in <<n<<"! : "<<Zeroes(n);
	return 0;
}