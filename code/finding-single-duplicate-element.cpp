#include <iostream>

using namespace std;
int main()
{
int numbers[5] ={1,1,2,2,3};

int ans=0;


for(int i=0;i<5;i++)

ans=ans^numbers[i];


cout<<ans;
}