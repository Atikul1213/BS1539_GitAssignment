#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, Fact = 1;
    cin>>num;
    for(int start =1;start<=num;start++){
        Fact = Fact*start;
    }

    cout<<"Factorial: "<<Fact<<endl;

    reutrn 0;
}
