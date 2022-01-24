# include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(std::string name, std::string effects) : 
        ASpell(name, effects)
{}

Fwoosh::~Fwoosh()
{}

Fwoosh * Fwoosh::clone(void) const
{
    return (new Fwoosh(_name, _effects));
}
