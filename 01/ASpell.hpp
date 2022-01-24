#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    public:
        //constr/destr:
        ASpell(void);
        ASpell(const ASpell & obj);
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();

        // op=
        ASpell &   operator=(const ASpell & obj);

        // get
        std::string getName(void) const;
        std::string getEffects(void) const;

        // other
        virtual ASpell *clone(void) const = 0;
        void    launch(const ATarget &t_obj) const;
};

#endif
