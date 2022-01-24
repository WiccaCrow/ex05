#include "ASpell.hpp"


ASpell::ASpell(void)
{ }

ASpell::ASpell(const ASpell & obj)
{
    operator=(obj);
}

ASpell &   ASpell::operator=(const ASpell & obj)
{
    if (this != &obj)
    {
        _name = getName();
        _effects = getEffects();
    }
    return (*this);
}

ASpell::ASpell(std::string name, std::string effects) :
                _name(name), _effects(effects)
{ }

ASpell::~ASpell()
{ }

// get
std::string ASpell::getName(void) const
{
    return (_name);
}

std::string ASpell::getEffects(void) const
{
    return (_effects);
}

void    ASpell::launch(const ATarget &t_obj) const
{
    t_obj.getHitBySpell(*this);
}
