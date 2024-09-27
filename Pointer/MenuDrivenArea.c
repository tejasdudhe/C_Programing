#include<stdio.h>

void areaCircum(int,float*,float*);
void areaPeri(int,int,float*,float*);
void main()
{
    int op,len,bth,rad;
    float circum,area,peri;
    
    do{

        
        printf("\n\n ..........MENU.........\n");

        printf("\n Enter 1 to Find About Circle.");
        printf("\n Enter 2 to find About Rectangle.");
        printf("\n Enter 3 to Exit.");

       
        printf("\n Enter Your Option: ");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            

            printf("\n Enter The Radius Of Circle : ");
            scanf("%d",&rad);

            areaCircum(rad,&circum,&area);
            printf("\n Area of the circle having radius %d : %f",rad,area);
            printf("\n Circumference  of the circle having radius %d : %f",rad,circum);


            break;
        case 2:
            
            printf("Enter The Length and breadth Of Rectangle : ");
            scanf("%d %d",&len,&bth);

            areaPeri(len,bth,&peri,&area);

            printf("\n Area of the Rectangle  having length %d and breadth %d : %f",len,bth,area);
            printf("\n Perimeter of the Rectangle  having length %d and breadth %d : %f",len,bth,peri);
            break;

        
        default:
               printf("\n Invalid Options."); 
            break;
        }


    }while(op!=3);

}

void areaCircum(int radius,float *cir,float *A){

    *A = 3.14*radius*radius;
    *cir = 2*3.14*radius;

}

void areaPeri(int len,int bth ,float *per ,float *A){
    *per =  2*len + 2*bth;
    *A = len*bth;

}