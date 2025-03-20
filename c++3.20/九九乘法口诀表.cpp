#include <iostream>
#include <iomanip>
//打印九九乘法口诀表
using namespace std;
int main()
{
    int a,b,sum;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            
            cout<<j<<"*"<<i<<"="<<i*j<<setw(4);//setw设置输出项的域宽
        } 
        cout<<endl;
        }
    return 0;   
}