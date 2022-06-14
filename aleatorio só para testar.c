int mai()
{
int x[40], n;
printf("digite o numero de elementos do seu vetor: ");
scanf("%d", &n);
printf("digite agora os elementos do seu vetor:\n");
for(int i=0;i<n;i++)
scanf("%d", &x[i]);
maior ( x, n);
printf("o maor elemento do seu vetor é: %d", maior(x,n));
return 0;
}

int maior ( int x[20], int n)
{
int ma;
if(n==0) return x[0];
ma = maior(x, n-1);
if (ma>x[n-1]) return ma;
return x[n-1];
}