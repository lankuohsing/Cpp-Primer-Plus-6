#include <fstream>  
#include <string>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
	string filename="D://GitLab//ocr-train-ticket//inferencelist.txt";
    ifstream in(filename);  
      
    string line;  
  
    if(in) // �и��ļ�  
    {  
        while (getline (in, line)) // line�в�����ÿ�еĻ��з�  
        {   
            cout << line << endl;  
        }  
    }  
    else // û�и��ļ�  
    {  
        cout <<"no such file" << endl;  
    }  
	system("pause");
    return 0;  
}  