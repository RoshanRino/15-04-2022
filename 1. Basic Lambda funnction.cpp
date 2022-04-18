#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    c=[&](){cout<<"Enter the values to be added"<<endl;
        cin>>a>>b;
        return a+b;}();
    cout<<c;
    return 0;
}
