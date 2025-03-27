#pragma once
#include "Pattedyr.h"
class HoppendePattedyr :
    public Pattedyr
{
public:
    HoppendePattedyr(const std::string& n, const std::string& sex, const std::string& species, double w)
        : Pattedyr(n, sex, species, w, "jumping") {
    }

    std::string getGroup() const override { return "jumping"; }

    void bevegelse(std::ostream& ost) const override {
        ost << m_bevegelse;
    }
};

