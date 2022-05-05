
#include <iostream>
using namespace std;
template<class T1,class T2,class T3>
class A
{
    public:
        T1 a;
        T2 b;
        T3 c;
        A(T1 x, T2 y,T3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void print()
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;    
        }
};
int main()
{
    A<int,float,char>obj(11,12.08,'c');
    obj.print();
    A<char,float,int>obj1('A',12.08,514);
    obj1.print();
    A<char,char,int>obj2('A','R',8);
    obj2.print();
    return 0;
}