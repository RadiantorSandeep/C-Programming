#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the numbar:";
    cin>>n;
    if(n%2==0&&n%3==0){
        cout<<n;
    }
    else{
        cout<<"other";
    }
    return 0;
}