/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/alex/ISE/Projects/zork/key_decoder.v";
static unsigned int ng1[] = {238U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {237U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {235U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {231U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {222U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {221U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {219U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {215U, 0U};
static unsigned int ng16[] = {11U, 0U};
static unsigned int ng17[] = {190U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {189U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {187U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {183U, 0U};
static unsigned int ng24[] = {12U, 0U};
static unsigned int ng25[] = {126U, 0U};
static unsigned int ng26[] = {14U, 0U};
static unsigned int ng27[] = {125U, 0U};
static unsigned int ng28[] = {0U, 0U};
static unsigned int ng29[] = {123U, 0U};
static unsigned int ng30[] = {15U, 0U};
static unsigned int ng31[] = {119U, 0U};
static unsigned int ng32[] = {13U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t7, 4, t6, 4);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng31)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 4, 0LL);
    goto LAB41;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB31:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB33:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

}


extern void work_m_09481843223439723267_3293855025_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_09481843223439723267_3293855025", "isim/zork_game_test_isim_beh.exe.sim/work/m_09481843223439723267_3293855025.didat");
	xsi_register_executes(pe);
}
