#ifndef _TOOL_HPP_
#define _TOOL_HPP_

#include <iostream>
#include <string>

class Tool
{
private:
    std::string _type;
    
protected:
    int         _numberOfUses;
    Tool(std::string type, int number = 0);
public:
    virtual ~Tool();
    virtual void    use() = 0;
    
    const   std::string& getType() const;
    const   int& getUses() const;
};


#endif