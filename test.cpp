#include <iostream>

#include "type_def.h"
#include "singleton.hpp"

using namespace std;

class A: public dan::Singleton<A>
{
public:
    void haha()
    {
        cout << "haha" << endl;
    }
};

void Function()
{
    cout << "Call Function!\n" << endl;
}

int main()
{
    void (*p)();
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    // *&p = Function;
    p = &Function;
    cout << &Function << endl;
    cout << Function << endl;
    cout << p << endl;
    cout << *&p << endl;
    *(int*)&p=(int)Function;
    (*p)();

    // return 0;

    A::Instance()->haha();
    A* a = new A;
    // A a;
    // A b;
    // b = a;
    // A c(a);
    // unsigned char des[12] = { 0 };
    // int a = 66;
    // int b = 222;
    // int c = 3;
    // int x = 0;
    // int y = 0;
    // int z = 0;

    // size_t offset = 0;
    // cout << offset << "\t" << des << endl;
    // dan::SerializeBaseType(des, sizeof(des), offset, a);
    // cout << offset << "\t" << des << endl;
    // dan::SerializeBaseType(des, sizeof(des), offset, b);
    // cout << offset << "\t" << des << endl;
    // dan::SerializeBaseType(des, sizeof(des), offset, c);
    // cout << offset << "\t" << des << endl;

    // offset = 0;
    // cout << offset << "\t" << endl;
    // dan::UnSerializeBaseType(des, sizeof(des), offset, x);
    // cout << offset << "\t" << x << endl;
    // dan::UnSerializeBaseType(des, sizeof(des), offset, y);
    // cout << offset << "\t" << y << endl;
    // dan::UnSerializeBaseType(des, sizeof(des), offset, z);
    // cout << offset << "\t" << z << endl;

    return 0;
}