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
	fp = fopen("EMP.DAT","wb");
	if(fp == NULL){
	puts("Cannot open file");
	}
	printf("Enter name, age and basic salary");
	scanf("%s%d%f",e.name,&e.age,&e.bs);
	fwrite(&e,sizeof(e),1,fp);
	fclose(fp);
}