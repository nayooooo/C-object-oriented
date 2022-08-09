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
    Class *cp = New_Class_Typedef("zhangsan", 18);

    printf("The object's name is %s.\r\n", ((CLASS_NAME_VISIBLE)cp)->name);
    printf("The object's age is %d.\r\n", ((CLASS_GET_AGE_VISIBLE)cp)->class_Method_Table.Get_Age(cp));
    ((CLASS_SET_NAME_VISIBLE)cp)->class_Method_Table.Set_Name(cp, "lisi");
    printf("The object's name is %s.\r\n", ((CLASS_NAME_VISIBLE)cp)->name);
    Delete_Class_Typedef(cp);

    return 0;
}