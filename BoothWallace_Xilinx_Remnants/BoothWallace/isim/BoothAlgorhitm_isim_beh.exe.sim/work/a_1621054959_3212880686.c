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
static const char *ng0 = "/home/ise/XilinxCode/BoothWallace/BoothAlgorhitm.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1621054959_3212880686_p_0(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 23522);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = (8 - 7);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 7;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (7 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 7);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (8U + 8U);
    t19 = (16U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 14952);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 16U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 14520);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t15, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = (t0 + 2312U);
    t20 = *((char **)t19);
    t21 = (15 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t24 = (t0 + 15016);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 8U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 14536);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t11 = (8 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 15016);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = (t0 + 2152U);
    t20 = *((char **)t19);
    t21 = (15 - 15);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t24 = (t0 + 15080);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 16U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 14552);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t11 = (15 - 15);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 15080);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = (t0 + 2152U);
    t20 = *((char **)t19);
    t21 = (15 - 15);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t24 = (t0 + 15144);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 16U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 14568);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t11 = (15 - 15);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 15144);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (0 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = xsi_get_transient_memory(16U);
    memset(t19, 0, 16U);
    t20 = t19;
    memset(t20, (unsigned char)2, 16U);
    t21 = (t0 + 15208);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 16U);
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 14584);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t11 = (15 - 15);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 15208);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_5(char *t0)
{
    char t24[16];
    char t26[16];
    char t59[16];
    char t61[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned char t51;
    unsigned char t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned char t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (1 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t37 = (t0 + 1512U);
    t38 = *((char **)t37);
    t39 = (1 - 7);
    t40 = (t39 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t37 = (t38 + t42);
    t43 = *((unsigned char *)t37);
    t44 = (t43 == (unsigned char)3);
    if (t44 == 1)
        goto LAB12;

LAB13:    t36 = (unsigned char)0;

LAB14:    if (t36 != 0)
        goto LAB10;

LAB11:
LAB17:    t71 = xsi_get_transient_memory(16U);
    memset(t71, 0, 16U);
    t72 = t71;
    memset(t72, (unsigned char)2, 16U);
    t73 = (t0 + 15272);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memcpy(t77, t71, 16U);
    xsi_driver_first_trans_fast(t73);

LAB2:    t78 = (t0 + 14600);
    *((int *)t78) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 14);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t25 = ((IEEE_P_2592010699) + 4000);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 14;
    t28 = (t27 + 4U);
    *((int *)t28) = 0;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 14);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t18, t26, (char)99, (unsigned char)2, (char)101);
    t30 = (15U + 1U);
    t31 = (16U != t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    t28 = (t0 + 15272);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t23, 16U);
    xsi_driver_first_trans_fast(t28);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (0 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t30, 0);
    goto LAB9;

LAB10:    t53 = (t0 + 1832U);
    t54 = *((char **)t53);
    t55 = (15 - 14);
    t56 = (t55 * 1U);
    t57 = (0 + t56);
    t53 = (t54 + t57);
    t60 = ((IEEE_P_2592010699) + 4000);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 14;
    t63 = (t62 + 4U);
    *((int *)t63) = 0;
    t63 = (t62 + 8U);
    *((int *)t63) = -1;
    t64 = (0 - 14);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t53, t61, (char)99, (unsigned char)2, (char)101);
    t65 = (15U + 1U);
    t66 = (16U != t65);
    if (t66 == 1)
        goto LAB15;

