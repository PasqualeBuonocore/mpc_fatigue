#ifndef __mpc_fatigue_TALKER_H__
#define __mpc_fatigue_TALKER_H__

#include <string>

namespace mpc_fatigue
{

    class Talker
    {
    
    public:
    
        Talker(std::string name);
	
	    void say_hello();
	    
	private:
	
	    std::string _name;
	
	};

}

#endif
