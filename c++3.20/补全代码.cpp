#include <iostream>
#include <iomanip>
using namespace std;
struct twodim{
    int r;
    int c;
    float *a;
    };
    void get_twodim(twodim &s,int row,int col)
    {
        s.r=row;
        s.c=col;
        s.a=new float[row*col];
        //初始化数组
    }
    float & val(twodim&s, int i,int j)
    {
        return s.a[i*s.c+j];//返回i行j列的值
    }
    void free_twodim(twodim &s)
    {
        delete [] s.a;
        //释放数组空间
    }
    int main()
    {
        struct twodim s;
        int i,j;
        get_twodim(s,3,4);
    
        for(i=0;i<3;i++)
            for(j=0;j<4;j++)
                val(s,i,j)=i+j;
    
        for(i=0;i<3;i++)
        {	for(j=0;j<4;j++)
                cout<<setw(5)<<val(s,i,j);
    
            cout<<endl;
        }
        free_twodim(s);
    }