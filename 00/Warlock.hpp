#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
    private:
        std::string _name;
        std::string _title;
    //constr/destr:
        Warlock();
        Warlock(const Warlock &obj);
    //op=
        Warlock & operator=(const Warlock &obj);
    public:
    //constr/destr:
        Warlock(std::string name, std::string title);
        ~Warlock();
    //get
        const std::string & getName() const;
        const std::string & getTitle() const;
    //set
        void    setTitle(const std::string &title);
    // other
        void introduce() const;
};

#endif
