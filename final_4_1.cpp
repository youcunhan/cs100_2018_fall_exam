#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
struct Employee {
    public:
    std::string name, id;
    bool isFulltime;
};

bool comparator( Employee * op1, Employee * op2 ) {
    if( op1->id.size() != op2->id.size() ) {
        if( op1->id.size() < op2->id.size() )
            return true;
        return false;
    }
    return op1->id < op2->id;
}

// bool comparator( Employee * op1, Employee * op2 ) {
//     if( op1->isFulltime != op2->isFulltime )
//         return op1->isFulltime;
//     if( op1->id.size() != op2->id.size() ) {
//         if( op1->id.size() < op2->id.size() )
//             return true;
//         return false;
//     }
//     return op1->id < op2->id;
// }

int main() {
    Employee e1, e2, e3, e4;
    e1.name = "Cindy"; e1.id = "20180915"; e1.isFulltime = false;
    e2.name = "Simon"; e2.id = "20180309"; e2.isFulltime = false;
    e3.name = "Jennifer"; e3.id = "370"; e3.isFulltime = true;
    e4.name = "Paul"; e4.id = "20181002"; e4.isFulltime = true;
    std::map<std::string,Employee*> staff;
    staff["Cindy"] = &e1; 
    staff["Simon"] = &e2;
    staff["Jennifer"] = &e3; 
    staff["Paul"] = &e4;
    std::vector<Employee*> reorderedStaff( staff.size() ); 
    int i = 0;
    for( std::map<std::string,Employee*>::iterator it = staff.begin(); it != staff.end(); it++ )
        reorderedStaff[i++] = it->second;

    std::sort( reorderedStaff.begin(), reorderedStaff.end(), comparator );
    for( std::vector<Employee*>::iterator it = reorderedStaff.begin(); it != reorderedStaff.end(); it++ )
        std::cout << (*it)->id << ": " << (*it)->name << std::endl;
}