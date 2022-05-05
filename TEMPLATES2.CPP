
#include <iostream>

using namespace std;
template<class T=int>
class Array
{
    public:
        int size;
        T *arr;
        Array(int size)
        {
            this->size=size;
            arr=new T(size);
        }
        T Result(Array &obj)
        {
            T temp=0;
            for(int i=0;i<size;i++)
            {
                temp+=arr[i]*obj.arr[i];
               
            }
            return temp;
        }
};

int main()
{
    int n,res;
    cout<<"Enter Size : ";
    cin>>n;
    Array<> obj(n);
    cout<<"Enter Elements of First Array :";
    for(int i=0;i<n;i++)
    {
        cin>>obj.arr[i];
    }
    Array<> obj1(n);  
    cout<<"Enter Elements of Second Array :";
    for(int i=0;i<n;i++)
    {
        cin>>obj1.arr[i];
    }
    res=obj.Result(obj1);
    cout<<"Output : "<<res;
    return 0;
}
