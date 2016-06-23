/**
 * mod      用户管理模块
 * design   冯世昌
 * author   陈波
 * info 该模块包含了用户的一些操作，包括 添加、删除、修改信息的功能
 */
#ifndef __MOD_USER__
#define __MOD_USER__
/**********************************[[[ 相关结构体 ]]]**************************************/
/**< 用户类型数据 */
typedef enum
{
    user_admin=0,
    user_teacher=1,
    user_student=2,
} user_type;

/**< 三类信息结构体 */
typedef struct student_info
{
    // 班级、学号
    char *class_name;
    char *student_number;

} student_info;

typedef struct teacher_info
{
    // 老师信息
    char *teacher_info;
} teacher_info;

typedef struct admin_info
{
    char *password; //密码
} admin_info;


typedef union user_info
{
    admin_info ai;
    teacher_info ti;
    student_info si;
} user_info;

/**< 用户数据结构体 */
typedef struct user_data
{
    int id; // 编号
    char *name; // 姓名
    user_type type;
    user_info info;
} user_data;

/**********************************[[[ 相关操作 ]]]**************************************/

/** \brief 添加用户
 *
 * \param  用户姓名
 * \param  用户类型
 * \param  用户数据
 * \return 返回NULL失败
 *
 */

user_data *create_user(char *name,user_type type,user_info info);

/** \brief 根据用户ID获取用户数据
 *
 * \param ID
 * \return 失败返回 null 指针
 *
 */

user_data *get_user(int id);

/** \brief 根据用户ID获取用户名字
 *
 * \param ID
 * \return 失败返回负数
 *
 */
int user_id(char *name);

/** \brief 用文件储存用户
 *
 * \param 用户数据
 * \return 0 成功 -1 失败
 *
 */
int create_user_file(user_data *data);
/** \brief 修改用户信息
 *
 * \param 用户ID
 * \param 用户数据
 * \return 0 成功 -1 失败
 *
 */
int create_user_file(int id,user_data *data);
/** \brief 删除用户
 *
 * \param 用户ID
 * \return 0 成功 -1 失败
 *
 */
int delete_user(int id);

#endif // __MOD_USER__
