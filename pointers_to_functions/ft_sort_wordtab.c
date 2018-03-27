/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:03:37 by alyle             #+#    #+#             */
/*   Updated: 2018/03/26 21:19:05 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] == '\0')
		return (s2[i] * -1);
	return (s1[i]);
}

void	ft_bubblesort(int argc, char **argv)
{
	int		j;
	char	*tmp;

	j = 0;
	while (argc > 0)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		argc--;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (ft_bubblesort(i, tab));
}
