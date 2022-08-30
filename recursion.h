void printNumTillN(int);
void printNumTillNReverse(int);
void print_N_Odd_Num(int, int);
void print_N_Odd_Num_Reverse(int, int);
void print_N_Even_Num(int, int);
void print_N_Even_Num_Reverse(int, int);
void print_N_Squares(int, int);
void decimalToBinary(int);
void decimalToOctal(int);


void printNumTillN(int n)
{
    if(n==0)
     return;
    printNumTillN(n-1);
    printf("%d ",n);
}

void printNumTillNReverse(int n)
{
    if(n==0)
     return;
    printf("%d ",n);
    printNumTillNReverse(n-1);
}

void print_N_Odd_Num(int n,int k)
{
    if(k==0)
     return;
    
    if(n%2 != 0)
    {
     printf("%d ",n);
     k--;
     print_N_Odd_Num(n+1, k);
     return;
    }
    
    print_N_Odd_Num(n+1, k);
}

void print_N_Odd_Num_Reverse(int n,int k)
{
    if(k==0)
     return;
    
    if(n%2 != 0)
    {
     k--;
     print_N_Odd_Num_Reverse(n+1, k);
     printf("%d ",n);
     return;
    }
    
    print_N_Odd_Num_Reverse(n+1, k);
}

void print_N_Even_Num(int n,int k)
{
    if(k==0)
     return;
    
    if(n%2 == 0)
    {
     printf("%d ",n);
     k--;
     print_N_Even_Num(n+1, k);
     return;
    }
    
    print_N_Even_Num(n+1, k);
}

void print_N_Even_Num_Reverse(int n,int k)
{
    if(k==0)
     return;
    
    if(n%2 == 0)
    {
     k--;
     print_N_Even_Num_Reverse(n+1, k);
     printf("%d ",n);
     return;
    }
    
    print_N_Even_Num_Reverse(n+1, k);
}

void print_N_Squares(int n, int k)
{
    if(n>k)
     return;

    printf("%d ",n*n);
    print_N_Squares(n+1, k);

}

void reverseNum(int n)
{
    if(n<=0)
     return;

    printf("%d",n%10);
    reverseNum(n/10);
}

void decimalToBinary(int n)
{
    if(n<=0)
     return;
    
    decimalToBinary(n/2);
    printf("%d",n%2);
}

void decimalToOctal(int n)
{
    if(n<=0)
     return;
    
    decimalToOctal(n/8);
    printf("%d",n%8);
}
