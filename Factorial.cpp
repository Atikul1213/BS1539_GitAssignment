#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5, fact = 1;

    for(int start = 1;start<=num;start++){
        fact = fact*start;
    }
    cout<<"Factorial : "<<fact<<endl;
    return 0;
}
