#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <string>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "struct.h"
#include "menu.h"
#include "user_service.h"
#include "user_mapper.h"
#include "dprt_service.h"
#include "dprt_mapper.h"
#include "count_service.h"
#include "sqlite3.h"
#include "database.h"
#include "utils.h"
void init_database();
//void curr_user_info(DATABASE *datainfo,USER *p_user);
void curr_user_info(char **data,USER *p_user);
// gbk±àÂë×ª»»Îªutf8±àÂë
void gbk_to_utf8(char *word);
#endif
