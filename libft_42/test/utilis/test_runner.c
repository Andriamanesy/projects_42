#include "../include/test_libft.h"

void run_group(t_test_group *group, int *total, int *passed)
{
    int i;
    int group_passed = 0;

    printf(COLOR_BLUE "\n▶ %s\n" COLOR_RESET, group->group_name);

    for (i = 0; i < group->count; i++)
    {
        (*total)++;
        if (group->tests[i].func())
        {
            (*passed)++;
            group_passed++;
            printf(COLOR_GREEN "  [OK]   " COLOR_RESET "%s\n", group->tests[i].name);
        }
        else
            printf(COLOR_RED   "  [FAIL] " COLOR_RESET "%s\n", group->tests[i].name);
    }

    printf(COLOR_YELLOW "  → %d/%d passed\n" COLOR_RESET,
           group_passed, group->count);
}

void    run_test(const char *name, int (*test)(void), int *total_test, int *passed_test)
{
    (*total_test)++;
    if(test())
    {
        printf(COLOR_GREEN "[OK] %s" COLOR_RESET "\n", name);
        (*passed_test)++;
    }
    else
        printf(COLOR_RED "[FAIL] %s" COLOR_RESET "\n", name);   
}