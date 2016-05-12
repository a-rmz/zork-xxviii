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
static const char *ng0 = "/home/alex/ISE/Projects/zork/vga_control.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {800U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {752U, 0U};
static unsigned int ng6[] = {656U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {640U, 0U};
static unsigned int ng9[] = {521U, 0U};
static unsigned int ng10[] = {799U, 0U};
static unsigned int ng11[] = {492U, 0U};
static unsigned int ng12[] = {490U, 0U};
static unsigned int ng13[] = {480U, 0U};



static void Cont_45_0(char *t0)
{
    char t5[8];
    char t20[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t28, t5, 8);

LAB10:    t60 = (t0 + 5368);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t64, 0, 8);
    t65 = 1U;
    t66 = t65;
    t67 = (t28 + 4);
    t68 = *((unsigned int *)t28);
    t65 = (t65 & t68);
    t69 = *((unsigned int *)t67);
    t66 = (t66 & t69);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t71 | t65);
    t72 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t72 | t66);
    xsi_driver_vfirst_trans(t60, 0, 0);
    t73 = (t0 + 5256);
    *((int *)t73) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB14:    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t20);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t5 + 4);
    t33 = (t20 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB15:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t5 + 4);
    t43 = (t20 + 4);
    t44 = *((unsigned int *)t5);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t20);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB17;

}

static void Always_53_1(char *t0)
{
    char t4[8];
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
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5272);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 2408);
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
        goto LAB8;

LAB6:    if (*((unsigned int *)t8) == 0)
        goto LAB5;

LAB7:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB8:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB9:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB9;

}

static void Always_55_2(char *t0)
{
    char t4[8];
    char t31[8];
    char t36[8];
    char t40[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5288);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(62, ng0);

LAB15:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB19;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB19:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 10, 0LL);

LAB22:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB24;

LAB23:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB25;

LAB26:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t23) != 0)
        goto LAB30;

LAB31:    t30 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB32;

LAB33:    memcpy(t43, t31, 8);

LAB34:    t70 = (t43 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t43);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB49:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB50:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB53;

LAB52:    *((unsigned int *)t4) = 1;

LAB53:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB57:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB60;

LAB59:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB61;

LAB62:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t23) != 0)
        goto LAB66;

LAB67:    t30 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB68;

LAB69:    memcpy(t43, t31, 8);

LAB70:    t70 = (t43 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t43);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB90;

LAB87:    if (t19 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t4) = 1;

LAB90:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB91;

LAB92:
LAB93:
LAB85:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB95;

LAB94:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB96;

LAB97:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t23) != 0)
        goto LAB101;

LAB102:    t30 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB103;

LAB104:    memcpy(t43, t31, 8);

LAB105:    t70 = (t43 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t43);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB120:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB122;

LAB121:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB122;

LAB125:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB124;

LAB123:    *((unsigned int *)t4) = 1;

LAB124:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB128:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB9;

LAB11:    xsi_set_current_line(57, ng0);

LAB14:    xsi_set_current_line(58, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB13;

LAB18:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(66, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    goto LAB22;

LAB24:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB28:    *((unsigned int *)t31) = 1;
    goto LAB31;

LAB30:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB31;

LAB32:    t32 = (t0 + 3368);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB36;

LAB35:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB37;

LAB38:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t18 = *((unsigned int *)t41);
    t19 = (~(t18));
    t20 = *((unsigned int *)t36);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t41) != 0)
        goto LAB42;

LAB43:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t28 = *((unsigned int *)t45);
    t47 = (t27 | t28);
    *((unsigned int *)t46) = t47;
    t48 = *((unsigned int *)t46);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t36) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t40) = 1;
    goto LAB43;

LAB42:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB43;

LAB44:    t50 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t50 | t51);
    t52 = (t31 + 4);
    t53 = (t40 + 4);
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t64);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    goto LAB46;

LAB47:    xsi_set_current_line(72, ng0);
    t76 = ((char*)((ng3)));
    t77 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    goto LAB49;

LAB51:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(77, ng0);

LAB58:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng7)));
    t30 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 10, 0LL);
    goto LAB57;

LAB60:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t4) = 1;
    goto LAB62;

LAB64:    *((unsigned int *)t31) = 1;
    goto LAB67;

LAB66:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB67;

LAB68:    t32 = (t0 + 3368);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng10)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB72;

LAB71:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB73;

LAB74:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t18 = *((unsigned int *)t41);
    t19 = (~(t18));
    t20 = *((unsigned int *)t36);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t41) != 0)
        goto LAB78;

LAB79:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t28 = *((unsigned int *)t45);
    t47 = (t27 | t28);
    *((unsigned int *)t46) = t47;
    t48 = *((unsigned int *)t46);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB70;

LAB72:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t36) = 1;
    goto LAB74;

LAB76:    *((unsigned int *)t40) = 1;
    goto LAB79;

LAB78:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB79;

LAB80:    t50 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t50 | t51);
    t52 = (t31 + 4);
    t53 = (t40 + 4);
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t64);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    goto LAB82;

LAB83:    xsi_set_current_line(88, ng0);

LAB86:    xsi_set_current_line(89, ng0);
    t76 = ((char*)((ng3)));
    t77 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 10, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 21, t6, 32);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 21, 0LL);
    goto LAB85;

LAB89:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(93, ng0);
    t29 = (t0 + 3208);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 10, t32, 10, t33, 10);
    t34 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 10, 0LL);
    goto LAB93;

LAB95:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB97;

LAB96:    *((unsigned int *)t4) = 1;
    goto LAB97;

LAB99:    *((unsigned int *)t31) = 1;
    goto LAB102;

LAB101:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB102;

LAB103:    t32 = (t0 + 3208);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng12)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB107;

LAB106:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB108;

LAB109:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t18 = *((unsigned int *)t41);
    t19 = (~(t18));
    t20 = *((unsigned int *)t36);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t41) != 0)
        goto LAB113;

LAB114:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t28 = *((unsigned int *)t45);
    t47 = (t27 | t28);
    *((unsigned int *)t46) = t47;
    t48 = *((unsigned int *)t46);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB105;

LAB107:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB109;

LAB108:    *((unsigned int *)t36) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t40) = 1;
    goto LAB114;

LAB113:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB114;

LAB115:    t50 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t50 | t51);
    t52 = (t31 + 4);
    t53 = (t40 + 4);
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t64);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    goto LAB117;

LAB118:    xsi_set_current_line(97, ng0);
    t76 = ((char*)((ng3)));
    t77 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    goto LAB120;

LAB122:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB124;

LAB126:    xsi_set_current_line(102, ng0);

LAB129:    xsi_set_current_line(103, ng0);
    t29 = ((char*)((ng7)));
    t30 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 10, 0LL);
    goto LAB128;

}


extern void work_m_17738371399040098408_2971961157_init()
{
	static char *pe[] = {(void *)Cont_45_0,(void *)Always_53_1,(void *)Always_55_2};
	xsi_register_didat("work_m_17738371399040098408_2971961157", "isim/zork_game_test_isim_beh.exe.sim/work/m_17738371399040098408_2971961157.didat");
	xsi_register_executes(pe);
}
