/**
 * @file main.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "main.h"

int main(int argc, char *argv[])
{
    Class *obj = new_Class("apple", 3);

    printf("The object's name is %s.\r\n", obj->name);
    printf("The object's age is %d.\r\n", obj->vptr->get_Age(obj));

    obj = delete_Class(obj);

    return 0;
}
