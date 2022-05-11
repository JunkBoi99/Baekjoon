#include <cstdio>

int main()
{
    int n,a=2;
    scanf("%d",&n);
    while(n>1)
    {
        if(n%a==0){printf("%d\n",a);n/=a;}
        else a++;
    }
}

/*
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2; i*i<=n; i++){
		while(n%i==0){
			printf("%d\n",i);
			n/=i;
		}
	}
	if(n>1)
		printf("%d\n",n);

	return 0;
}
*/