#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    ofstream out;
    float x, sum = 0;
    in.open("1.txt");
    if (!in)
    {
        cout<<"flie not open\n";
        exit(-1)；
    }

        out.open("2.txt");//("d:\\xx\\1.txt")
    while (in >> x)
        sum += x;
    //while(getline(in,s))
    //{out<<s<<endl;
   // out<<endl;}
    out << "sum="<<sum<<endl; 
    /**
 *  主函数，用于读取文件中的浮点数并计算它们的总和，然后将结果写入另一个文件。
 * 
 * 该函数打开一个输入文件 "1.txt"，从中读取浮点数并计算它们的总和。
 * 然后，它打开一个输出文件 "2.txt"，并将总和写入该文件。
 * 如果输入文件无法打开，函数将输出错误信息并终止。
 * 
 * int 程序的退出状态码。如果文件打开成功，返回 0；否则返回 0 表示程序异常终止。
 */
  // 关闭输入文件
  in.close();
  // 关闭输出文件
  out.close();}