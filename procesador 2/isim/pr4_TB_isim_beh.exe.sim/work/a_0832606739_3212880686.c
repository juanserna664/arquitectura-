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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Users/DAVID/Desktop/davidProcesador/pr4/procesado4/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3798478767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_43738421_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_674763465_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5223);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 5229);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 5235);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5241);
    t13 = xsi_mem_cmp(t11, t2, 6U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5247);
    t16 = xsi_mem_cmp(t14, t2, 6U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5253);
    t19 = xsi_mem_cmp(t17, t2, 6U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 5259);
    t22 = xsi_mem_cmp(t20, t2, 6U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 5265);
    t25 = xsi_mem_cmp(t23, t2, 6U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 3232);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t28 = (t0 + 1352U);
    t29 = *((char **)t28);
    t28 = (t0 + 5096U);
    t30 = (t0 + 1512U);
    t31 = *((char **)t30);
    t30 = (t0 + 5112U);
    t32 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t27, t29, t28, t31, t30);
    t33 = (t0 + 1032U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t33 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t26, t32, t27, t35);
    t36 = (t26 + 12U);
    t37 = *((unsigned int *)t36);
    t38 = (1U * t37);
    t39 = (32U != t38);
    if (t39 == 1)
        goto LAB21;

LAB22:    t40 = (t0 + 3232);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t33, 32U);
    xsi_driver_first_trans_fast_port(t40);
    goto LAB2;

LAB4:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t27, t2, t1, t5, t3);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t35 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t26, t6, t27, t35);
    t11 = (t26 + 12U);
    t37 = *((unsigned int *)t11);
    t38 = (1U * t37);
    t39 = (32U != t38);
    if (t39 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 3232);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_3798478767_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB27;

LAB28:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB10:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5112U);
    t6 = ieee_p_2592010699_sub_43738421_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t35 = (32U != t38);
    if (t35 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(32U, t38, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(32U, t38, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(32U, t38, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(32U, t38, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, t38, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t38, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(32U, t38, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(32U, t38, 0);
    goto LAB36;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/pr4_TB_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
