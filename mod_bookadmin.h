/**
 * mod      �û�����ģ��
 * design   ������
 * author   �����
 */
#ifndef __MOD_BOOK__
#define __MOD_BOOK__

/**< �û��������� */
typedef enum
{
    user_admin=0,
    user_teacher=1,
    user_student=2,
} user_type;

typedef struct user_data
{
    int num; // ���
    char *name; // ����
    void *info;
} user_data;




#endif // __MOD_BOOK__
