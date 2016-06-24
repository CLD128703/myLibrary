/**
 * mod      ͼ�����ģ��
 * author   ����
 */
#ifndef __MOD_LIBRARY__
#define __MOD_LIBRARY__
#include "mod_useradmin.h"

/**< ��½��֤ */
int admin_login(int id,char *password);
/**< �û���֤ */
user_statu user_check(int id);
/**< ������Ϣ */
typedef struct book_lack_item
{
    int id; //�û�ID
    char *phone; //�û��ֻ�
    char *name; //�û�����
    char *book_name; //����
} book_lack_item;

/**< �����Ϣ */
typedef struct book_lend_item
{
    int item_id;    // ������
    int user_id;    // �����
    int lend_time;  // �����Ϣ
    char *isbn;     // �������
} book_lend_item;

/*******************[[ͼ�����]]**********************/
/**< ͼ����֤ */
int lb_check_book(char *isbn);
/**< ͼ���� */
int lb_lend_book(char *id);
/**< ȱ��Ǽ� */
int lb_lack_book(book_lack_item *book);
/**< ͼ��黹 */
int lb_return_book(int id,char *isbn);
/**< ͼ�鶪ʧ */
int lb_lost_book(char *isbn);
/**< ͼ������ */
int lb_refresh_book(char *isbn);
/**< ��ʷ��ѯ */
int lb_refresh_book(char *isbn);
/**< ����ʱ�� */
int lb_over_book(char *isbn);

/*******************[[�������]]**********************/
/**
    >���ڷ��� 0.1
    >��������
        >��ʦ 60
        >ѧ�� 30
    >��������
        >��ʦ 6
        >ѧ�� 3
    >������� 0.9
*/
typedef struct setting
{
    float overdue; //���ڷ���
    int date[2];
    int amount[2];
    float fine; //��ʧ����
} setting;
/**< ��ȡ���� */
setting *load_setting();
/**< �������� */
int save_setting(setting *setting);
/**< �������� */
int set_overdue(float);
int set_date(user_type type,int day);
int set_amount(user_type type,int amount);
int set_fine(float);
/**< ��ȡ���� */
int get_date(user_type type,int day);
float get_overdue(float);
int get_amount(user_type type,int amount);
float get_fine();

#endif // __MOD_LIBRARY__

