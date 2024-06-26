#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_strjoin_before_new_line(char *s1, char *s2);
size_t	ft_strlen(char *s);
int		ft_after_new_line(char *str);

#endif