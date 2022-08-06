void    ft_rev_int_tab(int *tab, int size)
{
    int dig = 0;
    int temp[size];

    while (dig <= size)
    {
        temp[dig] = tab[size - dig];
        // temp = tab[dig];
        // tab[dig] = tab[size];
        // tab[size] = temp;
        // dig++;
        // size--;
    }
    dig = 0;
    while (dig <= size)
    {
        tab[dig] = temp[dig];
        dig++;
    }
}

#include <stdio.h>

int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}