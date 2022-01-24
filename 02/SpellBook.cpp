
#include "SpellBook.hpp"

        // const/dest
SpellBook::SpellBook(const SpellBook &obj)
{
    operator=(obj);
}

        // op=
SpellBook & SpellBook::operator=(const SpellBook &obj)
{
    if (this != &obj)
    {
        spellbook = obj.spellbook;
    }
    return (*this);
}

        // const/dest
SpellBook::SpellBook(void)
{}

SpellBook::~SpellBook()
{
    std::vector<ASpell*>::iterator iter;

    for (iter = spellbook.begin(); iter != spellbook.end() ; iter++)
            delete *iter;
    spellbook.clear();
}

        // get
        // set
        // other
void    SpellBook::learnSpell(ASpell *spell_learn)
{
    std::vector<ASpell*>::iterator iter;

    for (iter = spellbook.begin();
            iter != spellbook.end()
            && (*iter)->getName() != spell_learn->getName();
                iter++)
    {}
    if (iter == spellbook.end())
        spellbook.push_back(spell_learn->clone());
    else
    {
        delete *iter;
        *iter = spell_learn->clone();
    }
}

void    SpellBook::forgetSpell(std::string spell_forget)
{
    std::vector<ASpell*>::iterator iter;

    for (iter = spellbook.begin();
            iter != spellbook.end() ;
                iter++)
    {
        if ((*iter)->getName() == spell_forget)
        {
            delete *iter;
            spellbook.erase(iter);
            break ;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    std::vector<ASpell*>::iterator iter;

    for (iter = spellbook.begin();
            iter != spellbook.end() ;
                iter++)
        if ((*iter)->getName() == spell_name)
            return ((*iter)->clone());
    return (0);
}
