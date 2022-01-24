#include "ATarget.hpp"


ATarget::ATarget(void)
{ }

ATarget::ATarget(const ATarget & obj)
{
    operator=(obj);
}

ATarget &   ATarget::operator=(const ATarget & obj)
{
    if (this != &obj)
    {
        _type = getType();
    }
    return (*this);
}

ATarget::ATarget(std::string type) :
                _type(type)
{ }

ATarget::~ATarget()
{ }

// get
std::string ATarget::getType(void) const
{
    return (_type);
}

void    ATarget::getHitBySpell(const ASpell &s_obj) const
{
    std::cout << getType() + " has been " + s_obj.getEffects() + "!" << std::endl;
}
