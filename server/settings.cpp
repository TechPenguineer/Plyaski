#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "includes/server_utils.h"

/*
To Find a specific setting you can type "<setting display name> SETTING"

Example:
   ctrl+f PORT SETTING
*/


/*
Settings: 
    Port = 1080
    Developer Mode = False
    Advanced Logging = False 
    Create Log File = True
    Construction Mode = True 
    Server Name = "My Plyaski Server"
    Display Name = "The Beast"
*/

int port;
void set_settings(int argc, char *argv[])
{
    // PORT SETTING

    if(strcmp(argv[2], "port"))
    {
       if(!argv[3]){
            printf("Error: Unable to set a setting value to a NULL value. Expected value");
        }
       int port_value = atoi(argv[4]);

       port = port_value;
       printf("Succesfully Set Server Port To: %i\n",port);
    }
}

void list_all_settings()
{
    printf("\t");    
}