#include "Warlock.hpp"

//constr/destr:
Warlock::Warlock()
{
    std::cout << getName() + ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(std::string name, std::string title) :
                    _name(name), _title(title)
{
    std::cout << getName() + ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &obj)
{
    operator=(obj);
}

Warlock::~Warlock()
{
    std::cout << getName() + ": My job here is done!" << std::endl;
}

//op=
Warlock &   Warlock::operator=(const Warlock &obj)
{
    if (this != &obj)
    {
        _name = obj.getName();
        _title = obj.getTitle();
    }
    return (*this);
}
//get
const std::string & Warlock::getName() const
{
    return (_name);
}

const std::string & Warlock::getTitle() const
{
    return(_title);
}

//set
void    Warlock::setTitle(const std::string &title)
{
    _title = title;
}

//other
void Warlock::introduce() const
{
    std::cout << getName() + ": I am " + getName() + ", " + getTitle() + " !" << std::endl;
}
