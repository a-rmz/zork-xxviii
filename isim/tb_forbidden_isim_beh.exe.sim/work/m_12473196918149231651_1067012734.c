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
static const char *ng0 = "/home/alex/ISE/Projects/zork/forbidden_moves.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {18U, 0U};
static unsigned int ng7[] = {22U, 0U};
static unsigned int ng8[] = {26U, 0U};
static unsigned int ng9[] = {30U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {8U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {13U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {10U, 0U};



static void Always_41_0(char *t0)
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

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6680);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    t5 = (t0 + 2208U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 5, 5, 2U, t7, 2, t6, 3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB25;

}

static void Always_64_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t35[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6696);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 4048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(66, ng0);
    t22 = (t0 + 2368U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    *((unsigned int *)t21) = t26;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB13:    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 7U);
    t32 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t32 & 7U);
    t33 = (t0 + 2688U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t21 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t34);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t33);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB18;

LAB15:    if (t46 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t35) = 1;

LAB18:    t50 = (t0 + 2528U);
    t51 = *((char **)t50);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t51);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t50 = (t35 + 4);
    t56 = (t51 + 4);
    t57 = (t52 + 4);
    t58 = *((unsigned int *)t50);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB19;

LAB20:
LAB21:    t83 = (t0 + 4208);
    xsi_vlogvar_wait_assign_value(t83, t52, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t21) = (t27 | t28);
    t29 = *((unsigned int *)t22);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t22) = (t29 | t30);
    goto LAB13;

LAB17:    t49 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB18;

LAB19:    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t52) = (t63 | t64);
    t65 = (t35 + 4);
    t66 = (t51 + 4);
    t67 = *((unsigned int *)t35);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t51);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t81 & t77);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    goto LAB21;

}

static void Always_72_2(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t14;

LAB0:    t1 = (t0 + 5616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6712);
    *((int *)t2) = 1;
    t3 = (t0 + 5648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 2368U);
    t6 = *((char **)t5);
    t5 = (t0 + 4208);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t8, 1, t6, 3);

LAB6:    t9 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t9, 4);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng14)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng15)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(95, ng0);

LAB22:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(75, ng0);

LAB18:    xsi_set_current_line(76, ng0);
    t11 = (t0 + 2208U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t12, 2, t11, 32);
    t14 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(80, ng0);

LAB19:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 3, t3, 32);
    t6 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t6, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(85, ng0);

LAB20:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2208U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 2, t3, 32);
    t6 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t6, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(90, ng0);

LAB21:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 3, t3, 32);
    t6 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t6, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB17;

}

static void Always_104_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6728);
    *((int *)t2) = 1;
    t3 = (t0 + 5896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 3728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 6824);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 6744);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 6888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_12473196918149231651_1067012734_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_64_1,(void *)Always_72_2,(void *)Always_104_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_12473196918149231651_1067012734", "isim/tb_forbidden_isim_beh.exe.sim/work/m_12473196918149231651_1067012734.didat");
	xsi_register_executes(pe);
}
