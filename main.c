/**
 * @file main.c
 * @author YEWAN
 * @code UTF-8
 * @brief 实现C语言面向对象的第一次尝试
 * @version 0.1.0
 * @date 2022-08-10
 */

#include <stdio.h>
#include "config.h"
#include "class.h"

int main()
{
    Class_Typedef *cp = New_Class_Typedef("zhangsan");

    printf("The object's name is %s.\r\n", ((CLASS_GET_NAME_VISIBLE)cp)->Get_Name(cp));
    Delete_Class_Typedef(cp);

    return 0;
}