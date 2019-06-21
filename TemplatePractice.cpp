#include <iostream>
using namespace std;

template <class T>///function template
T myAdd(T a, T b)
{
    return a+b;
}

template <class T>
class myPair
{
    T a,b;
public:
    myPair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getMax();
};
template <class T>
T myPair<T>::getMax()
{
    T retval;
    retval = a > b ? a : b;
    return retval;
}
int main()
{
    int a = 2,b =3;
    cout<<myAdd(a,b)<<endl;

    myPair<int> obj(100, 75);
    cout<<obj.getMax();

    return 0;
}
