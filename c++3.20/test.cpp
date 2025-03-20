#include<iostream>
using namespace std;

class set
{
public:
	set( ){last=-1;}
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

int main()
{
	set qq;
	qq.append(10);
	qq.append(20);
	qq.append(30);
	qq.append(20);
	qq.append(40);
	qq.output();
	if(qq.shan(20))
	{
        qq.output();
		}
  return 0;
}
