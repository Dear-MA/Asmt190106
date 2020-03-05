#include  <iostream> 
#include  <cmath> 
using  namespace  std;
int isPrime(int a) {
    int i(3),flag(1);
    if (a>2)
	    if ( a % 2)
	        for (; i <= sqrt(a); i += 2)
	            flag = a % i;
	    else flag = 0;
	else flag = 1; 
    return flag;
}

int  main()
{
    unsigned  short  a;
    cin >> a;
    if (isPrime(a))
        cout << "Y" << endl;
    else
        cout << "N" << endl;
}

