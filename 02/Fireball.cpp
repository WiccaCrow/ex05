#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::Fireball(std::string name, std::string effects) : 
        ASpell(name, effects)
{}

Fireball::~Fireball()
{}

Fireball * Fireball::clone(void) const
{
    return (new Fireball(_name, _effects));
}
