/**
 * mod      用户管理模块
 * design   冯世昌
 * author   陈理达
 * info 该文件提供了关于书的 添加、归类、借出、归还、查询、丢失功能；
 *      提供了对书籍分类别的 添加、删除
 */
#ifndef __MOD_BOOK__
#define __MOD_BOOK__
/**********************************[[[ 相关结构体 ]]]************************************/
typedef book_type
{
    int index;          // 分类索引
    char *type_name;    // 分类名称
} book_type;

typedef book_stock
{
    int amount;         // 库存
    int lent;           // 借出
    int isbn;           // ISBN
} book_info;

typedef book_info
{
    char *book_name;    // 书名
    char *isbn;         // 书籍的ISBN
    int type_index;     // 分类索引
    char *author;       // 作者
    char *publish;      // 出版社
    int publish_time;   // 出版时间 （Uinx时间戳）
    double cost;        // 金额
};
/**********************************[[[ 书管理 ]]]**************************************/
/** \brief 添加新书
 *
 * \param 新书信息
 * \param 新书数量
 * \return 0 成功 非0失败
 *
 */

int add_book(book_info book,int amount);

/** \brief 根据书籍的ISBN查询书籍信息
 *
 * \param  书籍的ISBN
 * \return null失败
 *
 */
book_info *get_book_info(char *isbn);
/** \brief 分类书记
 *
 * \param  书籍的ISBN
 * \param  书籍的类别编号
 * \return null失败
 *
 */
int classification(char *isbn,int type);
/** \brief 借出书籍
 *
 * \param  借出书籍的ID
 * \return <0 失败
 *
 */
int lend_book(char *id);
/** \brief 还回书籍
 *
 * \param  借出书籍的ID
 * \return <0 失败
 *
 */
int return_book(char *id);
/** \brief 丢失书籍
 *
 * \param  借出书籍的ID
 * \return <0 失败
 *
 */
int reduce_book(char *id);

// 书名转书ISBN
char *book2isbn(char *name);
// 书ID转ISBN
char *id2ibsn(char *id);

/**********************************[[[ 书类管理 ]]]**************************************/

/** \brief 添加书类别
 *
 * \param 书类名
 * \return 负数失败，返回>0的类别编号
 *
 */
int add_type(char *type_name);
/** \brief 删除书类别
 *
 * \param 书类别索引
 * \return 负数失败，0成功
 *
 */
int del_type(int index);
/** \brief 根据类别名获取类别索引
 *
 * \param 书类别名
 * \return 负数失败，>0成功
 *
 */
int type2index(char *name);

#endif // __MOD_BOOK__
