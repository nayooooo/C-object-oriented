#ifndef __CHILD_CLASS_H
#define __CHILD_CLASS_H

#include "class.h"

/* 公有属性and行为的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CHILD_CLASS_PUBLIC              Child_Class*
/* 公有属性可见性登记 */
#define CHILD_CLASS_HEIGH_VISIBLE       CHILD_CLASS_PUBLIC
/* 公有行为可见性登记 */

/* public struct -------------------------------------*/

typedef struct Class_Child_Struct{
    /* 继承Class类 */
    Class *base_Class;
    /* 公有属性 */
    uint8_t heigh;
    /* 公有行为 */
}Child_Class;

/* 类处理函数 -----------------------------------------*/

/* 构造和析构 */
Child_Class *New_Child_Class(uint8_t *name, uint8_t age, uint8_t heigh, uint8_t *knowledge);
void Delete_Child_Class(Child_Class *ccp);

#endif /* __CHILD_CLASS_H */
