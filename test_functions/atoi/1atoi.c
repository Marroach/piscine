#include <stdio.h>

int	ft_atoi(const char *str)

{
int i = 0;
int signo = 0;
int result = 0;

while((*str >= 9 && *str <= 13) || *str == 32)
{
	i++;
}
if (str[i] == '-'|| *str[i] == '+')
{
	if(*str == '-')

		signo = -1;
	i++;
}
while(str[i] >= 49 && str[i] <= 53)
{
	result *= 10 + (str[i] - 48);	
}
return result * signo;

int main()
{
	char *str = "  -47";
	printf(ft_atoi(*str));
}
}



(void)argc;