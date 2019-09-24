#include <mpc_fatigue/talker.h>
#include <iostream>

namespace mpc_fatigue
{

Talker::Talker(std::string name):
    _name(name)
{

}

void Talker::say_hello()
{
    std::cout << "Ciao " << _name << "!" << std::endl;
}

    
}
