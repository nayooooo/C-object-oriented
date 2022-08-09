/**
 * @file class.c
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类
 * @version 0.1.0
 * @date 2022-08-10
 */

#include "class.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* 私有成员and方法的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CLASS_TYPEDEF_PRIVATE   Class_Internal*
/* 私有属性可见性登记 */
#define CLASS_INTRO_VISIBLE     CLASS_TYPEDEF_PRIVATE
#define CLASS_AGE_VISIBLE       CLASS_TYPEDEF_PRIVATE
/* 私有行为可见性登记 */

/* private struct ------------------------------------*/

typedef struct{
    union{
        Class public_Class_Object;
        void *intro;
    };

    uint8_t age;
}Class_Internal;

/* 构造和析构 ----------------------------------------*/

/**
 * @brief 创建一个对象
 * 
 * @param cp 对象指针
 * @param name 对象的名字的指针
 * @return Class* 对象的指针
 */
Class * New_Class_Typedef(uint8_t *name, uint8_t age)
{
    Class_Internal *p = (Class_Internal*)malloc(sizeof(Class_Internal));

    /* 赋初值 */
    memset(p, 0, sizeof(Class_Internal));

    /* 公共属性 */
    ((CLASS_NAME_VISIBLE)p)->name = name;
    /* 公共行为 */
    ((CLASS_GET_NAME_VISIBLE)p)->class_Method_Table.Get_Name = Get_Name;
    ((CLASS_SET_NAME_VISIBLE)p)->class_Method_Table.Set_Name = Set_Name;
    ((CLASS_GET_AGE_VISIBLE)p)->class_Method_Table.Get_Age = Get_Age;
    /* 私有属性 */
    ((CLASS_AGE_VISIBLE)p)->age = age;
    /* 私有行为 */

    printf("The object(%s) has been created!\r\n", ((CLASS_NAME_VISIBLE)p)->name);
    return (Class*)p;
}

/**
 * @brief 在对象被释放前的析构
 * 
 * @param cp 对象指针
 */
void Delete_Class_Typedef(Class *cp)
{
    printf("The object(%s) has been freed!\r\n", ((CLASS_NAME_VISIBLE)cp)->name);

    /* 依次释放 */
    if(((CLASS_NAME_VISIBLE)cp)->name != NULL)
        { free(((CLASS_NAME_VISIBLE)cp)->name); ((CLASS_NAME_VISIBLE)cp)->name = NULL; }
    if(((CLASS_INTRO_VISIBLE)cp)->intro != NULL)
        { free(((CLASS_INTRO_VISIBLE)cp)->intro); ((CLASS_INTRO_VISIBLE)cp)->intro = NULL; }
    if((Class_Internal*)cp != NULL)  // 对象占用的是Class_Internal
        { free((Class_Internal*)cp); cp = NULL; }
}

/* 对象公共行为函数 -----------------------------------*/

/**
 * @brief 得到公共成员name
 * 
 * @param cp 对象指针
 * @return uint8_t* 公共成员name的指针
 */
static uint8_t *Get_Name(Class const *const cp)
{
    return ((CLASS_NAME_VISIBLE)cp)->name;
}

/**
 * @brief 更改公共成员name
 * 
 * @param cp 对象指针
 * @param name 对象的公共成员name的指针
 */
static void Set_Name(Class *const cp, uint8_t *name)
{
    ((CLASS_NAME_VISIBLE)cp)->name = name;
}

/* 对象私有行为函数 -----------------------------------*/

static uint8_t Get_Age(Class *const cp)
{
    return ((CLASS_AGE_VISIBLE)cp)->age;
}
