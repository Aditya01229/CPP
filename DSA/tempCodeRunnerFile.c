void _init()
{
    if (__gmon_start__ != 0)
    {
        __gmon_start__();
    }
}

int64_t sub_1020()
{
    int64_t var_8 = 0;
    /* jump -> nullptr */
}

int64_t sub_1030()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1040()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_1020();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, nullptr, nullptr, arg3, &var_8);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void sub_10e0()
{
    return;
}

void __do_global_dtors_aux()
{
    if (data_5010 != 0)
    {
        return;
    }
    if (__cxa_finalize != 0)
    {
        __cxa_finalize(data_5008);
    }
    deregister_tm_clones();
    data_5010 = 1;
}

void frame_dummy()
{
    /* tailcall */
    return sub_10e0();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t rax_817;
    if (argc != 2)
    {
        printf("Usage: %s <FLAG>", *argv);
        rax_817 = 1;
    }
    else
    {
        char* rax_1 = argv[1];
        if (strlen(rax_1) != 0x1c)
        {
            printf("INCORRECT :(");
        }
        else
        {
            int32_t rdx_5 = (((((rax_1[5] + rax_1[0xa]) - rax_1[0xe]) - rax_1[0x10]) - rax_1[0x11]) + rax_1[8]);
            int32_t rdx_11 = ((((((rdx_5 + rax_1[4]) - rax_1[0xb]) - rax_1[0xc]) + rax_1[9]) + rax_1[2]) - rax_1[0xf]);
            int32_t rax_67;
            rax_67 = ((rax_1[6] * rax_1[0xd]) + ((rdx_11 - rax_1[7]) - rax_1[3])) == 0x2471;
            int32_t rdx_18 = (((rax_1[7] + (rax_1[0x12] * (rax_1[0xe] * rax_1[6]))) - rax_1[0x10]) - rax_1[0x13]);
            int32_t rdx_23 = (((((rdx_18 - rax_1[0xa]) + rax_1[0xb]) - (rax_1[0x15] * rax_1[0xf])) + rax_1[0x11]) + (rax_1[0x14] * rax_1[0xc]));
            int32_t rax_131;
            rax_131 = (rax_1[0xd] + ((rdx_23 - rax_1[9]) - rax_1[8])) == 0xb1aab;
            int32_t rcx_9 = ((((rax_1[0xf] + rax_1[8]) - (rax_1[7] * rax_1[0x10])) - rax_1[0x13]) + rax_1[9]);
            int32_t rcx_11 = ((rcx_9 - (rax_1[4] * rax_1[5])) - (rax_1[0xb] * ((rax_1[6] * rax_1[0xe]) * rax_1[0x12])));
            int32_t rax_195;
            rax_195 = (((rcx_11 + (rax_1[0xc] * rax_1[0xd])) + rax_1[0xa]) - rax_1[0x11]) == 0xfb747735;
            int32_t rdx_42 = (((((rax_1[4] + rax_1[0x10]) + rax_1[0xa]) - rax_1[7]) - rax_1[5]) + rax_1[0xd]);
            int32_t rdx_47 = (((rdx_42 + rax_1[9]) - rax_1[3]) + (rax_1[0xf] * ((rax_1[8] * rax_1[1]) * rax_1[0xc])));
            int32_t rax_259;
            rax_259 = ((rax_1[6] * rax_1[0xe]) + ((rdx_47 + rax_1[2]) - rax_1[0xb])) == 0x588e853;
            char var_1a_1 = rax_259;
            int32_t rcx_19 = (((((rax_1[0x11] - rax_1[0x13]) - rax_1[0xf]) - rax_1[8]) + rax_1[0x12]) + (rax_1[7] * rax_1[0xd]));
            int32_t rdx_62 = ((((rcx_19 - (rax_1[6] * (rax_1[0xc] * rax_1[0x10]))) + rax_1[0xa]) + rax_1[9]) - rax_1[0xe]);
            int32_t rax_321;
            rax_321 = (((rdx_62 - rax_1[0x14]) + rax_1[5]) - rax_1[0xb]) == 0xfff8a0ff;
            int32_t rcx_26 = (((rax_1[0x14] * rax_1[0x12]) - ((rax_1[0x19] * rax_1[0xf]) * rax_1[0xc])) - rax_1[0xd]);
            int32_t rdx_82 = ((((rcx_26 - (rax_1[0x17] * rax_1[0x11])) + (rax_1[0x10] * rax_1[0xe])) - rax_1[0x13]) + rax_1[0x1a]);
            int32_t rax_375;
            rax_375 = ((((rdx_82 - rax_1[0xb]) - rax_1[0x18]) - rax_1[0x16]) - rax_1[0x15]) == 0xfff8d542;
            int32_t rcx_32 = (((rax_1[0x12] - (rax_1[0x17] * rax_1[0x10])) - (rax_1[0xe] * rax_1[0x11])) + rax_1[9]);
            int32_t rcx_35 = (((rcx_32 + (rax_1[0xa] * rax_1[0x15])) + (rax_1[0xf] * rax_1[0x16])) - (rax_1[8] * rax_1[0x14]));
            int32_t rax_433;
            rax_433 = (rax_1[0xd] + (((rcx_35 - rax_1[0xc]) + rax_1[0x13]) + rax_1[0xb])) == 0xffffecfa;
            int32_t rdx_108 = (((((rax_1[0xd] + rax_1[0x17]) - rax_1[0xc]) + rax_1[0x15]) + rax_1[0x14]) - rax_1[0x18]);
            int32_t rdx_115 = ((((rdx_108 + rax_1[0xb]) - rax_1[0x16]) + (rax_1[0x11] * (rax_1[0xf] * rax_1[0xa]))) + (rax_1[9] * ((rax_1[0x12] * rax_1[0xe]) * rax_1[0x10])));
            int32_t rax_497;
            rax_497 = (rdx_115 - rax_1[0x13]) == 0x32c9bf5;
            int32_t rdx_122 = (((rax_1[0xe] - rax_1[0x11]) - rax_1[0x10]) + (rax_1[0xa] * (rax_1[0x18] * rax_1[0xb])));
            int32_t rcx_43 = ((((((rdx_122 + rax_1[0x13]) - rax_1[0x14]) + rax_1[0xc]) + rax_1[0x12]) - rax_1[0x17]) + rax_1[0x19]);
            int32_t rax_559;
            rax_559 = (rax_1[0xd] + ((rcx_43 + (rax_1[0xf] * rax_1[0x16])) + rax_1[0x15])) == 0x9dd6c;
            int32_t rdx_138 = ((((rax_1[3] - rax_1[0x12]) - (rax_1[5] * rax_1[4])) - rax_1[0xf]) + rax_1[0x10]);
            int32_t rcx_49 = ((((rdx_138 + rax_1[6]) - rax_1[0xd]) + (rax_1[7] * rax_1[0xa])) - (rax_1[0xe] * rax_1[8]));
            int32_t rax_621;
            rax_621 = (((rcx_49 + rax_1[0xb]) - (rax_1[0xc] * rax_1[0x11])) - rax_1[9]) == 0xffffab4e;
            int32_t rcx_56 = (((rax_1[1] + rax_1[3]) - (rax_1[0xe] * (rax_1[0xb] * rax_1[7]))) - rax_1[8]);
            int32_t rdx_154 = (((((rcx_56 + (*rax_1 * rax_1[0xa])) + rax_1[6]) - rax_1[4]) - rax_1[5]) + rax_1[0xc]);
            int32_t rax_684;
            rax_684 = ((rdx_154 - rax_1[9]) - ((rax_1[2] * rax_1[0xf]) * rax_1[0xd])) == 0xffdcb604;
            char var_13_1 = rax_684;
            int32_t rdx_163 = (((((rax_1[0x12] + rax_1[0x13]) - rax_1[0x11]) + rax_1[0x15]) + rax_1[0x17]) - rax_1[0x10]);
            int32_t rdx_170 = ((((((rdx_163 - rax_1[0xe]) - rax_1[0x14]) + rax_1[0x19]) + rax_1[0xc]) + rax_1[0x18]) + (rax_1[0xf] * (rax_1[0x16] * rax_1[0x1b])));
            int32_t rax_748;
            rax_748 = (rax_1[0x1a] + (rdx_170 + rax_1[0xd])) == 0xdf55d;
            int32_t rcx_63 = ((((rax_1[7] * (rax_1[0x12] * rax_1[0xd])) - rax_1[0xe]) - rax_1[0xf]) - (rax_1[0xa] * (rax_1[0x13] * rax_1[0x15])));
            int32_t rcx_65 = (((rcx_63 - (rax_1[8] * rax_1[0xc])) + (rax_1[9] * (rax_1[0x11] * rax_1[0x16]))) + rax_1[0xb]);
            int32_t rax_810;
            rax_810 = ((rax_1[0x10] * rax_1[0x14]) + rcx_65) == 0x1183e2;
            if (var_1a_1 == 0)
            {
            label_2017:
                printf("INCORRECT :(");
            }
            else
            {
                if (var_1a_1 == 0)
                {
                    goto label_2017;
                }
                if (rax_67 == 0)
                {
                    goto label_2017;
                }
                if (rax_621 == 0)
                {
                    goto label_2017;
                }
                if (rax_195 == 0)
                {
                    goto label_2017;
                }
                if (rax_321 == 0)
                {
                    goto label_2017;
                }
                if (rax_131 == 0)
                {
                    goto label_2017;
                }
                if (rax_810 == 0)
                {
                    goto label_2017;
                }
                if (rax_433 == 0)
                {
                    goto label_2017;
                }
                if (rax_497 == 0)
                {
                    goto label_2017;
                }
                if (rax_559 == 0)
                {
                    goto label_2017;
                }
                if (rax_375 == 0)
                {
                    goto label_2017;
                }
                if (rax_748 == 0)
                {
                    goto label_2017;
                }
                printf("CORRECT :)");
            }
        }
        rax_817 = 0;
    }
    return rax_817;
}

int64_t _fini()
{
    return;
}

