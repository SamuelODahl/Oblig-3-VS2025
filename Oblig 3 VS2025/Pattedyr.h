#pragma once
#include "Dyr.h"
class Pattedyr :
    public Dyr
{
protected:
    std::string m_bevegelse;

    Pattedyr(const std::string& n, const std::string& sex, const std::string& species, double w, std::string b)
        : Dyr(n, sex, species, w), m_bevegelse(b) {
    }
public:
    virtual void bevegelse(std::ostream& ost) const = 0;
    virtual ~Pattedyr() = default;
};
    
