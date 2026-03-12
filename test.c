#include "ft_printf.h"
#include <stdio.h> // Обязательно для оригинального printf

int main(void)
{
    int ft_len;
    int std_len;
    int num = 255;

    printf("=== ТЕСТ 1: Строки и символы ===\n");
    ft_len = ft_printf("FT : Привет, %s! Символ: %c\n", "Школа 42", 'X');
    std_len = printf("STD: Привет, %s! Символ: %c\n", "Школа 42", 'X');
    printf("Длина -> FT: %d | STD: %d\n\n", ft_len, std_len);

    printf("=== ТЕСТ 2: Числа ===\n");
    ft_len = ft_printf("FT : int: %d, Отрицательное: %i, Беззнаковое: %u\n", 42, -42, 4294967295U);
    std_len = printf("STD: int: %d, Отрицательное: %i, Беззнаковое: %u\n", 42, -42, 4294967295U);
    printf("Длина -> FT: %d | STD: %d\n\n", ft_len, std_len);

    printf("=== ТЕСТ 3: Шестнадцатеричные и Указатели ===\n");
    ft_len = ft_printf("FT : hex: %x, HEX: %X, Указатель: %p\n", num, num, &num);
    std_len = printf("STD: hex: %x, HEX: %X, Указатель: %p\n", num, num, &num);
    printf("Длина -> FT: %d | STD: %d\n\n", ft_len, std_len);

    printf("=== ТЕСТ 4: Процент ===\n");
    ft_len = ft_printf("FT : 100%%\n");
    std_len = printf("STD: 100%%\n");
    printf("Длина -> FT: %d | STD: %d\n\n", ft_len, std_len);

    return (0);
}
