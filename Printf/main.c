/*int main()
{
	ft_printf("\n------> Testing len without arguments <------\n\n");
	int teste = printf("original: ");
	printf("%d\n", teste);
	int teste2 = ft_printf("mine: ");
	printf("%d\n\n", teste2);

	ft_printf("Testing without words\n");
	char teste3 = 0;
	teste = printf("%c", teste3);
	printf("%d\n", teste);
	teste2 = ft_printf("");
	printf("%d\n\n", teste2);

	ft_printf("Testing spaces\n");
	teste = printf("\t\n\v\f\r");
	printf("%d\n", teste);
	teste2 = ft_printf("\t\n\v\f\r");
	printf("%d\n\n", teste2);

	ft_printf("Testing with NULL\n");
	teste = printf(NULL);
	printf("%d\n", teste);
	teste2 = ft_printf(NULL);
	ft_printf("%d\n\n", teste2);

	ft_printf("------> Testing with arguments <------\n\n");
	ft_printf("--> Testing double percent <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
	teste = ft_printf("mine --->%%");
	printf("%d\n", teste);
	teste2 = printf("original --->%%");
	printf("%d\n\n", teste2);

	teste = ft_printf("mine --->%%%%");
	printf("%d\n", teste);
	teste2 = printf("original --->%%%%");
	printf("%d\n\n", teste2);

	teste = ft_printf("mine --->%%%%%%%%%%");
	printf("%d\n", teste);
	teste2 = printf("original --->%%%%%%%%%%");
	printf("%d\n\n", teste2);

	ft_printf("--> Testing %%c <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
	teste = ft_printf("mine:  %c  ", 'a');
	printf("words: %d\n", teste);
	teste2 = printf("original:  %c  ", 'a');
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %c%c%c%c%c  ", 'h', 'e', 'l', 'l', 'o');
	printf("words: %d\n", teste);
	teste2 = printf("original:  %c%c%c%c%c  ", 'h', 'e', 'l', 'l', 'o');
	printf("words: %d\n\n", teste2);

	char word = NULL;
	teste = ft_printf("mine: %c", word);
	printf("%d\n", teste);
	teste2 = printf("original: %c", word);
	printf("%d\n\n", teste2);

	teste = ft_printf("mine: %c", 48);
	printf("%d\n", teste);
	teste2 = printf("original: %c", 48);
	printf("%d\n\n", teste2);

	ft_printf("--> Testing %%d <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
	teste = ft_printf("mine:  %d  ", 123);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %d  ", 123);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %d  ", -123);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %d  ", -123);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %d  ", 2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %d  ", 2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %d  ", -2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %d  ", -2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %d  ", 0);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %d  ", 0);
	printf("words: %d\n\n", teste2);

	ft_printf("--> Testing %%i <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
	teste = ft_printf("mine:  %i  ", 123);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %i  ", 123);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %i  ", -123);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %i  ", -123);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %i  ", 2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %i  ", 2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %i  ", -2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %i  ", -2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %i  ", 0);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %i  ", 0);
	printf("words: %d\n\n", teste2);

	ft_printf("--> Testing %%u <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
	teste = ft_printf("mine:  %u  ", 123);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %u  ", 123);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %u  ", 2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %u  ", 2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %u  ", 1);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %u  ", 1);
	printf("words: %d\n\n", teste2);

	ft_printf("--> Testing %%x <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");

	teste = ft_printf("mine:  %x  ", 100);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %x  ", 100);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %x  ", 2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %x  ", 2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %x  ", 2);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %x  ", 2);
	printf("words: %d\n\n", teste2);

	ft_printf("--> Testing %%X <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");

	teste = ft_printf("mine:  %X  ", 100);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %X  ", 100);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %X  ", 2147483647);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %X  ", 2147483647);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %X  ", 2);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %X  ", 2);
	printf("words: %d\n\n", teste2);

	ft_printf("--> Testing %%p <--\n");
	ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");

	char *str1 = NULL;
	char *str2 = "hello";
	char *str3 = str2;

	teste = ft_printf("mine:  %p  ", str1);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %p  ", str1);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %p  ", &str2);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %p  ", &str2);
	printf("words: %d\n\n", teste2);

	teste = ft_printf("mine:  %p  ", str3);
	printf("words: %d\n", teste);
	teste2 = printf("original:  %p  ", str3);
	printf("words: %d\n\n", teste2);
}    */