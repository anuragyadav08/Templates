
#include <iostream>

using namespace std;
template<class T>
class Array
{
    public:
        int size;
        T *arr;
        Array(int size)
        {
            this->size=size;
        }
        void get()
        {
            int input;
            for(int i=0;i<size;i++)
            {
                cin>>input;
                arr[i]=input;
            }
        }
        void print()
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i];
            }
        }
};

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    Array<int> obj(n);  
    obj.get();
    obj.print();
    return 0;
}
