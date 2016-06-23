/**
 * mod      用户管理模块
 * design   冯世昌
 * author   陈波
 */
#ifndef __MOD_USER__
#define __MOD_USER__








<<<<<<< HEAD:include/mod_useradmin.h
/**< 用户数据结构体 */
typedef struct user_data
{
    int num; // 编号
    char *name; // 姓名
    user_type type;
    user_info info;
} user_data;

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

user_data *get_user_by_id(int id);

/** \brief 根据用户ID获取用户数据
 *
 * \param ID
 * \return 失败返回 null 指针
 *
 */

user_data *get_user_by_name(char *name);

/** \brief 用文件储存用户
 *
 * \param 用户数据
 * \return 0 成功 -1 失败
 *
 */
int create_user_file(user_data *data);

/** \brief 删除用户
 *
 * \param 用户ID
 * \return 0 成功 -1 失败
 *
 */
int delete_user_by_id(int id);

/** \brief 删除用户
 *
 * \param 用户名
 * \return 0 成功 -1 失败
 *
 */
int delete_user_by_name(char *name);
=======
>>>>>>> parent of eb51643... 鐢ㄦ埛妯″潡璁捐瀹屾垚:mod_useradmin.h

#endif // __MOD_USER__
