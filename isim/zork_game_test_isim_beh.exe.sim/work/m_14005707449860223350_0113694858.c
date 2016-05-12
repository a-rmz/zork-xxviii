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
static const char *ng0 = "/home/alex/ISE/Projects/zork/game_control.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {0, 0};
static unsigned int ng9[] = {15U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {7U, 0U};



static void Always_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 6336);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6352);
    *((int *)t2) = 1;
    t3 = (t0 + 5056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 3, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB17;

}

static void Cont_56_2(char *t0)
{
    char t9[8];
    char t25[8];
    char t41[8];
    char t45[8];
    char t53[8];
    char t89[8];
    char t105[8];
    char t121[8];
    char t125[8];
    char t133[8];
    char t165[8];
    char t197[8];
    char t213[8];
    char t229[8];
    char t233[8];
    char t241[8];
    char t273[8];
    char t305[8];
    char t321[8];
    char t337[8];
    char t341[8];
    char t349[8];
    char t381[8];
    char t409[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    char *t227;
    char *t228;
    char *t230;
    char *t231;
    char *t232;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    int t265;
    int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    char *t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    char *t302;
    char *t303;
    char *t304;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    char *t320;
    char *t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    char *t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    char *t333;
    char *t334;
    char *t335;
    char *t336;
    char *t338;
    char *t339;
    char *t340;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    char *t353;
    char *t354;
    char *t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    char *t363;
    char *t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    int t373;
    int t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    char *t385;
    char *t386;
    char *t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    char *t395;
    char *t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    int t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    char *t413;
    char *t414;
    char *t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    char *t423;
    char *t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    unsigned int t431;
    unsigned int t432;
    int t433;
    int t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    char *t441;
    char *t442;
    char *t443;
    char *t444;
    char *t445;
    unsigned int t446;
    unsigned int t447;
    char *t448;
    unsigned int t449;
    unsigned int t450;
    char *t451;
    unsigned int t452;
    unsigned int t453;
    char *t454;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB4:    if (t21 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;

LAB7:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t26) != 0)
        goto LAB10;

LAB11:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    memcpy(t53, t25, 8);

LAB14:    t85 = (t0 + 3704);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng5)));
    memset(t89, 0, 8);
    t90 = (t87 + 4);
    t91 = (t88 + 4);
    t92 = *((unsigned int *)t87);
    t93 = *((unsigned int *)t88);
    t94 = (t92 ^ t93);
    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = (t94 | t97);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t91);
    t101 = (t99 | t100);
    t102 = (~(t101));
    t103 = (t98 & t102);
    if (t103 != 0)
        goto LAB30;

LAB27:    if (t101 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t89) = 1;

LAB30:    memset(t105, 0, 8);
    t106 = (t89 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t89);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t106) != 0)
        goto LAB33;

LAB34:    t113 = (t105 + 4);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t113);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB35;

LAB36:    memcpy(t133, t105, 8);

LAB37:    t166 = *((unsigned int *)t53);
    t167 = *((unsigned int *)t133);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t169 = (t53 + 4);
    t170 = (t133 + 4);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t169);
    t173 = *((unsigned int *)t170);
    t174 = (t172 | t173);
    *((unsigned int *)t171) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 != 0);
    if (t176 == 1)
        goto LAB50;

LAB51:
LAB52:    t193 = (t0 + 3704);
    t194 = (t193 + 56U);
    t195 = *((char **)t194);
    t196 = ((char*)((ng7)));
    memset(t197, 0, 8);
    t198 = (t195 + 4);
    t199 = (t196 + 4);
    t200 = *((unsigned int *)t195);
    t201 = *((unsigned int *)t196);
    t202 = (t200 ^ t201);
    t203 = *((unsigned int *)t198);
    t204 = *((unsigned int *)t199);
    t205 = (t203 ^ t204);
    t206 = (t202 | t205);
    t207 = *((unsigned int *)t198);
    t208 = *((unsigned int *)t199);
    t209 = (t207 | t208);
    t210 = (~(t209));
    t211 = (t206 & t210);
    if (t211 != 0)
        goto LAB56;

LAB53:    if (t209 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t197) = 1;

LAB56:    memset(t213, 0, 8);
    t214 = (t197 + 4);
    t215 = *((unsigned int *)t214);
    t216 = (~(t215));
    t217 = *((unsigned int *)t197);
    t218 = (t217 & t216);
    t219 = (t218 & 1U);
    if (t219 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t214) != 0)
        goto LAB59;

