#include "Dyrehage.h"
#include "LøpendePattedyr.h"
#include "HoppendePattedyr.h"
#include "Fugl.h"
#include "Fisk.h"

//  overload << som printer alle dyr
std::ostream& operator<<(std::ostream& os, const Dyrehage& dyrehage) {
    for (const auto& dyr : dyrehage.animals) {
        os << *dyr;
    }
    return os;
}

void Dyrehage::skrivUtDyrAvGruppe(const std::string& gruppe) const
{
    std::cout << "\nAnimals of the group " << gruppe << ":\n";

    for (const auto& dyr : animals) {
        if (dyr->getGroup() == gruppe) {  
            std::cout << *dyr;
        }
    }
}
