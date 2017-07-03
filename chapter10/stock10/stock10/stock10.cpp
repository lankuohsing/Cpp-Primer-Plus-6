//stock10.cpp--Stock class with constructors, destructor added
#include<iostream>
#include"stock10.h"
using namespace std;
//constructors
Stock::Stock ( )	//default constructors
{
	cout << "Default constructor called" << endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;//you can use set_tot() instead.
}
Stock::Stock ( const string & co, long n, double pr )
{
	cout << "Constructor using " << co << " called" << endl;
	company = co;
	if ( n < 0 )
	{
		cout << "Number of shares can't be negative!" << endl;
		cout << company << " shares set to 0.0" << endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot ( );
}
Stock::~Stock ( )
{
	cout << "Bye, " << company << "!" << endl;
}
//other methods
void Stock::buy ( long num, double price )
{
	if ( num < 0 )
	{
		cout << "Number of shares purchased can't be negative. "
			<< " Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot ( );
	}
}
void Stock::sell ( long num, double price )
{
	using std::cout;//ÀûÓÃusingÉùÃ÷
	if ( num < 0 )
	{
		cout << "Number of shares sold can't be negative. "
			<< " Transaction is aborted.\n";
	}
	else if ( num>shares )
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot ( );
	}

}
void Stock::update ( double price )
{
	share_val = price;
	set_tot ( );
}
void Stock::show ( )
{
	//set format to #.###
	ios_base::fmtflags orig = cout.setf ( ios_base::fixed, ios_base::floatfield );
	streamsize prec = cout.precision ( 3 );
	cout << "Company: " << company << " Shares: " << shares << endl;
	cout << " Share Price: $" << share_val;
	//set format to #.##
	cout << " Total Worth: $" << total_val << endl;
	cout.setf ( orig, ios_base::floatfield );
	cout.precision ( prec );
}