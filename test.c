#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
    int	ft_ret;
    int	std_ret;

    printf("=== ТЕСТ 1: NULL строка (%%s) ===\n");
    // Оригинальный printf на Linux печатает "(null)", проверим твой!
    ft_ret = ft_printf("FT : %s\n", (char *)NULL);
    std_ret = printf("STD: %s\n", (char *)NULL);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== ТЕСТ 2: NULL указатель (%%p) ===\n");
    // Должен напечатать "(nil)" на Linux
    ft_ret = ft_printf("FT : %p\n", NULL);
    std_ret = printf("STD: %p\n", NULL);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== ТЕСТ 3: Ноль в HEX (%%x и %%X) ===\n");
    // Должен вывести просто "0", а не пустую строку
    ft_ret = ft_printf("FT : %x %X\n", 0, 0);
    std_ret = printf("STD: %x %X\n", 0, 0);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== ТЕСТ 4: Подряд идущие проценты (%%%%) ===\n");
    ft_ret = ft_printf("FT : %%%%%%\n"); // Ожидаем печать трех знаков %
    std_ret = printf("STD: %%%%%%\n");
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    printf("=== ТЕСТ 5: Мульти-комбо ===\n");
    ft_ret = ft_printf("FT : %c %s %p %d %i %u %x %X %%\n", 'A', "42", (void *)0x42, 42, -42, 42, 42, 42);
    std_ret = printf("STD: %c %s %p %d %i %u %x %X %%\n", 'A', "42", (void *)0x42, 42, -42, 42, 42, 42);
    printf("Return -> FT: %d | STD: %d\n\n", ft_ret, std_ret);

    return (0);
}
