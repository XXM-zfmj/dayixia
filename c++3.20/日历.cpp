#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int day,stop,i;
    cin>>day>>stop;
    cout<<"  sun  mon  tue  wen  thu  fri  sat"<<endl;
    for(i=0;i<day;i++)
    cout<<"  ";
    for(i=1;i<=stop;i++)
    {
        cout<<setw(5)<<i;
        if((i+day)%7==0)
        cout<<endl;
    }
    cout<<endl;
    return 0;
}