#include <stdio.h>
#include <stdlib.h>
#define capacity 1000
 struct Game
 {int 
 min;
  int go;
  int ass;
  int tac;
  int sh;
  int pas;
 };
int main()
{int match,i;

printf("TOTAL MATCHES PLAYED:");
scanf("%d",&match);
struct Game S[capacity];
for(i=0;i<match;i++)
{
    printf("MATCH %d STATS\n",i+1);
    printf("MINUTES PLAYED");
    scanf("%d",&S[i].min);
    printf("GOALS");
    scanf("%d",&S[i].go);
    printf("ASSISTS");
    scanf("%d",&S[i].ass);
    printf("TACLES");
    scanf("%d",&S[i].tac);
    printf("SHOTS");
    scanf("%d",&S[i].sh);
    printf("PASSES");
    scanf("%d",&S[i].pas);
    printf("\n");
}
printf("DETAILED ANALYSIS\n");
float g,a,t,sho,p,m;
m=0; g=0;a=0;t=0;sho=0;p=0;
for(i=0;i<match;i++)
{
    m +=S[i].min;
    g +=S[i].go;
    a +=S[i].ass;
    t +=S[i].tac;
    sho +=S[i].sh;
    p +=S[i].pas;
    
}
printf("GOALS:%f\n",g);
printf("TIME:%f\n",m);
printf("ASSISTS:%f\n",a);
printf("TACLES:%f\n",t);
printf("SHOTS:%f\n",sho);
printf("PASSES:%f\n",p);
printf("ACCURACY SHOTS PER GOAL:%f\n",sho/g);
printf("MINUTES PER GOAL:%f\n",m/g);
printf("AVERAGE TIME PLAYED:%f\n",m/match);
printf("TACKLES PER GAME:%f\n",t/match);
printf("SHOTS PER GAME:%f\n",sho/match);
printf("PASSES PER GAME:%f\n",p/match);
printf("GOAL PER GAME:%f\n",g/match);
printf("TOTAL CONTRIBUTIONS:%f\n",g+a);
printf("CONTRIBUTION PER GAME:%f\n",(g=a)/match);
}