{
    cin>>x;
    while (x % 2 == 0)
    {
        m1[2]++;
        x = x/2;
    }

    for (int i = 3; i*i <= x; i = i + 2)
    {
        while (x % i == 0)
        {
           m1[i]++;
            x = x/i;
        }
    }
    if (x>2)
    m1[x]++;
}