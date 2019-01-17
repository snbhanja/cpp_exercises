

/*Goal: understand multiple inheritance*/

#include "75_01_multiple_inheritance_header.hpp"

int main()
{
    TA t1;
    t1.setSupervisor("Dr. Caohuu");
    t1.setId(55555);
    t1.setTitle("Adjunct Prof.");
    cout<<t1.getSupervisor()<<" "<<t1.getId()<<" "<<t1.getTitle();
    return 0;
}


/*
Dr. Caohuu 55555 Adjunct Prof.

*/
