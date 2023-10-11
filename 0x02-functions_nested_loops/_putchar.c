int _putchar(char what_to_print)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
