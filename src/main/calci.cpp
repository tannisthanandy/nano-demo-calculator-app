#include<iostream>
using namespace std;

void greeting()
{
    cout<<"Hello world!"<<endl;
}

int add(int first,int second)
{
    return(first+second);
}
int subtract (int first,int second)
{
    return(first-second);
}
int main()
{
    cout<<"calculator\n";
    greeting();
    int first,second;
    cin>>first>>second;
    cout<<"result: "<<add(first,second)<<endl;
    cout<<"result: "<<subtract(first,second);
}