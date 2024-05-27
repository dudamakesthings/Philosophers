#include "philo.h"

static long int	ft_atol(const char *str)
{
	int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result);
}

static bool	number_validation(char **argv)
{
	int	i;

	i = 1;
	if (ft_atol(argv[1]) < 1)
		return (false);
	while(argv[i])
	{
		if(ft_atol(argv[i]) < 0 || ft_atol(argv[i]) > INT_MAX)
			return (false);
		i++;
	}
	return (true);
}

static bool	digit_checker(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if(!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	input_checker(int argc, char **argv)
{
	if (argc < 5 || argc > 6)
		return (false);
	if (digit_checker(argv) == false)
		return (false);
	if(number_validation(argv) == false)
		return (false);
	return (true);
}
