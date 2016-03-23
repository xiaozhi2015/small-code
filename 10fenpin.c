#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fp;
    FILE *fp1;
    FILE *fp_out;
    char filename[50];
    char filenamenew[60];
    char *s_add = "freq10";
    int X[11] = { 0 };
    int i_10 = 0;

    if((fp = fopen("txtfilename.txt","r"))==NULL)
    {
        printf("cannot open file0\n");
        exit(0);
    }
    while(!feof(fp))
    {
       fscanf(fp,"%s\n",filename);
       printf("%s\n",filename);
       strcpy(filenamenew , filename);
       printf("%s\n",filenamenew);

       if((fp1 = fopen(filename,"r"))==NULL)
       {
           printf("cannot open file01\n");
           exit(0);
       }
       strcat(filenamenew,s_add);
       printf("%s\n",filenamenew);
//
       if((fp_out = fopen(filenamenew,"w"))==NULL)
       {
           printf("cannot open file02\n");
           exit(0);
       }
       i_10 = 0;
       while(!feof(fp1))
        {
           fscanf(fp1,"%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&X[0],&X[1],&X[2],&X[3],&X[4],&X[5],&X[6],&X[7],&X[8],&X[9]);
           i_10++;
           if( i_10%10 == 1)
           {
               fprintf(fp_out,"%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",X[0],X[1],X[2],X[3],X[4],X[5],X[6],X[7],X[8],X[9]);
           }
        }
       fclose(fp_out);
       fclose(fp1);

    }
    fclose(fp);

//    if((fp1 = fopen("C:\\Users\\zy\\Desktop\\10fenpin\\10fenpin\\2016.03.18-15_37_48_LJJ38.txt","r"))==NULL)
//    {
//        printf("cannot open file1\n");
//        exit(0);
//    }
//    if((fp_out = fopen("C:\\Users\\zy\\Desktop\\10fenpin\\10fenpin\\2016.03.18-15_37_48_LJJ38_freq10.txt","w"))==NULL)
//    {
//        printf("cannot open file2\n");
//        exit(0);
//    }
//    while(!feof(fp1))
//    {
//        fscanf(fp1,"%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&X[0],&X[1],&X[2],&X[3],&X[4],&X[5],&X[6],&X[7],&X[8],&X[9]);
//        i_10++;
//        if( i_10%10 == 1)
//        {
//            fprintf(fp_out,"%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",X[0],X[1],X[2],X[3],X[4],X[5],X[6],X[7],X[8],X[9]);
//        }
//     }
//    fclose(fp_out);
//    fclose(fp1);






    printf("Hello World!\n");
    printf("hehe!\n");
    return 0;
}


