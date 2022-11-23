//
// Created by gazelle on 11/24/22.
//
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"
int
main(void)
{
    printf("xv6 free pages: %d\n", freeMemory());
    exit(0);
}