#include "Dyr.h"

Dyr::Dyr(const std::string& n, const std::string& sex, const std::string& s, double w)
	:m_name(n), m_sex(sex), m_species(s), m_weight(w)
{
}

std::ostream& operator<<(std::ostream& ost, const Dyr& dyr) {
    ost << dyr.getName() << ", "
        << "Sex: " << dyr.getSex() << ", "
        << "Species: " << dyr.getSpecies() << ", "
        << "Weight: " << dyr.getWeight() << " kg, "
        << "Movement: ";
    dyr.bevegelse(ost);
    return ost << std::endl; 
}