LAB60:    t221 = (t213 + 4);
    t222 = *((unsigned int *)t213);
    t223 = *((unsigned int *)t221);
    t224 = (t222 || t223);
    if (t224 > 0)
        goto LAB61;

LAB62:    memcpy(t241, t213, 8);

LAB63:    t274 = *((unsigned int *)t165);
    t275 = *((unsigned int *)t241);
    t276 = (t274 | t275);
    *((unsigned int *)t273) = t276;
    t277 = (t165 + 4);
    t278 = (t241 + 4);
    t279 = (t273 + 4);
    t280 = *((unsigned int *)t277);
    t281 = *((unsigned int *)t278);
    t282 = (t280 | t281);
    *((unsigned int *)t279) = t282;
    t283 = *((unsigned int *)t279);
    t284 = (t283 != 0);
    if (t284 == 1)
        goto LAB76;

LAB77:
LAB78:    t301 = (t0 + 3704);
    t302 = (t301 + 56U);
    t303 = *((char **)t302);
    t304 = ((char*)((ng1)));
    memset(t305, 0, 8);
    t306 = (t303 + 4);
    t307 = (t304 + 4);
    t308 = *((unsigned int *)t303);
    t309 = *((unsigned int *)t304);
    t310 = (t308 ^ t309);
    t311 = *((unsigned int *)t306);
    t312 = *((unsigned int *)t307);
    t313 = (t311 ^ t312);
    t314 = (t310 | t313);
    t315 = *((unsigned int *)t306);
    t316 = *((unsigned int *)t307);
    t317 = (t315 | t316);
    t318 = (~(t317));
    t319 = (t314 & t318);
    if (t319 != 0)
        goto LAB82;

LAB79:    if (t317 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t305) = 1;

LAB82:    memset(t321, 0, 8);
    t322 = (t305 + 4);
    t323 = *((unsigned int *)t322);
    t324 = (~(t323));
    t325 = *((unsigned int *)t305);
    t326 = (t325 & t324);
    t327 = (t326 & 1U);
    if (t327 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t322) != 0)
        goto LAB85;

LAB86:    t329 = (t321 + 4);
    t330 = *((unsigned int *)t321);
    t331 = *((unsigned int *)t329);
    t332 = (t330 || t331);
    if (t332 > 0)
        goto LAB87;

LAB88:    memcpy(t349, t321, 8);

LAB89:    t382 = *((unsigned int *)t273);
    t383 = *((unsigned int *)t349);
    t384 = (t382 | t383);
    *((unsigned int *)t381) = t384;
    t385 = (t273 + 4);
    t386 = (t349 + 4);
    t387 = (t381 + 4);
    t388 = *((unsigned int *)t385);
    t389 = *((unsigned int *)t386);
    t390 = (t388 | t389);
    *((unsigned int *)t387) = t390;
    t391 = *((unsigned int *)t387);
    t392 = (t391 != 0);
    if (t392 == 1)
        goto LAB102;

LAB103:
LAB104:    t410 = *((unsigned int *)t4);
    t411 = *((unsigned int *)t381);
    t412 = (t410 & t411);
    *((unsigned int *)t409) = t412;
    t413 = (t4 + 4);
    t414 = (t381 + 4);
    t415 = (t409 + 4);
    t416 = *((unsigned int *)t413);
    t417 = *((unsigned int *)t414);
    t418 = (t416 | t417);
    *((unsigned int *)t415) = t418;
    t419 = *((unsigned int *)t415);
    t420 = (t419 != 0);
    if (t420 == 1)
        goto LAB105;

LAB106:
LAB107:    t441 = (t0 + 6496);
    t442 = (t441 + 56U);
    t443 = *((char **)t442);
    t444 = (t443 + 56U);
    t445 = *((char **)t444);
    memset(t445, 0, 8);
    t446 = 1U;
    t447 = t446;
    t448 = (t409 + 4);
    t449 = *((unsigned int *)t409);
    t446 = (t446 & t449);
    t450 = *((unsigned int *)t448);
    t447 = (t447 & t450);
    t451 = (t445 + 4);
    t452 = *((unsigned int *)t445);
    *((unsigned int *)t445) = (t452 | t446);
    t453 = *((unsigned int *)t451);
    *((unsigned int *)t451) = (t453 | t447);
    xsi_driver_vfirst_trans(t441, 0, 0);
    t454 = (t0 + 6368);
    *((int *)t454) = 1;

