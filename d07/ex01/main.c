#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *t;

	t = ft_range(1, 24);
	if(t)
	{
		printf("%d", t[0]);
	}
	return (0);
}


