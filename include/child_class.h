/**
 * @file child_class.h
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类（继承后的子类）
 * @version 1.0.0
 * @date 2022-08-10
 */

#ifndef __CHILD_CLASS_H
#define __CHILD_CLASS_H

#include "config.h"
#include "class.h"

/* 公有属性and行为的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CHILD_CLASS_PUBLIC              Child_Class*
/* 公有属性可见性登记 */
#define CHILD_CLASS_THIS_VISIBLE       CHILD_CLASS_PUBLIC
#define CHILD_CLASS_HEIGH_VISIBLE       CHILD_CLASS_PUBLIC
/* 公有行为可见性登记 */
#define CHILD_CLASS_VPTR_VISIBLE        CHILD_CLASS_PUBLIC

/* 父类宏 ---------------------------------------------*/

#define PARENT_CLASS_OF_CHILD_CLASS(Child_Class, Parent_Class)\
    (((CHILD_CLASS_PUBLIC)Child_Class)->Parent_Class)

/* public struct -------------------------------------*/

struct Child_Class_Method_Table;

typedef struct Child_Class_Struct{
    /* 继承Class类 */
    Class *super;
    /* 公有属性 */
    struct Child_Class_Struct* this;
    uint8_t heigh;
    /* 公有行为 */
    struct Child_Class_Method_Table const *vptr;
}Child_Class;

/* 对象行为表 */
struct Child_Class_Method_Table{
    void* intro;
};

/* 类处理函数 -----------------------------------------*/

/* 构造和析构 */
Child_Class *New_Child_Class(uint8_t *name, uint8_t age, uint8_t heigh, uint8_t *knowledge);
void Delete_Child_Class(Child_Class *ccp);

#endif /* __CHILD_CLASS_H */
