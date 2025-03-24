/*成员函数要求如下：
添加构造函数完成初始化
能添加一个元素，元素不重复
能删除一个元素
输出所有元素
求两个集合对象的交集
求两个集合对象的并集
求两个集合对象的差集*/
#include<iostream>
using namespace std;

class set
{
public:
	set( ){last=-1;}
	set(int b[],int size){
	int i;
	for(i=0;i<size;i++)
        a[i]=b[i];
        last=size-1;
	}
    void append(int s)
	{
		int pos;
		pos=find(s);
		if(pos==-1)
		{
		 last++;
		 a[last]=s;
		}

	}
	void output()
	{
		int i;
		cout<<"{";
		for(i=0;i<last;i++)
			cout<<a[i]<<",";
			cout<<a[last];
			cout<<"}\n";
	}
	bool shan(int x)
	{
		int pos,i;

        pos=find(x);

		if(pos==-1)
			return false;
		else
		{

			for(i=pos;i<last;i++)
				a[i]=a[i+1];
			last--;
			return true;
		}

	}
	set bingji(set& t);
	set jiaoji(set& t);
	set chaji(set& t);

private:
	int find(int x);
	int last;
	int a[100];
};

int set::find(int x)
{
	int pos=-1;
	int i;
	for(i=0;i<=last;i++)
		if(a[i]==x)
			{
			pos=i;
			break;
			}
	return pos;
}

set set::bingji(set&t)
{
	set m;
	int i;
	m=*this;
	for(i=0;i<=t.last;i++)
	   //if(find(t.a[i])==-1)
	   m.append(t.a[i]);

	return m;

}
set set::jiaoji(set& t)
{
	set m;
	int i;
	for(i=0;i<=t.last;i++)
	   if(find(t.a[i])!=-1)
	    m.append(t.a[i]);
	return m;

}
set  set::chaji(set& t)
{
	set m;
	int i;
	m=*this;
	for(i=0;i<=t.last;i++)
	   if(find(t.a[i])!=-1)
	    m.shan(t.a[i]);

	  return m;
}
int main()
{
	int b[]={1,2,3,4,5};
	int x[]={6,7,8,2,3};
	set s1(b,5),s2(x,5),s3;
	s1.append(10);
	s1.append(20);
	s2.append(30);
	s2.append(20);
	s3=s1.chaji(s2);
    s3.output();

  return 0;
}
