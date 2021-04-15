# include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string tittle): _name(name), _tittle(tittle)
{
    std::cout << this->_name << ", " << this->_tittle << ", is born \n";
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
    std::cout << this->_name << ", " << this->_tittle << ", is born \n";
    *this = other;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_tittle << ",  is dead. Consequences will never be the same!\n";
}

Sorcerer    &Sorcerer::operator=(Sorcerer const &other)
{
    std::cout << "Assignation called\n";
    this->_name = other._name;
    this->_tittle = other._tittle;
}


std::string Sorcerer::getName(void) const
{
    return (this->_name);
}


std::string Sorcerer::getTittle(void) const
{
    return (this->_tittle);
}

std::ostream    &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
    std::cout << "I am " << sorcerer.getName() << ", " << sorcerer.getTittle()
        << ", and I like ponies!\n";
}
