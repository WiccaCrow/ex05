#ifndef POLYMORPH_PHH
# define POLYMORPH_PHH

# include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:
        Polymorph(void);
        Polymorph(std::string name, std::string effects);
        virtual ~Polymorph();
        virtual Polymorph *clone(void) const;
};

#endif
