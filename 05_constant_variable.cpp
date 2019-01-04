/*Goal: use constant variables*/

#include <iostream>
using namespace std;

int main()
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    weightGoal = 200;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}
