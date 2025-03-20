#include<iostream>
using namespace std;

class set {
public:
    set()
    {
        last = -1;
    }
    void append(int x) {
        for (int i = 0; i <= last; i++) {
            if (a[i] == x) {
                return;
            }
        }
        a[++last] = x;
    }
    bool remove(int x) {
        for (int i = 0; i <= last; i++) {
            if (a[i] == x)
            {
                for (int j = i; j < last; j++) {
                    a[j] = a[j + 1];
                }// 如果找到要删除的元素x,将后面的元素向前移动一位
                last--;
                return true;
            }
        }
        return false;
    }
    void output() {
        for (int i = 0; i <= last; i++) {
            cout << a[i] << endl;
        }
    }
private:
    int last;
    int a[100];
};

int main() {
    set qq;
    int a = 1, o = 2, p = 3;
    qq.append(a);
    qq.append(o);
    qq.append(p);
    qq.append(a);
    qq.output();
    cout << "-----\n";
    qq.remove(a);
    qq.output();
    return 0;
}