void countbits(int n)
{
    int bitcount;
    for(int i=0; i <=15; i++)
    {
        if( (n&(1<<i)) != 0)
        {
            bitcount++;

        }
    }
    cout <<bitcount <<endl;
}

void checkEven(int n)
{
    if((n&1) == 1)
    {
        cout << "number is not power of 2" << endl;
    }
    else
    {
        cout << "number is power of 2" <<endl;

    }
}

int main()
{

    bitset<16> x = 5;
    bitset<16> y = 11;

    bitset<16> z = x&y;
    bitset<16> i = x|y;
    bitset<16> j = x^y;

    cout << z <<endl;
    cout << i <<endl;
    cout << j <<endl;
    cout << ~x <<endl;


    int n = 32;
    int k = 3;

    bitset<16>result;

    result = (n)|(1<<(k-1));
    cout << result << endl;


    countbits(n);
    checkEven(n);

     bitset<4>number(12);
     bitset<4>onescomp = ~number;

     cout << onescomp << endl;


    return 0;
}