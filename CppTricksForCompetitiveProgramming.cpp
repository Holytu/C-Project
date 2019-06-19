#include <iostream>
#include <math.h>
using namespace std;
void Multiply(int n)
{
    n = n << 1;
    cout<<n<<"\n";
}
void Divide(int n)
{
    n = n >> 1;
    cout<<n<<"\n";
}
void SwapXOR(int x, int y)
{
    x ^= y;
    y ^= x;
    x ^= y; 
    cout<<"x = "<<x<<", y = "<<y<<"\n";
}
void SameAsStrlen(char Str[])
{
    int i;
    for (i = 0; Str[i]; i++){}

    cout<<"i = "<<i<<"\n";
}
void FindMostSigficantNum(int N)
{
    double k = log(N);
    k = k - floor(k);
    cout<<pow(10, k);
}
void CountNumberOfDigits(int N)
{
    cout<<floor(log(N)) + 1 <<"\n";
}
void isPowerOfTwo(int x)
{
    //cout << ( x & ( x - 1) ) <<endl;
    //cout << !( x & ( x - 1)) <<endl;
    cout<<( x && !( x & (x - 1) ) )<<endl;
}
void Copy()
{
    int source[5] = {0, 12, 34, 50, 80};
    int target[5];
    copy_n(source, 5, target);
    
    for (int i = 0; i < 5; i++)
        cout<<target[i]<<" ";

    cout<<"\n";
}
void And()
{
    int a = 10;
    if( a < 20 and a > 5)
        cout<<"Yes\n";
    else
        cout<<"No"<<endl;
}
int main()
{
    int n = 15;
    int x = 5, y = 3;
    char Str[] = "12349aasclvr.qwdp";
    //Multiply(n);
    //Divide(n);
    //SwapXOR(x,y);
    //SameAsStrlen(Str);
    //FindMostSigficantNum(100000);
    //CountNumberOfDigits(8);
    //isPowerOfTwo(16);
    //Copy();
    And();

    return 0;
}