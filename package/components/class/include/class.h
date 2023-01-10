/**
 * @file class.h
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#ifndef __CLASS_H
#define __CLASS_H

#include <stdint.h>

/* public VISIBILITY --------------------------------------------*/

#define CLASS_PUBLIC                    Class*

#define CLASS_NAME_VISIBILITY           CLASS_PUBLIC

#define CLASS_VPTR_VISIBILITY           CLASS_PUBLIC
#define CLASS_GET_AGE_VISIBILITY        CLASS_PUBLIC

/* public struct ------------------------------------------------*/

typedef struct Class_Method_Table Class_Method_Table;

typedef struct Class{
    uint8_t *name;
    Class_Method_Table *vptr;
}Class;

typedef struct Class_Method_Table{
    uint8_t (*get_Age)(Class *const this);
}Class_Method_Table;

/* public method ------------------------------------------------*/

Class *new_Class(uint8_t *name, uint8_t age);
Class *delete_Class(Class *this);

/**
 * @brief Get the Age object
 *
 * @param this object's pointer
 * @return uint8_t object's age
 */
uint8_t get_Age(Class *const this);

#endif /* __CLASS_H */
