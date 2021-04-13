#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s,s1,s2;
	    cin>>s;
	    if(s.size()%2==0)
	    {
	        s1 = s.substr(0,s.size()/2);
	        s2 = s.substr(s.size()/2,s.size()+1);

	        if(s1.compare(s2))
	          cout<<"NO"<<endl;
	       else
	          cout<<"YES"<<endl;
	    }
	    else
	    {
	    s1 = s.substr(0,s.size()/2);
	    s2 = s.substr(s.size()/2,s.size());
	    
	    if(s1.compare(s2))
	      cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	    }
	}
	return 0;
}
