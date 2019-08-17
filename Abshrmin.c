void main()
{
int hr1,hr2,min1,min2,hr,min;
clrscr();
printf("Enter any Time(hr:min):");
scanf("%d:%d",&hr1,&min1);
printf("Enter any Time(hr:min):");
scanf("%d:%d",&hr2,&min2);
hr=abs(hr1-hr2);
min=abs(min1-min2);
printf("Hour:Minute=%d:%d",hr,min);
getch();
}
