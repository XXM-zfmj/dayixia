#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    int max,num;
    in.open("1.txt");
    if (!in)
    {
        cout << "file not open\n";
        return 0;
    }
   if (in >> max) {
        while (in >> num)
        {
            if (num > max)
                max = num;
        }
    }
    out.open("2.txt");
    out << max<< endl;
    in.close();
    out.close();
    return 0;
}