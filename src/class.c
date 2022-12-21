/**
 * @file class.c
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类
 * @version 1.1.0
 * @date 2022-08-10
 */

#include "class.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* 私有成员and方法的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CLASS_PRIVATE           Class_Internal*
/* 私有属性可见性登记 */
#define CLASS_INTRO_VISIBLE     CLASS_PRIVATE
#define CLASS_AGE_VISIBLE       CLASS_PRIVATE
/* 私有行为可见性登记 */

/* private and public struct -------------------------*/

typedef struct{
    /* 公有属性and行为 */
    union{
        Class public_Class;
        void *intro;
    };
    /* 私有属性 */
    uint8_t age;
    /* 私有行为 */
}Class_Internal;

/* 构造和析构 ----------------------------------------*/

/**
 * @brief 创建一个对象
 *
 * @param name 对象的名字的指针(public)
 * @param age 对象的名字的指针(private)
 * @return Class* 对象的指针
 */
Class *New_Class(uint8_t *name, uint8_t age)
{
    /* 对象 */
    Class_Internal *p = (Class_Internal*)malloc(sizeof(Class_Internal));
    /* 对象的行为 */
    // 需要通过其他的变量进行注册
    struct Class_Method_Table *temp = (struct Class_Method_Table*)malloc(sizeof(struct Class_Method_Table));

    /* 赋初值 */
    memset(p, 0, sizeof(Class_Internal));

    /* 继承的类 */
    /* 公共属性 */
    ((CLASS_NAME_VISIBLE)p)->this = p;
    ((CLASS_NAME_VISIBLE)p)->name = name;
    /* 公共行为 */
    ((CLASS_VPTR_VISIBLE)p)->vptr = temp;  // vptr指向行为表
    temp->Get_Age = Get_Age;
    /* 私有属性 */
    ((CLASS_AGE_VISIBLE)p)->age = age;
    /* 私有行为 */

    printf("The object(%s) has been created!\r\n", ((CLASS_NAME_VISIBLE)p)->name);
    return (CLASS_PUBLIC)p;
}

/**
 * @brief 在对象被释放前的析构
 *
 * @param cp 对象指针
 */
void Delete_Class(Class *cp)
{
    printf("The object(%s) has been freed!\r\n", ((CLASS_NAME_VISIBLE)cp)->name);

    /* 依次释放 */
    /* 继承的类 */
    /* 对象本身 */
    if(((CLASS_PUBLIC)cp)->vptr != NULL)
        { free(((void*)((CLASS_PUBLIC)cp)->vptr)); ((CLASS_PUBLIC)cp)->vptr = NULL; }
    if((Class_Internal*)cp != NULL)  // 对象占用的是Class_Internal
        { free((Class_Internal*)cp); cp = NULL; }
}

/* 对象公共行为函数 -----------------------------------*/

/* 对象私有行为函数 -----------------------------------*/

static uint8_t Get_Age(Class *const cp)
{
    return ((CLASS_AGE_VISIBLE)cp)->age;
}