LAB16:    t63 = (t0 + 15272);
    t67 = (t63 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memcpy(t70, t58, 16U);
    xsi_driver_first_trans_fast(t63);
    goto LAB2;

LAB12:    t45 = (t0 + 1512U);
    t46 = *((char **)t45);
    t47 = (0 - 7);
    t48 = (t47 * -1);
    t49 = (1U * t48);
    t50 = (0 + t49);
    t45 = (t46 + t50);
    t51 = *((unsigned char *)t45);
    t52 = (t51 == (unsigned char)2);
    t36 = t52;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t65, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_6(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (2 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (2 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15336);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14616);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 13);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23530);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 13;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 13);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 1;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (1 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (14U + 2U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15336);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (1 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 13);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23532);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 13;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 13);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 1;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (1 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (14U + 2U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15336);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (1 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_7(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (3 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (3 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15400);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14632);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 12);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23534);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 12;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 12);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 2;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (2 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (13U + 3U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15400);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (2 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 12);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23537);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 12;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 12);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 2;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (2 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (13U + 3U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15400);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (2 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_8(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (4 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (4 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15464);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14648);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 11);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23540);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 11;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 11);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 3;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (3 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (12U + 4U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15464);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (3 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 11);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23544);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 11;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 11);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 3;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (3 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (12U + 4U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15464);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (3 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_9(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (5 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (5 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15528);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14664);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 10);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23548);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 10;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 10);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 4;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (4 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (11U + 5U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15528);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (4 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 10);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23553);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 10;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 10);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 4;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (4 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (11U + 5U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15528);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (4 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_10(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (6 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (6 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15592);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14680);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 9);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23558);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 9;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 9);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 5;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (5 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (10U + 6U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15592);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (5 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 9);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23564);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 9;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 9);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 5;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (5 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (10U + 6U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15592);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (5 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_11(char *t0)
{
    char t26[16];
    char t28[16];
    char t33[16];
    char t66[16];
    char t68[16];
    char t73[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    char *t74;
    int t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (7 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 1512U);
    t43 = *((char **)t42);
    t44 = (7 - 7);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t49 = (t48 == (unsigned char)3);
    if (t49 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 != 0)
        goto LAB10;

LAB11:
LAB17:    t81 = xsi_get_transient_memory(16U);
    memset(t81, 0, 16U);
    t82 = t81;
    memset(t82, (unsigned char)2, 16U);
    t83 = (t0 + 15656);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 16U);
    xsi_driver_first_trans_fast(t83);

LAB2:    t88 = (t0 + 14696);
    *((int *)t88) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (15 - 8);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t23 = (t0 + 23570);
    t27 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 8;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 8);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 6;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (6 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t32 = (9U + 7U);
    t36 = (16U != t32);
    if (t36 == 1)
        goto LAB8;

LAB9:    t34 = (t0 + 15656);
    t37 = (t34 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t25, 16U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB5:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (6 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)3);
    t1 = t17;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t32, 0);
    goto LAB9;

LAB10:    t58 = (t0 + 1832U);
    t59 = *((char **)t58);
    t60 = (15 - 8);
    t61 = (t60 * 1U);
    t62 = (0 + t61);
    t58 = (t59 + t62);
    t63 = (t0 + 23577);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 8;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (0 - 8);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t70 = (t73 + 0U);
    t74 = (t70 + 0U);
    *((int *)t74) = 0;
    t74 = (t70 + 4U);
    *((int *)t74) = 6;
    t74 = (t70 + 8U);
    *((int *)t74) = 1;
    t75 = (6 - 0);
    t72 = (t75 * 1);
    t72 = (t72 + 1);
    t74 = (t70 + 12U);
    *((unsigned int *)t74) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t58, t68, (char)97, t63, t73, (char)101);
    t72 = (9U + 7U);
    t76 = (16U != t72);
    if (t76 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 15656);
    t77 = (t74 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t65, 16U);
    xsi_driver_first_trans_fast(t74);
    goto LAB2;

LAB12:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t52 = (6 - 7);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = (t56 == (unsigned char)2);
    t41 = t57;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t72, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_12(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB7:    t32 = xsi_get_transient_memory(16U);
    memset(t32, 0, 16U);
    t33 = t32;
    memset(t33, (unsigned char)2, 16U);
    t34 = (t0 + 15720);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t32, 16U);
    xsi_driver_first_trans_fast(t34);

LAB2:    t39 = (t0 + 14712);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t11 = (15 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 23584);
    t18 = ((IEEE_P_2592010699) + 4000);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 7;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - 7);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 0;
    t25 = (t21 + 4U);
    *((int *)t25) = 7;
    t25 = (t21 + 8U);
    *((int *)t25) = 1;
    t26 = (7 - 0);
    t23 = (t26 * 1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t14, t24, (char)101);
    t23 = (8U + 8U);
    t27 = (16U != t23);
    if (t27 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 15720);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t16, 16U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t23, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_13(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(122, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 14;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 14);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t1, t9, (char)99, (unsigned char)2, (char)101);
    t13 = (15U + 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 15784);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 14728);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_14(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(130, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 14;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 14);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t1, t9, (char)99, (unsigned char)2, (char)101);
    t13 = (15U + 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 15848);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 14744);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_15(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 14;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 14);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t1, t9, (char)99, (unsigned char)2, (char)101);
    t13 = (15U + 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 15912);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 14760);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_16(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(146, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 14;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 14);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t1, t9, (char)99, (unsigned char)2, (char)101);
    t13 = (15U + 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 15976);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 14776);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_17(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(154, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 14;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 14);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t1, t9, (char)99, (unsigned char)2, (char)101);
    t13 = (15U + 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 16040);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 14792);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_18(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(166, ng0);

LAB3:    t2 = (t0 + 6792U);
    t3 = *((char **)t2);
    t2 = (t0 + 22800U);
    t4 = (t0 + 6632U);
    t5 = *((char **)t4);
    t4 = (t0 + 22800U);
    t6 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (16U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 16104);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 14808);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t9, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    t1 = (t0 + 16168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 1U, 16U, 0LL);

