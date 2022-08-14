void	put(char *str);


void	arg_parsing(int argc, char **arg)
{
	int	i;

	if (argc != 2)
		put("Error: incorrect number of arguments.\n")
		return (0);
	i = 0;
	while (arg[1][i])
	{
		if (arg[1][i] >= '1' || arg[1][i] <= (MAP_SIZE + '0'))
		{

		}
		else
		{
			put("Error: please input numbers no larger than the map size.\n")
			return (0);
		}
		if (arg[1][++i] == ' ')
			++i;
		else
		{
			put("Error: only space is accepted to separate numbers.\n")
			return (0);
		}
		if (i > (MAP_SIZE * MAP_SIZE * 2 - 1))
		{
			put("Error: too many numbers in the input.\n")
		}
	}

	return ();
}