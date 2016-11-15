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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Alejo/Desktop/procesador6-copia/procesador6 - copia/SEU30.vhd";



static void work_a_0542593727_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1584);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 30U);
    xsi_driver_first_trans_delta(t1, 2U, 30U, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t7 = (29 - 29);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)3, 2U);
    t3 = (t0 + 1584);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t13 = *((char **)t6);
    memcpy(t13, t1, 2U);
    xsi_driver_first_trans_delta(t3, 0U, 2U, 0LL);

LAB3:    t1 = (t0 + 1540);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t3 = xsi_get_transient_memory(2U);
    memset(t3, 0, 2U);
    t4 = t3;
    memset(t4, (unsigned char)2, 2U);
    t5 = (t0 + 1584);
    t6 = (t5 + 32U);
    t13 = *((char **)t6);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    goto LAB3;

}


extern void work_a_0542593727_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0542593727_3212880686_p_0};
	xsi_register_didat("work_a_0542593727_3212880686", "isim/pros6_Tb_isim_beh.exe.sim/work/a_0542593727_3212880686.didat");
	xsi_register_executes(pe);
}
