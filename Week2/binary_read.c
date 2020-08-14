#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float bs;
};
int main()
{
	struct emp e;
	FILE *fp;
	fp = fopen("EMP.DAT","rb");
	if(fp == NULL){
	puts("Cannot open file");
	}
	while(fread(&e,sizeof(e),1,fp)==1)
	{
	printf("%s %d %f\n",e.name,e.age,e.bs);
	}
	fclose(fp);
}