#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//#include "includes/server_utils.hpp"

int main(int argc, char *argv[])
{
    // NO ARGS
    if(!argv[1])
    {
        printf("Plyaski Server C.L.I\n\n\e[1mUsage:\n\t\e[0mplyaski <COMMAND>\n\n\tplyaski start ~ Starts the localized video server\n");
        printf("\n\tplyaski settings ~ Displays the current settings of the video server\n\n");
        printf("\t\tplyaski settings set <SETTING> <VALUE> ~ Sets a value of a setting\n\n\t\tplayaski settings ls ~ Lists all of the settings and their values\n");
        return 0;
    }

    if(strcmp(argv[1],"settings")==0)
    {
        if(!argv[2])
        {
             printf("\n\tplyaski settings ~ Displays the current settings of the video server\n\n");
             printf("\t\tplyaski settings set <SETTING> <VALUE> ~ Sets a value of a setting\n\n\t\tplayaski settings ls ~ Lists all of the settings and their values\n");
        }
        if(strcmp(argv[2], "ls"))
        {
            
        }
    }
};
