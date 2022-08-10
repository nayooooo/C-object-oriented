/**
 * @file main.c
 * @author YEWAN
 * @code UTF-8
 * @brief 实现C语言面向对象的第一次尝试
 * @version 1.1.0
 * @date 2022-08-10
 */

#include <stdio.h>
#include "config.h"
#include "class.h"
#include "child_class.h"

int main()
{
    Class *cp = New_Class("zhangsan", 18);

    printf("The object's name is %s.\r\n", cp->name);
    printf("The object's age is %d.\r\n", cp->vptr->Get_Age(cp));
    cp->name = "lisi";
    printf("The object's name is %s.\r\n", cp->name);
    Delete_Class(cp);

    printf("--------------------------------------------------------------------------------\r\n");

    Child_Class *ccp = New_Child_Class("wangwu", 28, 80, "unknow");

    printf("The object's name is %s.\r\n", ccp->base_Class->name);
    printf("The object's age is %d.\r\n", ccp->base_Class->vptr->Get_Age(ccp->base_Class));
    ccp->base_Class->name = "lisi";
    printf("The object's name is %s.\r\n", ccp->base_Class->name);
    Delete_Child_Class(ccp);

    return 0;
}