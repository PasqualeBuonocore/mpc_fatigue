#include <mpc_fatigue/talker.h>

int main(int argc, char ** argv)
{
    mpc_fatigue::Talker talker("Pasquale");
    talker.say_hello();

    return 0;
}
