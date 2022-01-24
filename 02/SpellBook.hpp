#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <vector>
#include <algorithm>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::vector<ASpell*> spellbook;

        // const/dest
        SpellBook(const SpellBook &obj);

        // op=
        SpellBook & operator=(const SpellBook &obj);
    public:
        // const/dest
        SpellBook(void);
        ~SpellBook();

        // get
        // set
        // other
        void    learnSpell(ASpell *spell_learn);
        void    forgetSpell(std::string spell_forget);
        ASpell* createSpell(std::string const &spell_name);

};

#endif