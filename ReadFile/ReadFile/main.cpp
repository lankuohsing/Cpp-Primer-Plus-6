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
	string filename="D://GitLab//ocr-train-ticket//points1.txt";
    ifstream in(filename);  
      
    string line;  
  
    if(in) // 有该文件  
    {  
        while (getline (in, line)) // line中不包括每行的换行符  
        {   
            cout << line << endl; 
			
			vector<string>points_vector;
			SplitString(line,points_vector," ");
			vector<vector<string>>points_xy;
			for (int i = 0; i < points_vector.size(); i++)
			{
				vector<string>points_i_xy;
				SplitString(points_vector[i],points_i_xy,",");
				points_xy.push_back(points_i_xy);
				int x=atoi(points_xy[i][0].c_str());
				int y=atoi(points_xy[i][1].c_str());
				cout<<x<<","<<y<<endl;
			}
			cout<<endl;
        }  
    }  
    else // 没有该文件  
    {  
        cout <<"no such file" << endl;  
    }  
	system("pause");
    return 0;  
}  