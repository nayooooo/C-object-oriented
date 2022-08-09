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
/* 私有成员可见性登记 */
#define CLASS_INTRO_VISIBLE           CLASS_TYPEDEF_PRIVATE
#define CLASS_AGE_VISIBLE             CLASS_TYPEDEF_PRIVATE

/* private struct ------------------------------------*/

typedef struct{
    union{
        Class_Typedef public_Class_Object;
        void *intro;
    };

    uint8_t age;
}Class_Internal;

/* 对象行为函数 --------------------------------------*/

/**
 * @brief 创建一个对象
 * 
 * @param cp 对象指针
 * @param name 对象的名字
 * @return Class_Typedef* 对象的指针
 */
Class_Typedef * New_Class_Typedef(uint8_t *const name)
{
    Class_Internal *p = (Class_Internal*)malloc(sizeof(Class_Internal));

    /* 赋初值 */
    memset(p, 0, sizeof(Class_Internal));

    /* 公共成员 */
    ((CLASS_GET_NAME_VISIBLE)p)->Get_Name = Get_Name;
    ((CLASS_NAME_VISIBLE)p)->name = name;
    /* 私有成员 */

    printf("The object(%s) has been created!\r\n", ((CLASS_NAME_VISIBLE)p)->name);
    return (Class_Typedef*)p;
}

/**
 * @brief 在对象被释放前的析构
 * 
 * @param cp 对象指针
 */
void Delete_Class_Typedef(Class_Typedef *cp)
{
    printf("The object(%s) has been freed!\r\n", ((CLASS_NAME_VISIBLE)cp)->name);

    /* 依次释放 */
    if(((CLASS_INTRO_VISIBLE)cp)->intro != NULL)
        { free(((CLASS_INTRO_VISIBLE)cp)->intro); ((CLASS_INTRO_VISIBLE)cp)->intro = NULL; }
    if(((CLASS_NAME_VISIBLE)cp)->name != NULL)
        { free(((CLASS_NAME_VISIBLE)cp)->name); ((CLASS_NAME_VISIBLE)cp)->name = NULL; }
    if((Class_Internal*)cp != NULL)  // 对象占用的是Class_Internal
        { free((Class_Internal*)cp); cp = NULL; }
}

/**
 * @brief 得到私有成员name
 * 
 * @param cp 对象指针
 * @return uint8_t* 私有成员name
 */
static uint8_t *Get_Name(Class_Typedef const *const cp)
{
    return ((CLASS_NAME_VISIBLE)cp)->name;
}
