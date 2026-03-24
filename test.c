#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
    int	ft_ret;
    int	std_ret;

    printf("=== TEST 1: NULL string (%%s) ===\n");
    ft_ret = ft_printf("FT : %s\n", (char *)NULL);
    std_ret = printf("STD: %s\n", (char *)NULL);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== TEST 2: NULL pointer (%%p) ===\n");
    ft_ret = ft_printf("FT : %p\n", NULL);
    std_ret = printf("STD: %p\n", NULL);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== TEST 3: Zero in HEX (%%x и %%X) ===\n");
    ft_ret = ft_printf("FT : %x %X\n", 0, 0);
    std_ret = printf("STD: %x %X\n", 0, 0);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== TEST 4: prcent in line (%%%%) ===\n");
    ft_ret = ft_printf("FT : %%%%%%\n");
    std_ret = printf("STD: %%%%%%\n");
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== TEST 5: multi combo ===\n");
    ft_ret = ft_printf("FT : %c %s %p %d %i %u %x %X %%\n", 'A', "42", (void *)0x42, 42, -42, 42, 42, 42);
    std_ret = printf("STD: %c %s %p %d %i %u %x %X %%\n", 'A', "42", (void *)0x42, 42, -42, 42, 42, 42);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    return (0);
}