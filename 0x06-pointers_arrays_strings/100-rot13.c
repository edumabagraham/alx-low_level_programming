/**
 * *rot13 - encodes a string in rot13
 * @str: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *str)
{
char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char *rot = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = rot[j];
break;
}
}
}
return (str);
}