LAB2:    t7 = (t0 + 14824);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_20(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(169, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t10 = (8 - 8);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 16232);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_delta(t16, 0U, 1, 0LL);

LAB2:    t21 = (t0 + 14840);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1621054959_3212880686_p_21(char *t0)
{
    char t1[16];
    char t7[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = (15 - 15);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 15);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t1, t2, t7);
    t12 = (t1 + 12U);
    t11 = *((unsigned int *)t12);
    t13 = (1U * t11);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 16296);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 16U);
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 14856);
    *((int *)t20) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t13, 0);
    goto LAB6;

}

static void work_a_1621054959_3212880686_p_22(char *t0)
{
    char t1[16];
    char t10[16];
    char t12[16];
    char t17[16];
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t18;
    int t19;
    char *t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t2 = (t0 + 23592);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = (8 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t17 + 0U);
    t18 = (t14 + 0U);
    *((int *)t18) = 7;
    t18 = (t14 + 4U);
    *((int *)t18) = 0;
    t18 = (t14 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 7);
    t16 = (t19 * -1);
    t16 = (t16 + 1);
    t18 = (t14 + 12U);
    *((unsigned int *)t18) = t16;
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t4, t17, (char)101);
    t18 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t1, t9, t10);
    t20 = (t1 + 12U);
    t16 = *((unsigned int *)t20);
    t21 = (1U * t16);
    t22 = (16U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 16360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 16U);
    xsi_driver_first_trans_fast(t23);

LAB2:    t28 = (t0 + 14872);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t21, 0);
    goto LAB6;

}


extern void work_a_1621054959_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1621054959_3212880686_p_0,(void *)work_a_1621054959_3212880686_p_1,(void *)work_a_1621054959_3212880686_p_2,(void *)work_a_1621054959_3212880686_p_3,(void *)work_a_1621054959_3212880686_p_4,(void *)work_a_1621054959_3212880686_p_5,(void *)work_a_1621054959_3212880686_p_6,(void *)work_a_1621054959_3212880686_p_7,(void *)work_a_1621054959_3212880686_p_8,(void *)work_a_1621054959_3212880686_p_9,(void *)work_a_1621054959_3212880686_p_10,(void *)work_a_1621054959_3212880686_p_11,(void *)work_a_1621054959_3212880686_p_12,(void *)work_a_1621054959_3212880686_p_13,(void *)work_a_1621054959_3212880686_p_14,(void *)work_a_1621054959_3212880686_p_15,(void *)work_a_1621054959_3212880686_p_16,(void *)work_a_1621054959_3212880686_p_17,(void *)work_a_1621054959_3212880686_p_18,(void *)work_a_1621054959_3212880686_p_19,(void *)work_a_1621054959_3212880686_p_20,(void *)work_a_1621054959_3212880686_p_21,(void *)work_a_1621054959_3212880686_p_22};
	xsi_register_didat("work_a_1621054959_3212880686", "isim/BoothAlgorhitm_isim_beh.exe.sim/work/a_1621054959_3212880686.didat");
	xsi_register_executes(pe);
}
