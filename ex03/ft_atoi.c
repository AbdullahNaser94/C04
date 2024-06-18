//#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char* str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}


int	main()
{
	char str1[] = " ---+--+1234ab567";

	printf("String: '%s', atoi: %d\n", str1, ft_atoi(str1));

	return 0;
}