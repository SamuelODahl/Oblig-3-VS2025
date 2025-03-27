#pragma once
import std;
class Dyr
{
protected:
	std::string m_name;
	std::string m_sex;
	std::string m_species;
	double m_weight;

	Dyr(const std::string& n, const std::string& sex, const std::string& s, double w);

public:
	virtual void bevegelse(std::ostream& ost) const = 0; //=0 gjør klassen abstrakt
	virtual ~Dyr() = default;
	virtual std::string getGroup() const = 0;

	std::string getName() const { return m_name; }
	std::string getSex() const { return m_sex; }
	std::string getSpecies() const { return m_species; }
	double getWeight() const { return m_weight; }

	friend std::ostream& operator<<(std::ostream& ost, const Dyr& dyr);
};

