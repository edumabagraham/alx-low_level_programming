void segf(void)
{
char *str;

str = "Holberton";
str[0] = 's';
}

int main(void)
{
segf();
return (0);
}