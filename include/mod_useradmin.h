/**
 * mod      �û�����ģ��
 * design   ������
 * author   �²�
 */
#ifndef __MOD_USER__
#define __MOD_USER__








<<<<<<< HEAD:include/mod_useradmin.h
/**< �û����ݽṹ�� */
typedef struct user_data
{
    int num; // ���
    char *name; // ����
    user_type type;
    user_info info;
} user_data;

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

user_data *get_user_by_id(int id);

/** \brief �����û�ID��ȡ�û�����
 *
 * \param ID
 * \return ʧ�ܷ��� null ָ��
 *
 */

user_data *get_user_by_name(char *name);

/** \brief ���ļ������û�
 *
 * \param �û�����
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int create_user_file(user_data *data);

/** \brief ɾ���û�
 *
 * \param �û�ID
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int delete_user_by_id(int id);

/** \brief ɾ���û�
 *
 * \param �û���
 * \return 0 �ɹ� -1 ʧ��
 *
 */
int delete_user_by_name(char *name);
=======
>>>>>>> parent of eb51643... 用户模块设计完成:mod_useradmin.h

#endif // __MOD_USER__
