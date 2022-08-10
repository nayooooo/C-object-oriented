/**
 * @file class.h
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类
 * @version 1.1.0
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
#define CLASS_VPTR_VISIBLE          CLASS_PUBLIC
#define CLASS_GET_NAME_VISIBLE      CLASS_PUBLIC
#define CLASS_SET_NAME_VISIBLE      CLASS_PUBLIC
#define CLASS_GET_AGE_VISIBLE       CLASS_PUBLIC

/* public struct -------------------------------------*/

struct Class_Method_Table;

/* 类中的公有部分 */
typedef struct Class_Struct{
    /* 公有属性 */
    uint8_t *name;
    /* 公有行为 */
    struct Class_Method_Table const *vptr;  // 无法通过vptr修改指向区域的内容
}Class;

/* 对象行为表 */
struct Class_Method_Table{
    uint8_t (*Get_Age)(struct Class_Struct *const cp);
};

/* 类处理函数 -----------------------------------------*/

/* 构造和析构 */
Class *New_Class(uint8_t *name, uint8_t age);
void Delete_Class(Class *cp);
/* 公有行为函数 */
/* 私有行为函数 */
static uint8_t Get_Age(Class *const cp);

#endif /* __PRIVATE_MEMBER_H */
