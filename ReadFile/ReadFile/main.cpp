#include <fstream>  
#include <string>  
#include <iostream> 

#include<vector>
using namespace std;  
 void SplitString(const string& s, vector<string>& v, const string& c)
{
    string::size_type pos1, pos2;
    pos2 = s.find(c);
    pos1 = 0;
    while(string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2-pos1));
         
        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if(pos1 != s.length())
        v.push_back(s.substr(pos1));
} 
int main()  
{  
	string filename="D://GitLab//ocr-train-ticket//inferencelist1.txt";
    ifstream in(filename);  
      
    string line;  
  
    if(in) // 有该文件  
    {  
        while (getline (in, line)) // line中不包括每行的换行符  
        {   
            cout << line << endl; 
			
			vector<string>line_split;
			SplitString(line,line_split,"/");
			for (int j = 0; j < line_split.size(); j++)
			{
				cout<<line_split[j]<<endl;
			}
        }  
    }  
    else // 没有该文件  
    {  
        cout <<"no such file" << endl;  
    }  
	system("pause");
    return 0;  
}  