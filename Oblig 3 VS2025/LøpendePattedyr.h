#pragma once
#include "Pattedyr.h"
class L�pendePattedyr :
    public Pattedyr
{
public: 
    L�pendePattedyr(const std::string& n, const std::string& sex, const std::string& species, double w)
        : Pattedyr(n, sex, species, w, "running") {
    }

    std::string getGroup() const override { return "running"; }

    void bevegelse(std::ostream& ost) const override {
        ost << m_bevegelse;
    }
};

