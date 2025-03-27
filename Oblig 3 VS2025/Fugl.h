#pragma once
#include "Dyr.h"
class Fugl :
    public Dyr
{
public:
    Fugl(const std::string& n, const std::string& sex, const std::string& species, double w)
        : Dyr(n, sex, species, w) {
    }

    std::string getGroup() const override { return "bird"; }

    void bevegelse(std::ostream& ost) const override {
        ost << "flying";
    }
};

