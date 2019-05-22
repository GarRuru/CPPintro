#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DATASIZE 1000
struct ALP
{
    char character;
    int times;
};

void readFile(char*);
void countAlp(const char[] ,int[]);
void printArray(const int[]);
void maxFive(const int[]);

int main()
{
    char data[DATASIZE];
    int frequency[26] = {0};
    //Read File
    readFile(data);
    countAlp(data,frequency);
    printArray(frequency);
    maxfive(frequency);
    return 0;
}


void readFile(char* data)
{
    char filename[30];
    char *find;
    printf("Enter The File Name: ");
    fgets(filename,30,stdin);

    find = strchr(filename, '\n');
    if(find)
        *find = '\0';

    FILE *fp;
    fp = fopen(filename, "rt");
    fgets(data,DATASIZE,fp);
    fclose(fp);

}

void countAlp(const char data[], int freq[])
{
    //calculate the occuring frequency of data
}


void printArray(const int freq[])
{
    int i,k;
    printf("====== Result ======\n");
    printf("Data  Frequency  Histogram\n");
    printf("                     0    1    1    2    2    3\n");
    printf("                     5    0    5    0    5    0\n");
    for(i=0;i<26;i++)
    {
        printf("  %c%c        %3d  ",'A'+i,'a'+i,freq[i]);
        for(k=1;k<=freq[i];k++)
        {
            printf("*");
            if(k>=30)
                break;
        }
        printf("\n");
    }
}

void maxfive(const int freq[])
{
    ALP al[26];
    //找出五個最常見的字母 
}
