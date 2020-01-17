#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,i=0;
	char ch;
	do{
			cout<<"\t\t        MENU       \n"
				<<"\t\t1.G.C.D.            \n"
				<<"\t\t2.Calculate Power   \n"
				<<"\t\t3.Factorial          \n"
				<<"\t\t4.Fibonacci           \n";
			cout<<"Enter your choice(1-4):";
			cin>>c;
			switch(c)
			{
				case 1:     cout<<"\nENTER TWO NUMBERS:";
							cin>>a>>b;
							cout<<"\nG.C.D. is:"<<gcd(a,b);
							break;
				case 2:		cout<<"\n ENTER TWO NUMBERS:";
							cin>>a>>b;
							cout<<"\nCalculated Result:"<<Power(a,b);
							break;
				case 3:		cout<<"\n ENTER A NUMBER:";
							cin>>a;
							cout<<"\nFactorial is:"<<factorial(a);
							break;
				case 4: 	cout<<"\n ENTER NO. OF TERMS";
							cin>>a;
							cout<<"Series is:\n";
							while(i<a)
							{
								cout<<fibonacci(i);
								i++;
							}
							break;
				default: cout<<"\n wrong choice:";	
			cout<<"\nDo you want to continue (Y/N):";
			cin>>ch;		
			 }
			 
		}while(ch=='Y');

			
}



int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}



int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}



int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}

int fib(int x)
 {
   if((x==1)||(x==0))
    {
      return(x);
   }
   else
    {
      return(fib(x-1)+fib(x-2));
   }
}

int factorial(int n);

{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

int hcf(int n1, int n2);

{
   int n1, n2;
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);
   return 0;
}


int calculateraisetopower(int, int)
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number: ";
    cin >> powerRaised;

    result = calculateraisetopower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

 {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x)
    {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}

