#include<bits/stdc++.h>
using namespace std;
// maximum element
int main()
{
    int n;
    cin>>n;
    stack<int> s;
    stack<int> max_element;
    while(n--)
    {
        int p,q;
        cin>>p;
        if(p==1)
        {
            cin>>q;
            s.push(q);
            if(max_element.empty()) // the first element should be push into two stack as there is no element it will be the maximum element
            {
                max_element.push(q);
            }
            else
            {
                max_element.push(max(max_element.top(),q)); // if max_element stack isn't empty we will push the next element on max_element which is greater in q and previous top max stack element thus we will store the max element
            }
        }
        else if(p==2) // for query 2 we will pop from both stack
        {
            s.pop();
            max_element.pop();
        }
        else // for query 3 we will print the max top element
        {
            cout<<max_element.top()<<endl;
        }
    }
    return 0;
}