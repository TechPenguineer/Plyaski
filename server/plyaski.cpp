#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "includes/server_utils.hpp"

void main(int argc, char *argv[])
{
    if(strcmp(argv[1], "run")==0)
    {
        call_server_connection();
    }
}
