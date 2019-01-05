/*Goal: Practice PreFix and PostFix
**
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int post, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";  
    return 0;
}

/* Answers
Inital values: 			post = 0 pre= 0
After one postfix and prefix: 	post = 0 pre= 1
After two postfix and prefix: 	post = 1 pre= 2
*/
