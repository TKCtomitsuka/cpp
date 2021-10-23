#include <iostream>

struct Base1
{
    //    Base1() { printf("yahooo\n"); }
    Base1(int a) { printf("%d\n", a); }
};

struct Base2
{
    //   Base2() { printf("googleeee\n"); }
    Base2(const char *b) { printf("%s\n", b); }
};

struct Derived : Base1, Base2
{
    using Base1::Base1;
    using Base2::Base2;
};

int main()
{
    Derived d1(3);       // OK
    Derived d2("hello"); // OK
    return 0;
}