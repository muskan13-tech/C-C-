#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string str;
   //assign
   getline(cin,str);
   cout<<str<<endl;
   //append
   string s1,s2;
   cin>>s1>>s2;
   s1.append(s2);
   cout<<s1<<endl;
   //access
   cout<<s1[3]<<endl;
   //clear
   str.clear();
   //compare
   if(s1.compare(s2))
     cout<<"Equal "<<endl;

   //empty
   s1.empty();
   string s3="Baranwal";
   //erase
   s3.erase(2,4);
   cout<<s3<<endl;
   //find
   cout<<s3.find("ran")<<endl;
   //insert
   cout<<s1.insert(0,"Ritu")<<endl;
   //sort
   string s4="msdnnfioefewnwrkeofkei";
   sort(s4.begin(),s4.end());
   cout<<s4<<endl;
   //length
   cout<<s4.length()<<" "<<s3.length()<<" "<<s2.length()<<" "<<s1.length()<<" "<<endl;
   //size
   cout<<s1.size()<<" "<<s2.size()<<" "<<endl;
   //substring 
   cout<<s3.substr(3,4)<<" "<<"substring "<<endl;
   //string to integer 
   stoi(s3);
   cout<<s3<<endl;
   //interger to string
   int a = 56749; 
   cout<<to_string(a)<<" string "<<endl;
   

   return 0;
}