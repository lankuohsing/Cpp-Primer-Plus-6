#include <fstream>  
#include <string>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
	string filename="D://GitLab//ocr-train-ticket//inferencelist.txt";
    ifstream in(filename);  
      
    string line;  
  
    if(in) // 有该文件  
    {  
        while (getline (in, line)) // line中不包括每行的换行符  
        {   
            cout << line << endl;  
        }  
    }  
    else // 没有该文件  
    {  
        cout <<"no such file" << endl;  
    }  
	system("pause");
    return 0;  
}  