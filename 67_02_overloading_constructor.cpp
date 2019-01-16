/*Goal: learn about overloading constructors*/

#include "67_01_overloading_constructor.hpp"

int main()
{
    Square s1;
    Square s2(4,3);
    cout<<"s1 dimensions are: "<<s1.getWidth()<<","<<s1.getLength();
    cout<<"\ns2 dimensions are: "<<s2.getWidth()<<","<<s2.getLength();
    return 0;
}

/*

*/
