#pragma once
#include "Dyr.h"

class Dyrehage {
private:
    std::vector<std::unique_ptr<Dyr>> animals;  

public:
    void leggTilDyr(std::unique_ptr<Dyr> dyr) {
        animals.push_back(std::move(dyr));  
    }

    void fjernDyr(const std::string& name) {
        for (auto i = animals.begin(); i != animals.end(); ) {
            if ((*i)->getName() == name) {  
                i = animals.erase(i);  
            }
            else {
                ++i;  
            }
        }
    }

    void skrivUtAlleDyr() const {
        for (const auto& dyr : animals) {
            std::cout << *dyr << std::endl;  
        }
    }

    void skrivUtDyrAvType(const std::string& type) const {
        std::cout << "Animals of the type " << type << ":\n";
        for (const auto& dyr : animals) {
            if (dyr->getSpecies() == type) {
                std::cout << *dyr;
            }
        }
    }

    void skrivUtDyrAvGruppe(const std::string& gruppe) const;

    friend std::ostream& operator<<(std::ostream& ost, const Dyrehage& dyrehage);
};




