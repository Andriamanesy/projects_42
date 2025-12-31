#include <stdio.h>
#include "./include/test_libft.h"

extern t_test_group g_memset_group;

int main(void)
{
    int total = 0;
    int passed = 0;

    run_group(&g_memset_group, &total, &passed);

    printf("\n============================\n");
    if (passed == total)
        printf(COLOR_GREEN "ALL TESTS PASSED ");
    else
        printf(COLOR_RED   "SOME TESTS FAILED ");
    printf("(%d/%d)\n" COLOR_RESET, passed, total);
    printf("============================\n");

    return (passed == total ? 0 : 1);
}
