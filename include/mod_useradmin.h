/**
 * mod      �û�����ģ��
 * design   ������
 * author   �²�
 * info ��ģ��������û���һЩ���������� ��ӡ�ɾ�����޸���Ϣ�Ĺ���
 */
#ifndef __MOD_USER__
#define __MOD_USER__
/**********************************[[[ ��ؽṹ�� ]]]**************************************/
/**< �û��������� */
typedef enum
{
    user_admin=0,
    user_teacher=1,
    user_student=2,
} user_type;

/**< ������Ϣ�ṹ�� */
typedef struct student_info
{
    // �༶��ѧ��
    char *class_name;
    char *student_number;

} student_info;

typedef struct teacher_info
{
    // ��ʦ��Ϣ
    char *teacher_info;
} teacher_info;

typedef struct admin_info
{
    char *password; //����
} admin_info;


typedef union user_info
{
    admin_info ai;
    teacher_info ti;
    student_info si;
} user_info;

/**< �û����ݽṹ�� */
typedef struct user_data
{
    int id; // ���
    char *name; // ����
    user_type type;
    user_info info;
} user_data;

/**********************************[[[ ��ز��� ]]]**************************************/

/** \brief ����û�
 *
 * \param  �û�����
 * \param  �û�����
 * \param  �û�����
 * \return ����NULLʧ��
 *
 */

user_data *create_user(char *name,user_type type,user_info info);

/** \brief �����û�ID��ȡ�û�����
 *
 * \param ID
 * \return ʧ�ܷ��� null ָ��
 *
 */

user_data *get_user(int id);

/** \brief �����û�ID��ȡ�û�����
 *
 * \param ID
 * \return ʧ�ܷ��ظ���
 *
 */
int user_id(char *name);

/** \brief ���ļ������û�
 *
 * \param �û�����
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int create_user_file(user_data *data);
/** \brief �޸��û���Ϣ
 *
 * \param �û�ID
 * \param �û�����
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int create_user_file(int id,user_data *data);
/** \brief ɾ���û�
 *
 * \param �û�ID
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int delete_user(int id);

#endif // __MOD_USER__
