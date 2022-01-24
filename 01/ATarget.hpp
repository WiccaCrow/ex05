#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;
    public:
        //constr/destr:
        ATarget(void);
        ATarget(const ATarget & obj);
        ATarget(std::string type);
        virtual ~ATarget();

        // op=
        ATarget &   operator=(const ATarget & obj);

        // get
        std::string getType(void) const;

        // other
        virtual ATarget * clone(void) const = 0;
        void    getHitBySpell(const ASpell &s_obj) const;
};

#endif
