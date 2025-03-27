#pragma once
#include "Dyr.h"
class Fisk :
    public Dyr
{
public:
    Fisk(const std::string& n, const std::string& sex, const std::string& species, double w)
        : Dyr(n, sex, species, w) {
    }

    std::string getGroup() const override { return "fish"; }

    void bevegelse(std::ostream& ost) const override {
        ost << "swimming";
    }
};

