#include<stdio.h>
struct book
{
	char title[80],author[80],genre[80];
};
void read(struct book b[100],int n)
{
	int i;
	for(i=0;i<n;i++)
  {
	printf("\nEnter the book name:");
	gets(b[i].title);
	printf("Enter the author name:");
	gets(b[i].author);
	printf("Enter the genre:");
	gets(b[i].genre);
  }
  return;
}
void display(struct book b[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n\nTitle:%s",b[i].title);
		printf("\nAuthor:%s",b[i].author);
		printf("\nGenre:%s",b[i].genre);
	}
	return;
}
int main()
{
	struct book b[100];
	int n;
	printf("\nEnter no .of books:");
	scanf("%d",&n);
	read(b,n);
	display(b,n);
	return 0;
}
