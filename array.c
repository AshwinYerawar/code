#include<stdio.h>
int a[100],n,s,pos,i;
void ins(int s,int pos)
{ n++;
    printf("enter s:");
    scanf("%d",&s);
    printf("enter pos:");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("LOL!");
    }
    else 
    {
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=s;
        for(i=0;i<n;i++)
        {
        printf(" %d",a[i]);
        }
    }
} 

void insend(int s)
{
    n++;
    printf("enter s:");
    scanf("%d",&s);
    a[n]=s;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void insbig(int s)
{n++;
    printf("enter s:");
    scanf("%d",&s);
    for(i=n;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=s;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}

void del(int pos)
{
    printf("enter pos:");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("error");
    }
    else
    for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
                for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        
}

void delend()
{
    n--;
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}

void delbig()
{
    for(int i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;
}

void Traversing()
{
    printf("Array after traversal : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
} 


int main()
{
    int o;
    printf("enter n:");
    scanf("%d",&n);
    printf("ENTER ELEMENT OF MATRIX:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     while(1)
    {
    printf("Choose Operation:\n");
    printf("1:Insert at position you ask\n");
    printf("2:Insert at beginning\n");
    printf("3:Insert at end\n");
    printf("4:Delete from beginning\n");
    printf("5:Delete from end\n");
    printf("6:Delete from position you ask\n");
    printf("7:Traversing\n");
    scanf("%d",&o);
    int bre=0;
        switch(o)
    {
        case 1:{
                ins(s,pos);
                break;
               }
               
        case 2:{
                insbig(s);
                break;
                }       
                
        case 3:{
                insend(s);
                break;
               }
        case 4:{
                   delbig();
                   break;
                }
        case 5:{
                   delend();
                   break;
                }
        case 6:{
                del(pos);
                break;
                }
        case 7:{
                Traversing();
                bre = 1;
                break;
                }
    }
    if(bre)
    return 0;
    }
    return 0;

}
