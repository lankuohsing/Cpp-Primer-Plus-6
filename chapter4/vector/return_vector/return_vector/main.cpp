#pragma once
#pragma execution_character_set("utf-8")
#include<iostream>
#include<iomanip>
#include <vector>
using namespace std; vector<int> fun ( )
{
	vector<int> vec;
	for ( int i = 0; i<10; i++ )
	{
		vec.push_back ( i );//������0-9����vector��
	}
	return vec;//�������������.
}int main ( )
{
	vector<int>vecRet;//���շ���ֵ.
	vector<int>::iterator it;
	vecRet = fun ( );
	for ( it = vecRet.begin ( ); it != vecRet.end ( ); it++ )
	{
		cout << ( *it ) << " ";
	}
	system ( "pause" );
	return 0;
}