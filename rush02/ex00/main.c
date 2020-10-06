/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfjeld <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 19:37:06 by rfjeld            #+#    #+#             */
/*   Updated: 2020/09/27 21:04:07 by rfjeld           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int count;
	int i;


	if (argc < 2 || argc > 3)
	{
		// if the value is not a valid positive integer, return error followed by a new line
		// if it is not 2 or three arguments, error and new line
		write (1, "Error\n", 6);
	}
	if (argc == 2) // if there is only one argument other than rush-02
	{
		//we need to create a similar function to atoi to trim spaces before and after the input number
		count = check_inputs(argv[i]); //return the length of our input
		if (!(check_input(argv[i]))
			write (1, "Error\n", 6);
	}

	if (argc == 3)
	{
		//first argument the new reference dictionary (call a function to make it an index)
		//the second argument needs to be converted using the index of the new dictionary
	}
	//we already have the length of the number from the input, we need to use the index of that number
	//for example when we have 4321, we have an index of three
	//we take the value of 4 from index 0 
	//use the count length to find we are in the thousand spot
	//print four from the dictionary
	//then we print thousand from the dictionary
	//then we go to the next number in the index
	//we see that it is in the third/hundreth spot 
	//we take the value three and print that from the dictionary
	//then we print the hundreth... etc.....

}
