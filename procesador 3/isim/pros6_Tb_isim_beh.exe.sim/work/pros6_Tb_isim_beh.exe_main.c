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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *STD_TEXTIO;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_1242562249_init();
    work_a_1707665227_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_0992986323_3212880686_init();
    work_a_1991350011_3212880686_init();
    work_a_2166523021_2771330201_init();
    work_a_1003314168_3212880686_init();
    work_a_0542593727_3212880686_init();
    work_a_2096391741_3212880686_init();
    work_a_1074805832_3212880686_init();
    work_a_3945067802_3212880686_init();
    work_a_3961274036_2877823425_init();
    work_a_3030031889_2266223261_init();
    work_a_1738573624_3358627209_init();
    work_a_1887654889_1721358225_init();
    work_a_3373374682_3212880686_init();
    work_a_3261551314_3158175199_init();
    work_a_0295498852_3212880686_init();
    work_a_2266231247_3212880686_init();
    work_a_1155848295_3212880686_init();
    work_a_0433921729_2372691052_init();


    xsi_register_tops("work_a_0433921729_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
