#include "libft.h"

int main(int argc, char **argv)
{
  char *s1;
  char *s2;
  char *s3;
  char *s4;

  argc = argc;
  s1 = (char *)argv[0];
  s2 = (char *)argv[1];
  s3 = (char *)argv[0];
  s4 = (char *)argv[1];

  strlcat(s1, s2);
  ft_strlcat(s3, s4);
  if (ft_strcmp(s1, s3) == 0)
    ft_putstr("ça marche !");
  else
    ft_putstr("t'es qu'une merde ! ça marche pas !");
  return (0);
}
