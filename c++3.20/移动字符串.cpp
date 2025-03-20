#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int i;
    s="asdfg";
    int n;
    n=s.length();
    cout<<n<<endl;
    for(i=0;i<n;i++)
    {
        cout<<(char)(s[i]+3)<<endl;
    }
}