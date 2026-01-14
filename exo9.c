#include<stdio.h>
#include<math.h>
int main()
{
float v1,v2,u1,u2,normv,normu,sprodect;
printf("enter the ordinate of the 1st vector \n ");
scanf("%f",&v1);
scanf("%f",&v2);
printf("enter the ordinate of the 2nd vector \n ");
scanf("%f",&u1);
scanf("%f",&u2);
    normv = sqrt(v1*v1 + v2*v2);
    normu = sqrt(u1*u1 + u2*u2);
printf("the norm of the 1st vector is %f \n",normv);
printf("the norm of the 2nd vector is %f \n",normu);
    sprodect = v1*u1 + v2*u2;
printf("the scalar product of the 2 vectors is %f \n",sprodect);

    return 0;
}
