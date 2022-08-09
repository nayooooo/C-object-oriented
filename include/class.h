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

/* 公有属性and行为的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CLASS_PUBLIC                Class*
/* 公有属性可见性登记 */
#define CLASS_NAME_VISIBLE          CLASS_PUBLIC
/* 公有行为可见性登记 */
#define CLASS_GET_NAME_VISIBLE      CLASS_PUBLIC
#define CLASS_SET_NAME_VISIBLE      CLASS_PUBLIC
#define CLASS_GET_AGE_VISIBLE       CLASS_PUBLIC

/* public struct -------------------------------------*/

typedef struct Class_Struct{
    uint8_t *name;

    struct{
        uint8_t *(*Get_Name)(struct Class_Struct const *const cp);
        void (*Set_Name)(struct Class_Struct *const cp, uint8_t *name);
        uint8_t (*Get_Age)(struct Class_Struct *const cp);
    }class_Method_Table;  // 指针不行，猜测是因为如果是指针类型，那么没有开辟真正的此结构体内的成员
}Class;

/* 结构体处理函数 -------------------------------------*/

/* 构造和析构 */
Class * New_Class_Typedef(uint8_t *name, uint8_t age);
void Delete_Class_Typedef(Class *cp);
/* 公有行为函数 */
static uint8_t *Get_Name(Class const *const cp);
static void Set_Name(Class *const cp, uint8_t *name);
/* 私有行为函数 */
static uint8_t Get_Age(Class *const cp);

#endif /* __PRIVATE_MEMBER_H */
