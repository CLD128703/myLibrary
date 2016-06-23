/**
 * mod      �û�����ģ��
 * design   ������
 * author   �����
 * info ���ļ��ṩ�˹������ ��ӡ����ࡢ������黹����ѯ����ʧ���ܣ�
 *      �ṩ�˶��鼮������ ��ӡ�ɾ��
 */
#ifndef __MOD_BOOK__
#define __MOD_BOOK__
/**********************************[[[ ��ؽṹ�� ]]]************************************/
typedef book_type
{
    int index;          // ��������
    char *type_name;    // ��������
} book_type;

typedef book_stock
{
    int amount;         // ���
    int lent;           // ���
    int isbn;           // ISBN
} book_info;

typedef book_info
{
    char *book_name;    // ����
    char *isbn;         // �鼮��ISBN
    int type_index;     // ��������
    char *author;       // ����
    char *publish;      // ������
    int publish_time;   // ����ʱ�� ��Uinxʱ�����
    double cost;        // ���
};
/**********************************[[[ ����� ]]]**************************************/
/** \brief �������
 *
 * \param ������Ϣ
 * \param ��������
 * \return 0 �ɹ� ��0ʧ��
 *
 */

int add_book(book_info book,int amount);

/** \brief �����鼮��ISBN��ѯ�鼮��Ϣ
 *
 * \param  �鼮��ISBN
 * \return nullʧ��
 *
 */
book_info *get_book_info(char *isbn);
/** \brief �������
 *
 * \param  �鼮��ISBN
 * \param  �鼮�������
 * \return nullʧ��
 *
 */
int classification(char *isbn,int type);
/** \brief ����鼮
 *
 * \param  ����鼮��ID
 * \return <0 ʧ��
 *
 */
int lend_book(char *id);
/** \brief �����鼮
 *
 * \param  ����鼮��ID
 * \return <0 ʧ��
 *
 */
int return_book(char *id);
/** \brief ��ʧ�鼮
 *
 * \param  ����鼮��ID
 * \return <0 ʧ��
 *
 */
int reduce_book(char *id);

// ����ת��ISBN
char *book2isbn(char *name);
// ��IDתISBN
char *id2ibsn(char *id);

/**********************************[[[ ������� ]]]**************************************/

/** \brief ��������
 *
 * \param ������
 * \return ����ʧ�ܣ�����>0�������
 *
 */
int add_type(char *type_name);
/** \brief ɾ�������
 *
 * \param ���������
 * \return ����ʧ�ܣ�0�ɹ�
 *
 */
int del_type(int index);
/** \brief �����������ȡ�������
 *
 * \param �������
 * \return ����ʧ�ܣ�>0�ɹ�
 *
 */
int type2index(char *name);

#endif // __MOD_BOOK__
