#include "Dyrehage.h"
#include "LøpendePattedyr.h"
#include "HoppendePattedyr.h"
#include "Fugl.h"
#include "Fisk.h"

int main() {
    Dyrehage dyrehage;
    std::string name, sex, species, type;
    double weight;

    while (true) {
        std::cout << "\nChoose the type of animal: mammal (write either running or jumping), bird, fish or write 'EXIT' to stop: ";
        std::cin >> type;

        if (type == "EXIT") break;  

        if (type != "running" && type != "jumping" && type != "bird" && type != "fish") {
            std::cout << "Invalid animal type, try again!\n";
            continue;  
        }

        std::cout << "Animal name (John, Synne, Bertil etc): ";
        std::cin >> name;

        std::cout << "Enter the sex of the animal (Male/Female): ";
        std::cin >> sex;
        while (sex != "Male" && sex != "Female") {  
            std::cout << "Invalid sex! Enter 'Male' or 'Female': ";
            std::cin >> sex;
        }

        std::cout << "Enter species (Zebra, Bear, Eagle, Shark, etc.): ";
        std::cin >> species;

        std::cout << "Enter weight (kg): ";
        while (!(std::cin >> weight) || weight <= 0) {  
            std::cout << "Invalid weight, try again!: ";
            std::cin.clear(); 
            std::cin.ignore(1000, '\n');
        }

       
        if (type == "running") {
            dyrehage.leggTilDyr(std::make_unique<LøpendePattedyr>(name, sex, species, weight));
        }
        else if (type == "jumping") {
            dyrehage.leggTilDyr(std::make_unique<HoppendePattedyr>(name, sex, species, weight));
        }
        else if (type == "bird") {
            dyrehage.leggTilDyr(std::make_unique<Fugl>(name, sex, species, weight));
        }
        else if (type == "fish") {
            dyrehage.leggTilDyr(std::make_unique<Fisk>(name, sex, species, weight));
        }
    }

    std::cout << "\nThe zoo has the following animals:\n";
    dyrehage.skrivUtAlleDyr();

    std::cout << "\nWrite the name of an animal to remove or 'N' to skip: ";
    std::cin >> name;
    if (name != "N") {  
        dyrehage.fjernDyr(name);
        std::cout << "\nAfter removing " << name << ":\n";
        dyrehage.skrivUtAlleDyr();
    }
    else {
        std::cout << "\nSkipping removal...\n";  
    }

    std::cout << "\nEnter a animal group (running, jumping, bird, fish) you wish to filter: ";
    std::cin >> type;
    dyrehage.skrivUtDyrAvGruppe(type);
}