LAB1:    return;
LAB6:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t25) = 1;
    goto LAB11;

LAB10:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB11;

LAB12:    t37 = (t0 + 3224);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng8)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB16;

LAB15:    t43 = (t40 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t39) > *((unsigned int *)t40))
        goto LAB17;

LAB18:    memset(t45, 0, 8);
    t46 = (t41 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t41);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t46) != 0)
        goto LAB22;

LAB23:    t54 = *((unsigned int *)t25);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t57 = (t25 + 4);
    t58 = (t45 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t44 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t41) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t45) = 1;
    goto LAB23;

LAB22:    t52 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB23;

LAB24:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t25 + 4);
    t68 = (t45 + 4);
    t69 = *((unsigned int *)t25);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t45);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t83 & t79);
    t84 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t84 & t80);
    goto LAB26;

LAB29:    t104 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t105) = 1;
    goto LAB34;

LAB33:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB34;

LAB35:    t117 = (t0 + 3224);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng9)));
    memset(t121, 0, 8);
    t122 = (t119 + 4);
    if (*((unsigned int *)t122) != 0)
        goto LAB39;

LAB38:    t123 = (t120 + 4);
    if (*((unsigned int *)t123) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t119) < *((unsigned int *)t120))
        goto LAB40;

LAB41:    memset(t125, 0, 8);
    t126 = (t121 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t121);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t126) != 0)
        goto LAB45;

LAB46:    t134 = *((unsigned int *)t105);
    t135 = *((unsigned int *)t125);
    t136 = (t134 & t135);
    *((unsigned int *)t133) = t136;
    t137 = (t105 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB37;

LAB39:    t124 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t121) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t125) = 1;
    goto LAB46;

LAB45:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB46;

LAB47:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t105 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t105);
    t150 = (~(t149));
    t151 = *((unsigned int *)t147);
    t152 = (~(t151));
    t153 = *((unsigned int *)t125);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (~(t155));
    t157 = (t150 & t152);
    t158 = (t154 & t156);
    t159 = (~(t157));
    t160 = (~(t158));
    t161 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t161 & t159);
    t162 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t162 & t160);
    t163 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t163 & t159);
    t164 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t164 & t160);
    goto LAB49;

LAB50:    t177 = *((unsigned int *)t165);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t165) = (t177 | t178);
    t179 = (t53 + 4);
    t180 = (t133 + 4);
    t181 = *((unsigned int *)t179);
    t182 = (~(t181));
    t183 = *((unsigned int *)t53);
    t184 = (t183 & t182);
    t185 = *((unsigned int *)t180);
    t186 = (~(t185));
    t187 = *((unsigned int *)t133);
    t188 = (t187 & t186);
    t189 = (~(t184));
    t190 = (~(t188));
    t191 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t191 & t189);
    t192 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t192 & t190);
    goto LAB52;

LAB55:    t212 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t212) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t213) = 1;
    goto LAB60;

LAB59:    t220 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB60;

LAB61:    t225 = (t0 + 3064);
    t226 = (t225 + 56U);
    t227 = *((char **)t226);
    t228 = ((char*)((ng8)));
    memset(t229, 0, 8);
    t230 = (t227 + 4);
    if (*((unsigned int *)t230) != 0)
        goto LAB65;

LAB64:    t231 = (t228 + 4);
    if (*((unsigned int *)t231) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t227) > *((unsigned int *)t228))
        goto LAB66;

LAB67:    memset(t233, 0, 8);
    t234 = (t229 + 4);
    t235 = *((unsigned int *)t234);
    t236 = (~(t235));
    t237 = *((unsigned int *)t229);
    t238 = (t237 & t236);
    t239 = (t238 & 1U);
    if (t239 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t234) != 0)
        goto LAB71;

LAB72:    t242 = *((unsigned int *)t213);
    t243 = *((unsigned int *)t233);
    t244 = (t242 & t243);
    *((unsigned int *)t241) = t244;
    t245 = (t213 + 4);
    t246 = (t233 + 4);
    t247 = (t241 + 4);
    t248 = *((unsigned int *)t245);
    t249 = *((unsigned int *)t246);
    t250 = (t248 | t249);
    *((unsigned int *)t247) = t250;
    t251 = *((unsigned int *)t247);
    t252 = (t251 != 0);
    if (t252 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB63;

LAB65:    t232 = (t229 + 4);
    *((unsigned int *)t229) = 1;
    *((unsigned int *)t232) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t229) = 1;
    goto LAB67;

