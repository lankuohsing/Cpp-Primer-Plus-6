#pragma once
#pragma execution_character_set("utf-8")
// compile with: /EHsc /W4  
#include <vector>  
#include <iostream>  

using namespace std;

template <typename T> void print_elem ( const T& t ) {
	cout << "(" << t << ") ";
}

template <typename T> void print_collection ( const T& t ) {
	cout << "  " << t.size ( ) << " elements: ";

	for ( const auto& p : t ) {
		print_elem ( p );
	}
	cout << endl;
}

int main ( )
{
	vector<int> v;
	for ( int i = 0; i < 10; ++i ) {
		v.push_back ( 10 + i );
	}

	cout << "vector data: " << endl;
	print_collection ( v );

	// pop_back() until it's empty, printing the last element as we go  
	while ( v.begin ( ) != v.end ( ) ) {
		cout << "v.back(): "; print_elem ( v.back ( ) ); cout << endl;
		v.pop_back ( );
	}
	system ( "pause" );
	return 0;
}
