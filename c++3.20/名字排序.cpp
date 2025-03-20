#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,j;
    string name[10];
    const int N=10;
    for(i=0;i<N;i++)
    cin>>name[i];
    for(i=1;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            string temp;
            if(name[j]>name[j+1])
            {
                temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    cout<<name[i]<<' ';

}