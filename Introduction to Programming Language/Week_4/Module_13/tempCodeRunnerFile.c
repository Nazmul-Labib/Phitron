int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int x = space; x >= 1; x--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            //   printf("    ");
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }