#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
    public:
        Fireball(void);
        Fireball(std::string name, std::string effects);
        virtual ~Fireball();
        virtual Fireball *clone(void) const;
};

#endif
