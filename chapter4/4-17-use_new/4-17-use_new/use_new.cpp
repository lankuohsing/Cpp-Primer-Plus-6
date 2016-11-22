#include<iostream>
int main ( )
{
	//11.22 23£º23
	using namespace std;
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << "*pt" << ": location = " << pt << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << "double";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size 0f pt = " << sizeof( pt );
	cout << ": size of *pt = " << sizeof( *pt ) << endl;
	cout << "size 0f pd = " << sizeof( pd );
	cout << ": size of *pd = " << sizeof( *pd ) << endl;
	system ( "pause" );
	return 0;
}