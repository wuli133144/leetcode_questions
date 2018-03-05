#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



//rerver string 
string reverString(string &str)
{
    vector<char>strchar;
    int sz=str.size();
    
	for(int i=0;i<sz;i++)
	{  
	     strchar.push_back(str[i]);
	}

	reverse(strchar.begin(),strchar.end());//reverse string char 
	return string(strchar.begin(),strchar.end());
	
}


//function
int main(int argc,char ** argv)
{
        string str("helllo world!");
		std::cout<<reverString(str)<<endl;

        return 0;
}