LAB69:    *((unsigned int *)t233) = 1;
    goto LAB72;

LAB71:    t240 = (t233 + 4);
    *((unsigned int *)t233) = 1;
    *((unsigned int *)t240) = 1;
    goto LAB72;

LAB73:    t253 = *((unsigned int *)t241);
    t254 = *((unsigned int *)t247);
    *((unsigned int *)t241) = (t253 | t254);
    t255 = (t213 + 4);
    t256 = (t233 + 4);
    t257 = *((unsigned int *)t213);
    t258 = (~(t257));
    t259 = *((unsigned int *)t255);
    t260 = (~(t259));
    t261 = *((unsigned int *)t233);
    t262 = (~(t261));
    t263 = *((unsigned int *)t256);
    t264 = (~(t263));
    t265 = (t258 & t260);
    t266 = (t262 & t264);
    t267 = (~(t265));
    t268 = (~(t266));
    t269 = *((unsigned int *)t247);
    *((unsigned int *)t247) = (t269 & t267);
    t270 = *((unsigned int *)t247);
    *((unsigned int *)t247) = (t270 & t268);
    t271 = *((unsigned int *)t241);
    *((unsigned int *)t241) = (t271 & t267);
    t272 = *((unsigned int *)t241);
    *((unsigned int *)t241) = (t272 & t268);
    goto LAB75;

LAB76:    t285 = *((unsigned int *)t273);
    t286 = *((unsigned int *)t279);
    *((unsigned int *)t273) = (t285 | t286);
    t287 = (t165 + 4);
    t288 = (t241 + 4);
    t289 = *((unsigned int *)t287);
    t290 = (~(t289));
    t291 = *((unsigned int *)t165);
    t292 = (t291 & t290);
    t293 = *((unsigned int *)t288);
    t294 = (~(t293));
    t295 = *((unsigned int *)t241);
    t296 = (t295 & t294);
    t297 = (~(t292));
    t298 = (~(t296));
    t299 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t299 & t297);
    t300 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t300 & t298);
    goto LAB78;

LAB81:    t320 = (t305 + 4);
    *((unsigned int *)t305) = 1;
    *((unsigned int *)t320) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t321) = 1;
    goto LAB86;

LAB85:    t328 = (t321 + 4);
    *((unsigned int *)t321) = 1;
    *((unsigned int *)t328) = 1;
    goto LAB86;

LAB87:    t333 = (t0 + 3064);
    t334 = (t333 + 56U);
    t335 = *((char **)t334);
    t336 = ((char*)((ng9)));
    memset(t337, 0, 8);
    t338 = (t335 + 4);
    if (*((unsigned int *)t338) != 0)
        goto LAB91;

LAB90:    t339 = (t336 + 4);
    if (*((unsigned int *)t339) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t335) < *((unsigned int *)t336))
        goto LAB92;

LAB93:    memset(t341, 0, 8);
    t342 = (t337 + 4);
    t343 = *((unsigned int *)t342);
    t344 = (~(t343));
    t345 = *((unsigned int *)t337);
    t346 = (t345 & t344);
    t347 = (t346 & 1U);
    if (t347 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t342) != 0)
        goto LAB97;

LAB98:    t350 = *((unsigned int *)t321);
    t351 = *((unsigned int *)t341);
    t352 = (t350 & t351);
    *((unsigned int *)t349) = t352;
    t353 = (t321 + 4);
    t354 = (t341 + 4);
    t355 = (t349 + 4);
    t356 = *((unsigned int *)t353);
    t357 = *((unsigned int *)t354);
    t358 = (t356 | t357);
    *((unsigned int *)t355) = t358;
    t359 = *((unsigned int *)t355);
    t360 = (t359 != 0);
    if (t360 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB89;

LAB91:    t340 = (t337 + 4);
    *((unsigned int *)t337) = 1;
    *((unsigned int *)t340) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t337) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t341) = 1;
    goto LAB98;

LAB97:    t348 = (t341 + 4);
    *((unsigned int *)t341) = 1;
    *((unsigned int *)t348) = 1;
    goto LAB98;

