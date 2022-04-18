#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter 5 Values"<<endl;
    for(int i=0;i<5;[&a,&i](){cin>>a[i++];}());
    int tot=0;
    cout<<"The total Sum is equal to: ";
    for(int i=0;i<5;[&tot,a,&i](){tot+=a[i++];}());
    cout<<tot;
    return 0;
}
