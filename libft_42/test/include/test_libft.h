#ifndef TEST_LIBFT_H
#define TEST_LIBFT_H
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RESET   "\033[0m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#include <stdio.h>

typedef int (*t_test_func) (void);
typedef struct s_test_libft
{
    const char *name;
    t_test_func func;
}t_test_libft;

typedef struct s_test_group
{
    const char *group_name;
    t_test_libft *tests;
    int count;
}t_test_group;

void run_group(t_test_group *group, int *total, int *passed);
void    run_test(const char *name, int (*test)(void), int *total_test, int *passed_test);

int    test_basic_memset(void);
int test_length_zero_memset(void);
int test_partial_fill_memset(void);
int test_value_255(void);
int test_value_superior_255(void);
int test_minus_one(void);

#endif 