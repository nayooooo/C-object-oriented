/**
 * @file class.h
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类
 * @version 0.1.0
 * @date 2022-08-10
 */

#ifndef __PRIVATE_MEMBER_H
#define __PRIVATE_MEMBER_H

#include "config.h"

/* 成员and方法的可见性登记 ------------------------------*/

/* 指针类型宏定义 */
#define CLASS_TYPEDEF_PUBLIC    Class_Typedef*
#define CLASS_TYPEDEF_PRIVATE   Class_Internal*
/* 公共成员可见性登记 */
#define CLASS_NAME_VISIBLE            CLASS_TYPEDEF_PUBLIC
#define CLASS_GET_NAME_VISIBLE        CLASS_TYPEDEF_PUBLIC
/* 私有成员可见性登记 */
#define CLASS_INTRO_VISIBLE           CLASS_TYPEDEF_PRIVATE
#define CLASS_AGE_VISIBLE             CLASS_TYPEDEF_PRIVATE

/* public struct -------------------------------------*/

typedef struct Class_Struct{
    uint8_t *name;

    uint8_t *(*Get_Name)(struct Class_Struct const *const cp);
}Class_Typedef;

/* private struct ------------------------------------*/

typedef struct{
    union{
        Class_Typedef public_Class_Object;
        void *intro;
    };

    uint8_t age;
}Class_Internal;

/* 结构体处理函数 -------------------------------------*/

Class_Typedef * New_Class_Typedef(uint8_t *const name);
void Delete_Class_Typedef(Class_Typedef *cp);

static uint8_t *Get_Name(Class_Typedef const *const cp);

#endif /* __PRIVATE_MEMBER_H */
