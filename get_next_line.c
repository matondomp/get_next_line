#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	line[BUFFER_SIZE + 1];
	char		*next_line;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	next_line = ft_strjoin_before_new_line(0, line);
	if (ft_after_new_line(line) > 0)
		return (next_line);
	i = read(fd, line, BUFFER_SIZE);
	if (i < 0)
	{
		free(next_line);
		return (NULL);
	}
	while (i > 0)
	{
		next_line = ft_strjoin_before_new_line(next_line, line);
		if (ft_after_new_line(line) > 0)
			break ;
		i = read(fd, line, BUFFER_SIZE);
	}
	return (next_line);
}