LAB99:    t361 = *((unsigned int *)t349);
    t362 = *((unsigned int *)t355);
    *((unsigned int *)t349) = (t361 | t362);
    t363 = (t321 + 4);
    t364 = (t341 + 4);
    t365 = *((unsigned int *)t321);
    t366 = (~(t365));
    t367 = *((unsigned int *)t363);
    t368 = (~(t367));
    t369 = *((unsigned int *)t341);
    t370 = (~(t369));
    t371 = *((unsigned int *)t364);
    t372 = (~(t371));
    t373 = (t366 & t368);
    t374 = (t370 & t372);
    t375 = (~(t373));
    t376 = (~(t374));
    t377 = *((unsigned int *)t355);
    *((unsigned int *)t355) = (t377 & t375);
    t378 = *((unsigned int *)t355);
    *((unsigned int *)t355) = (t378 & t376);
    t379 = *((unsigned int *)t349);
    *((unsigned int *)t349) = (t379 & t375);
    t380 = *((unsigned int *)t349);
    *((unsigned int *)t349) = (t380 & t376);
    goto LAB101;

LAB102:    t393 = *((unsigned int *)t381);
    t394 = *((unsigned int *)t387);
    *((unsigned int *)t381) = (t393 | t394);
    t395 = (t273 + 4);
    t396 = (t349 + 4);
    t397 = *((unsigned int *)t395);
    t398 = (~(t397));
    t399 = *((unsigned int *)t273);
    t400 = (t399 & t398);
    t401 = *((unsigned int *)t396);
    t402 = (~(t401));
    t403 = *((unsigned int *)t349);
    t404 = (t403 & t402);
    t405 = (~(t400));
    t406 = (~(t404));
    t407 = *((unsigned int *)t387);
    *((unsigned int *)t387) = (t407 & t405);
    t408 = *((unsigned int *)t387);
    *((unsigned int *)t387) = (t408 & t406);
    goto LAB104;

LAB105:    t421 = *((unsigned int *)t409);
    t422 = *((unsigned int *)t415);
    *((unsigned int *)t409) = (t421 | t422);
    t423 = (t4 + 4);
    t424 = (t381 + 4);
    t425 = *((unsigned int *)t4);
    t426 = (~(t425));
    t427 = *((unsigned int *)t423);
    t428 = (~(t427));
    t429 = *((unsigned int *)t381);
    t430 = (~(t429));
    t431 = *((unsigned int *)t424);
    t432 = (~(t431));
    t433 = (t426 & t428);
    t434 = (t430 & t432);
    t435 = (~(t433));
    t436 = (~(t434));
    t437 = *((unsigned int *)t415);
    *((unsigned int *)t415) = (t437 & t435);
    t438 = *((unsigned int *)t415);
    *((unsigned int *)t415) = (t438 & t436);
    t439 = *((unsigned int *)t409);
    *((unsigned int *)t409) = (t439 & t435);
    t440 = *((unsigned int *)t409);
    *((unsigned int *)t409) = (t440 & t436);
    goto LAB107;

}

static void Always_69_3(char *t0)
{
    char t4[8];
    char t15[8];
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
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6384);
    *((int *)t2) = 1;
    t3 = (t0 + 5552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2664U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t9, 1, t7, 3);

LAB6:    t8 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t8, 4);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(92, ng0);

LAB22:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);

LAB18:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 3224);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 4, t14, 32);
    t16 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(77, ng0);

LAB19:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3064);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 4, t7, 32);
    t8 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t8, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(82, ng0);

LAB20:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 3224);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 4, t7, 32);
    t8 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t8, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(87, ng0);

LAB21:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3064);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t6, 4, t7, 32);
    t8 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t8, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB17;

}

static void Always_103_4(char *t0)
{
    char t4[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6400);
    *((int *)t2) = 1;
    t3 = (t0 + 5800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t5 = (t0 + 2024U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(110, ng0);

LAB14:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);

LAB13:    xsi_set_current_line(106, ng0);
    t19 = ((char*)((ng14)));
    t20 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Cont_118_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 6016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3064);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 8, 8, 2U, t8, 4, t5, 4);
    t9 = (t0 + 6560);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 255U;
    t15 = t14;
    t16 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 7);
    t22 = (t0 + 6416);
    *((int *)t22) = 1;

LAB1:    return;
}


extern void work_m_14005707449860223350_0113694858_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Always_45_1,(void *)Cont_56_2,(void *)Always_69_3,(void *)Always_103_4,(void *)Cont_118_5};
	xsi_register_didat("work_m_14005707449860223350_0113694858", "isim/zork_game_test_isim_beh.exe.sim/work/m_14005707449860223350_0113694858.didat");
	xsi_register_executes(pe);
}
