#ifndef __DATABASE_H__
#define __DATABASE_H__

sqlite3 *db = NULL;  						// ���ݿ�����
char dbname[] = "staffManage.db";		// ���ݿ�����

//int exec_sql(sqlite3 *db,DATABASE *datainfo);
// notOpen = sqlite3_open(dbname, &db);// �����ݿ� �ӷ��ز�Ϊ0���ʧ��
/*�����̴�һ��ָ�� SQLite ���ݿ��ļ������ӣ�����һ���������� SQLite ��������ݿ����Ӷ���

��� filename ������ NULL �� ':memory:'����ô sqlite3_open() ������ RAM �д���һ���ڴ����ݿ⣬

��ֻ���� session ����Чʱ���ڳ���������ļ��� filename ��Ϊ NULL����ô sqlite3_open() ��ʹ���������ֵ���Դ����ݿ��ļ���

��������Ƶ��ļ������ڣ�sqlite3_open() ������һ���µ�����Ϊ�����Ƶ����ݿ��ļ����򿪡�*/

// ���������
// char *sql = "CREATE TABLE if not exists [student](\
			  [stu_id] VARCHAR(20) NOT NULL DEFAULT NULL, \
			  [name] VARCHAR(20) NOT NULL DEFAULT NULL, \
			  [elec] DOUBLE(3, 1) NOT NULL, \
			  [expe] DOUBLE(3, 1) NOT NULL, \
			  [requ] DOUBLE(3, 1) NOT NULL, \
			  [sum] DOUBLE(3, 1) NOT NULL);";

/* ��ѯ���ݱ� */
// char *sql = "select * from admin";
// sqlite3_get_table( db , sql , &tableData , &rowCount , &columnCount , &errorInfo );
/*SQL ������ sql �����ṩ�������ɶ�� SQL ������ɡ�

�������һ������ sqlite3 �Ǵ򿪵����ݿ����sqlite_callback ��һ���ص���data ��Ϊ���һ��������

errmsg ��������������ȡ�������ɵ��κδ���

sqlite3_exec() ���������ִ���� sql ����������ÿ�����ֱ���ַ�������������������Ϊֹ��*/


// sqlite3_close(db); //�ر����ݿ�

/*
�����̹ر�֮ǰ���� sqlite3_open() �򿪵����ݿ����ӡ�������������ص���䶼Ӧ�����ӹر�֮ǰ��ɡ�

������в�ѯû����ɣ�sqlite3_close() ������ SQLITE_BUSY ��ֹ�رյĴ�����Ϣ��
*/

#endif
