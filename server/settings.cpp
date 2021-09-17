#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "includes/server_utils.h"
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
    if(strcmp(argv[2], "port"))
    {
       int port_value = atoi(argv[3]);

       port = port_value;
       printf("%i",port);
    }
}

void list_all_settings()
{
    printf("\t");    
}