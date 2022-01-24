#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:
        Fwoosh(void);
        Fwoosh(std::string name, std::string effects);
        virtual ~Fwoosh();
        virtual Fwoosh *clone(void) const;
};

#endif
