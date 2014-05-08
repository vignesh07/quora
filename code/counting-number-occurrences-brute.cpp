#include <iostream>
#include <string>
#include <vector>


//Function to convert integers to string


string intToString(int n) {

    stringstream ss;

    ss << n;

    

    return ss.str();

}


int main()

{

string s

for(int i=1;i<=N;i++)

     s+=intToString(i);


string digit="0123456789";


vector<int> count;


for(int i=0;i<dig.length();i++)

{

     int cnt=0;

     for(int j=0;j<s.length();j++)

          if(s[j]==digit[i])cnt++;


     count.push_back(cnt);

}


for(int i=0;i<cnt.size();i++)

     cout<<"Number of occurrences of "<<i<<" :"<<count[i]<<endl;


return 0;

}