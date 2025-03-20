#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3;
    s1="this is a dog";
    s2="dog";
    int pos;
    pos=s1.find(s2);
    if(pos>=0)
    cout<<"find"<<endl;
    else
    cout<<"not found\n";
    cout<<pos<<endl;
}
