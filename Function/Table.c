// #include<stdio.h>
// void printHL();
// void printVL();
// void printTL();
// void printTR();
// void printBL();
// void printBR();
// void printT();
// void printrevT();


// void main(){
//     int len = 12, bth =30;


//     for (int row = 1; row <= len; row++)
//     {
//         for (int col = 1; col <= bth; col++)
//         {
//             if (row == 1 && col == 1)
//             {
//                 printTL();
//             }
//             else if (row == 1 && col == bth)
//             {
//                 printTR();
//             }
//             else if (row == len && col == 1)
//             {
//                 printBL();
//             }
//             else if (row == len && col == bth)
//             {
//                 printBR();
//             }
//             else if (row == 1 || row == len)
//             {
//                 if(row == 1 && col == bth/2)
//                 {
//                     printT();
//                 }
//                 else if(row == len && col == bth/2)
//                 {
//                     printrevT();
//                 }
//                 else
//                 printHL();
//             }
//             else if (col == 1 || col == bth || col == bth/2)
//             {
//                 printVL();
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }

// }
// void printHL(){
//     printf("%c",196);
// }
// void printVL(){
//     printf("%c",179);
// }
// void printTL(){
//     printf("%c",218);
// }
// void printTR(){
//     printf("%c",191);
// }
// void printBL(){
//     printf("%c",192);
// }
// void printBR(){
//     printf("%c",217);
// }

// void printT(){
//     printf("%c",194);
// }
// void printrevT(){
//     printf("%c",193);
// }


#include<stdio.h>
void charLine(char, int);
int main(){
    char lu = 218, lb = 192, rb = 217, hl = 196, ru = 191, vl = 179, rt = 193, t = 194, p = 197; 
    charLine(lu, 1);
    charLine(hl,23);
    charLine(t,1);
    charLine(hl,26);
    charLine(ru, 1);
    printf("\n");
    charLine(vl, 1);
    printf("\tData Type");
    printf("\t");
    charLine(vl, 1);
    printf("\tSize in Bytes");
    printf("\t   ");
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    charLine(hl,23);
    charLine(p,1);
    charLine(hl,26);
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    printf("\tInteger\t");
    printf("\t");
    charLine(vl, 1);
    printf("\t\t2");
    printf("\t   ");
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    charLine(hl,23);
    charLine(p,1);
    charLine(hl,26);
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    printf("\tCharecter\t");
    charLine(vl, 1);
    printf("\t\t1");
    printf("\t   ");
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    charLine(hl,23);
    charLine(p,1);
    charLine(hl,26);
    charLine(vl, 1);
    printf("\n");
    charLine(vl, 1);
    printf("\tFloat\t\t");
    charLine(vl, 1);
    printf("\t\t4");
    printf("\t   ");
    charLine(vl, 1);
    printf("\n");
    charLine(lb, 1);
    charLine(hl,23);
    charLine(rt,1);
    charLine(hl,26);
    charLine(rb, 1);
}
void charLine(char ch, int len){
    for( int i=1; i<=len; i++){
        printf("%c",ch);
    }
}