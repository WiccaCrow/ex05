#include "Warlock.hpp"


Warlock::Warlock(void)
{
    std::cout << getName() + ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock & obj)
{
    operator=(obj);
}

Warlock &   Warlock::operator=(const Warlock & obj)
{
    if (this != &obj)
    {
        _name = getName();
        _title = getTitle();
    }
    return (*this);
}

Warlock::Warlock(std::string name, std::string title) :
                _name(name), _title(title)
{
    std::cout << getName() + ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::vector<ASpell*>::iterator iter;

    std::cout << getName() + ": My job here is done!" << std::endl;
    for (iter = spellbook.begin(); iter != spellbook.end() ; iter++)
            delete *iter;
    spellbook.clear();
}

// get
const std::string & Warlock::getName(void) const
{
    return (_name);
}

const std::string & Warlock::getTitle(void) const
{
    return (_title);
}

// set
void    Warlock::setTitle(const std::string &title)
{
    _title = title;
}

//other
void Warlock::introduce(void) const
{
    std::cout << getName() + ": I am " 
                + getName() + ", " + getTitle() + "!" << std::endl;
}

//ex01
void    Warlock::learnSpell(const ASpell *spell_learn)
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
        *iter = spell_learn->clone();
}

void    Warlock::forgetSpell(std::string spell_forget)
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

void    Warlock::launchSpell(std::string spell_name, ATarget &obj)
{
    std::vector<ASpell*>::iterator iter;

    for (iter = spellbook.begin();
            iter != spellbook.end() ;
                iter++)
    {
        if ((*iter)->getName() == spell_name)
            (*iter)->launch(obj);
    }
}