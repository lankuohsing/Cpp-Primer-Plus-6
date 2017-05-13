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
		vec.push_back ( i );//把数字0-9插入vector中
	}
	return vec;//把这个容器返回.
}int main ( )
{
	vector<int>vecRet;//接收返回值.
	vector<int>::iterator it;
	vecRet = fun ( );
	for ( it = vecRet.begin ( ); it != vecRet.end ( ); it++ )
	{
		cout << ( *it ) << " ";
	}
	system ( "pause" );
	return 0;
}