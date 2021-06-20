#ifndef __DPRT_MAPPER__
#define __DPRT_MAPPER__
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "sqlite3.h"

/*
			���ݿ��ȡ��ʽ
*/
///////////////////////////////////��Ӳ���/////////////////////////////////////////////
int save_dprt(sqlite3 *db,DATABASE *datainfo, DEPARTMENT dprt);
///////////////////////////////////ɾ������/////////////////////////////////////////////
// ͨ��rowidɾ������
int update_user_by_dprtId(sqlite3 *db,DATABASE *datainfo, DEPARTMENT dprt);
///////////////////////////////////�޸Ĳ���/////////////////////////////////////////////
// ����rowid�޸Ĳ���
int delete_user_by_dprtId(sqlite3 *db,DATABASE *datainfo, DEPARTMENT dprt);
///////////////////////////////////���Ҳ���///////////////////////////////////////////////
// ���ݲ������ֲ���
int select_dprt_by_name(sqlite3 *db,DATABASE *datainfo,DEPARTMENT dprt);
// ִ�����ݿ����
int exec(sqlite3 *db,DATABASE *datainfo);
// �������в���
int select_all_dprt(sqlite3 *db,DATABASE *datainfo);
// ����id���Ҳ���
int select_dprt_by_id(sqlite3 *db,DATABASE *datainfo, int rowid);
#endif
