/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/17 17:00:28 by edribeir      #+#    #+#                 */
/*   Updated: 2024/05/27 14:03:40 by eduarda       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char **argv)
{
	if (input_checker(argc, argv) == false)
	{
		printf("\033[33m Correct Input ONLY NUMBERS\033[0m\n");
		printf("\t 🔢 PHILOS ⌛ DIE ⌛ EAT ⌛ SLEEP (🍴 TIMES MUST EAT)\n");
		printf("\n\t./philo 5 410 100 100\t OR \t./philo 5 410 100 100 10\n\n");
		return (false);
	}
}
