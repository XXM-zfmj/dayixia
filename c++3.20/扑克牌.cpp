#include<iostream>
using namespace std;
struct card
{

int  value;

char huase;
};
class cardgame
{
public:

void init( )

{ 


int i,j;


for(i=3;i<=6;i++)



for(j=1;j<=13;j++)



{




a[(i-3)*13+j-1].huase=i;
                a[(i-3)*13+j-1].value=j;



}



a[52].value=99;



a[53].value=100;

}

void shuffle(){ }

void display()

{


int i;


for(i=0;i<54;i++)


{
if(i%13==0)


      cout<<endl;




cout<<a[i].huase;



if(a[i].value==1)




cout<<"A"<<"  ";



else if(a[i].value==11)




cout<<"J"<<"  ";



else if(a[i].value==12)




cout<<"Q"<<"  ";



else if(a[i].value==13)




cout<<"K"<<"  ";



else if(a[i].value==99)




cout<<"queen"<<"  ";



else if(a[i].value==100)




cout<<"king"<<"  ";



else




cout<<a[i].value<<"  ";





}



}
private:

card a[54];
};
int main()
{

cardgame d;

d.init();

d.display();
}