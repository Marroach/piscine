int ft_atoi(const char *str) {
    int i = 0;
    int sign = 1;
    int result = 0;

    // 1.- Skip whitespace
    while (( *str >= 9 && *str <= 13) || *str == 32 ) 
	{
        i++;
    }

    // 2.- Check for sign
    if (str[i] == '-' || str[i] == '+') 
	{
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // 3.- Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9')
	{
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}


#include <stdio.h>

int main() {
    const char *str = "   -1234";
    int num = ft_atoi(str);
    printf("The integer value is: %d\n", num);
    return 0;
}
