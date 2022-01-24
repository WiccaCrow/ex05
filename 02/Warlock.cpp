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
    std::cout << getName() + ": My job here is done!" << std::endl;
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
void    Warlock::learnSpell(ASpell *spell_learn)
{
        spellbook.learnSpell(spell_learn);
}

void    Warlock::forgetSpell(std::string spell_forget)
{
    spellbook.forgetSpell(spell_forget);
}

void    Warlock::launchSpell(std::string spell_name, ATarget &obj)
{
    ASpell *spell = spellbook.createSpell(spell_name);
    if (spell)
        spell->launch(obj);
    delete spell;
}