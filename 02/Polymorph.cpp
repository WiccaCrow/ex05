#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into critter")
{}

Polymorph::Polymorph(std::string name, std::string effects) : 
        ASpell(name, effects)
{}

Polymorph::~Polymorph()
{}

Polymorph * Polymorph::clone(void) const
{
    return (new Polymorph(_name, _effects));
}
