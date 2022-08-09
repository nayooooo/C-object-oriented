#include <stdio.h>

/* 数据类型别名 -------------------*/

typedef char            int8_t;
typedef short           int16_t;
typedef int             int32_t;

typedef unsigned char   uint8_t;
typedef unsigned short  uint16_t;
typedef unsigned int    uint32_t;

/* 类 ----------------------------*/

typedef struct{
	void *intro;
	uint8_t *name;
}Verify_Typedef;

typedef struct{
	union{
		Verify_Typedef public_Verify_Typedef;
		void *intro;
	};

	uint8_t age;
}Verify_Internal;


/* 主函数 ------------------------*/

int main()
{
	printf("Hello World!\r\n");

	return 0;
}

/* 自定义函数 --------------------*/

/**
 * @brief 得到不同可见性下的指针
 * 
 * @param type 可见性类型
 * @return void* 
 */
void *Get_Diffrent_Visible_Pointer(uint8_t type)
{}
