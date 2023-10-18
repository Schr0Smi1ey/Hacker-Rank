#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person
{
    public:
    int age;
    
    person(int initialage)
    {
        if(initialage<0)
        {
            age=0;
            cout<<"Age is not valid, setting age to 0."<<endl;
        }
        else
        age = initialage;
    }
    void amIOld()
    {
        if(age<13)
        {
            cout<<"You are young."<<endl;
        }
        else if(age>=13 && age<18)
        cout<<"You are a teenager."<<endl;
        else
        cout<<"You are old."<<endl;
    }
    void yearPasses()
    {
        age++;
    }
};
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;cin>>t;
    while(t--)
    {
        int age;
        cin>>age;
        person p(age);
        p.amIOld();
        for(int i=0;i<3;i++)
        {
            p.yearPasses();
        }
        p.amIOld();
        cout<<endl;
    }  
    return 0;
}
