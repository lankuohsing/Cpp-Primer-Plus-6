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
	size_t a;
	a=0;
	cout<<a<<endl;
	/*
	vector<int>a(5);
	for (int i = 0; i < 5; i++)
	{
		a[i]=i;
	}
	for (int i = 0; i < a.size(); i++)
	{
		cout<<a[i]<<endl;;
	}
	*/
	/*
	string str="";
	if(str=="")cout<<"str is NULL!"<<endl;
	cout<<str<<endl;
	
	int a[]={1,2,3,4,5};
	int size_a=sizeof(a)/sizeof(int);
	cout<<size_a<<endl;
	vector<int>b(a,a+size_a);
	for(int i=0;i<b.size();i++)
		cout<<b[i]<<" ";
	cout<<endl;
	vector<int>c(&a[0],&a[5]);
	for(int i=0;i<c.size();i++)
		cout<<c[i]<<" ";
	cout<<endl;
	vector<int>d;
	d=b;
	for(int i=0;i<d.size();i++)
		cout<<d[i]<<" ";
	cout<<endl;
	*/
	/*
	string filename_points="D://GitLab//ocr-train-ticket//points1.txt";
	ifstream in_points(filename_points);  
	string line_points; 
	vector<string>points_str;
	vector<vector<float>>points_xy_vector;
	if(in_points)
	{
		while (getline (in_points, line_points))
		{
			
			cout << line_points << endl; 
			
			vector<string>points_vector;//空格隔开，每个点的坐标
			SplitString(line_points,points_vector," ");
			vector<float>points_xy;
			for (int i = 0; i < points_vector.size(); i++)
			{
				vector<string>points_i_xy;
				SplitString(points_vector[i],points_i_xy,",");
				points_xy.push_back(atoi(points_i_xy[0].c_str()));
				points_xy.push_back(atoi(points_i_xy[1].c_str()));
				//int x=atoi(points_xy[i][0].c_str());
				//int y=atoi(points_xy[i][1].c_str());
				//cout<<x<<","<<y<<endl;
			}
			points_xy_vector.push_back(points_xy);

			
		}
	}
	else // 没有该文件  
    {  
        cout <<"no such file" << endl;  
    } 
	int count=0;
	for (int i = 0; i < points_xy_vector.size(); i++)
	{
		for (int j = 0; j < points_xy_vector[i].size(); j++)
		{
			cout<<points_xy_vector[i][j]<<",";
		}
		cout<<endl;
	}
	*/
	/*
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
	*/
	
	system("pause");
    return 0;  
}  