//
// Created by Alireza Zare on 11/12/2022.
//
#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "../user/user.h"
int

main(int argc, char *argv[])

{
    printf("kfreemem = %d\n", kfreemem());
    exit(0);
}