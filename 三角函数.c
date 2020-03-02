//////三角函数//////
#include<stdio.h>
#include<math.h>
int main()
{
	double x,ans;
	int i;
	printf(" sin: 1;  cos: 2;  tan: 3;  \nasin: 4; acos: 5; atan: 6; \n");
	scanf("%d",&i);
	scanf("%lf",&x);
	switch(i)
	{
		case 1:ans=sin(x);break;
		case 2:ans=cos(x);break;
		case 3:ans=tan(x);break;
		case 4:ans=asin(x);break;
		case 5:ans=acos(x);break;
		case 6:ans=atan(x);break;
	}
	printf("%lf\n",ans);
	return 0;
 } 
