/**
 * mod      图书管理模块
 * author   王凯
 */
#ifndef __MOD_LIBRARY__
#define __MOD_LIBRARY__
#include "mod_useradmin.h"

/**< 登陆验证 */
int admin_login(int id,char *password);
/**< 用户验证 */
user_statu user_check(int id);
/**< 借书信息 */
typedef struct book_lack_item
{
    int id; //用户ID
    char *phone; //用户手机
    char *name; //用户姓名
    char *book_name; //书名
} book_lack_item;

/**< 借出信息 */
typedef struct book_lend_item
{
    int item_id;    // 借出编号
    int user_id;    // 借出者
    int lend_time;  // 借出信息
    char *isbn;     // 借出的书
} book_lend_item;

/*******************[[图书管理]]**********************/
/**< 图书验证 */
int lb_check_book(char *isbn);
/**< 图书借出 */
int lb_lend_book(char *id);
/**< 缺书登记 */
int lb_lack_book(book_lack_item *book);
/**< 图书归还 */
int lb_return_book(int id,char *isbn);
/**< 图书丢失 */
int lb_lost_book(char *isbn);
/**< 图书续借 */
int lb_refresh_book(char *isbn);
/**< 历史查询 */
int lb_refresh_book(char *isbn);
/**< 到期时间 */
int lb_over_book(char *isbn);

/*******************[[设置相关]]**********************/
/**
    >超期罚款 0.1
    >借阅天数
        >老师 60
        >学生 30
    >借阅数量
        >老师 6
        >学生 3
    >罚款比例 0.9
*/
typedef struct setting
{
    float overdue; //超期罚款
    int date[2];
    int amount[2];
    float fine; //丢失罚款
} setting;
/**< 读取设置 */
setting *load_setting();
/**< 保存设置 */
int save_setting(setting *setting);
/**< 更改设置 */
int set_overdue(float);
int set_date(user_type type,int day);
int set_amount(user_type type,int amount);
int set_fine(float);
/**< 获取设置 */
int get_date(user_type type,int day);
float get_overdue(float);
int get_amount(user_type type,int amount);
float get_fine();

#endif // __MOD_LIBRARY__

