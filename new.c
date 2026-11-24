#include<stdio.h>
int main(){
    int a[5],i;
    printf("Enter array size = 5\n");
    for(i=0;i<5;i++){
        printf("Enter element:");
        scanf("%d", &a[i]);
    }
    printf("Negative elements are :");
    for(i=0;i<5;i++){
        if(a[i]<0){
            printf("%d", a[i]);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[3][3],i,j,max;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    max=a[0][0];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
    }

    printf("Largest = %d",max);
    return 0;
}

#include<stdio.h>
int main()
{
    int a[3][3],i,j;
  printf("Enter the array row and column size : 3\n");

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Transpose :\n");

   

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d", a[j][i]);
      printf("\n");
    }

    
    return 0;
}

#include<stdio.h>
int main()
{
    int a[3][3],i,j,s;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
    {
        s=0;
        for(j=0;j<3;j++)
            s+=a[i][j];
        printf("Row sum = %d\n",s);
    }

    for(j=0;j<3;j++)
    {
        s=0;
        for(i=0;i<3;i++)
            s+=a[i][j];
        printf("Column sum = %d\n",s);
    }

    return 0;
}