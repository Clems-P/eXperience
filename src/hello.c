#include <stdio.h>

#include "hello.h"

static void hello_there(void);
static void general_kenobi(void);


static void hello_there(void)
{
    printf("Hello There\n");
}

static void general_kenobi(void)
{
    printf("General Kenobi\n");
}

void hello(void)
{
    hello_there();
    general_kenobi();
}
