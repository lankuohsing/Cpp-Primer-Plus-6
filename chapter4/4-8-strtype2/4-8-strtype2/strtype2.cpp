// strtype2.cpp--assigning, adding, and appending
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	cout << "You can assign one string object to another: s2=s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "S2: " << s2 << endl;
	cout << "You can append stings.\n";
	s1 += s2;
	cout << "S1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

	system("pause");
	return 0;
}