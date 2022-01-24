#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;
class ASpell;

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        std::vector<ASpell*> spellbook;

        //constr/destr:
        Warlock(void);
        Warlock(const Warlock & obj);
        Warlock &   operator=(const Warlock & obj);
    public:
        //constr/destr:
        Warlock(std::string name, std::string title);
        ~Warlock();

        // get
        const std::string & getName(void) const;
        const std::string & getTitle(void) const;

        // set
        void    setTitle(const std::string &title);

        //other
        void introduce(void) const;

        //ex01
        void    learnSpell(const ASpell *spell_learn);
        void    forgetSpell(std::string spell_forget);
        void    launchSpell(std::string spell_name, ATarget &obj);
};

#endif
