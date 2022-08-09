/**
 * @file child_class.c
 * @author YEWAN
 * @code UTF-8
 * @brief 面向对象的类（继承后的子类）
 * @version 1.0.0
 * @date 2022-08-10
 */

#include "child_class.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* 私有成员and方法的可见性登记 --------------------------*/

/* 指针类型宏定义 */
#define CHILD_CLASS_PRIVATE             Child_Class_Internal*
/* 私有属性可见性登记 */
#define CHILD_CLASS_INTRO_VISIBLE       CHILD_CLASS_PRIVATE
#define CHILD_CLASS_KNOWLEDGE_VISIBLE   CHILD_CLASS_PRIVATE
/* 私有行为可见性登记 */

/* private and public struct -------------------------*/

typedef struct{
    /* 公有属性and行为 */
    union{
        Child_Class public_Child_Class;
        void *intro;
    };
    /* 私有属性 */
    uint8_t *knowledge;
    /* 私有行为 */
}Child_Class_Internal;

/* 构造和析构 ----------------------------------------*/

/**
 * @brief 创建一个对象
 * 
 * @param name 对象的名字的指针(public)
 * @param age 对象的名字的指针(private)
 * @param heigh 对象的高度(public)
 * @param knowledge 对象的知识(private)
 * @return Child_Class* 
 */
Child_Class *New_Child_Class(uint8_t *name, uint8_t age, uint8_t heigh, uint8_t *knowledge)
{
    Child_Class_Internal *p = (Child_Class_Internal*)malloc(sizeof(Child_Class_Internal));

    /* 继承的类 */
    ((CHILD_CLASS_PUBLIC)p)->base_Class = New_Class(name, age);
    /* 公共属性 */
    ((CHILD_CLASS_PUBLIC)p)->heigh = heigh;
    /* 公共行为 */
    /* 私有属性 */
    ((CHILD_CLASS_PRIVATE)p)->knowledge = knowledge;
    /* 私有行为 */

    printf("The object(%s) has been created!\r\n",\
        ((CLASS_PUBLIC)(((CHILD_CLASS_PUBLIC)p)->base_Class))->name);
    return (CHILD_CLASS_PUBLIC)p;
}

/**
 * @brief 在对象被释放前的析构
 * 
 * @param ccp 对象指针
 */
void Delete_Child_Class(Child_Class *ccp)
{
    printf("The object(%s) has been freed!\r\n",\
        ((CLASS_PUBLIC)(((CHILD_CLASS_PUBLIC)ccp)->base_Class))->name);

    /* 依次释放 */
    /* 继承的类 */
    Delete_Class(((CHILD_CLASS_PUBLIC)ccp)->base_Class);
    /* 对象本身 */
    if((CHILD_CLASS_PRIVATE)ccp != NULL){
        free((CHILD_CLASS_PRIVATE)ccp);
        ccp = NULL;
    }
}
