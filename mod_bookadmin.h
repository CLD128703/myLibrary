/**
 * mod      用户管理模块
 * design   冯世昌
 * author   陈理达
 */
#ifndef __MOD_BOOK__
#define __MOD_BOOK__

/**< 用户类型数据 */
typedef enum
{
    user_admin=0,
    user_teacher=1,
    user_student=2,
} user_type;

typedef struct user_data
{
    int num; // 编号
    char *name; // 姓名
    void *info;
} user_data;




#endif // __MOD_BOOK__
