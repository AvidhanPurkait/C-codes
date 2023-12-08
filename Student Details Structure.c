#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks1, marks2, marks3, total;
};
void Sort(struct student list[],int n);
int main()
{
    int i,j,n;
    float max=0;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student stuarr[n];
    printf("Enter Roll No., Name and Marks Below: \n");
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d record: \n",i+1);
        printf("Enter RollNo. : ");
        scanf("%d",&stuarr[i].rollno);
        printf("Enter Name : ");
        scanf("%s",stuarr[i].name);
        printf("Enter Marks1 : ");
        scanf("%f",&stuarr[i].marks1);
        printf("Enter Marks2 : ");
        scanf("%f",&stuarr[i].marks2);
        printf("Enter Marks3 : ");
        scanf("%f",&stuarr[i].marks3);
        stuarr[i].total = (stuarr[i].marks1 + stuarr[i].marks2 + stuarr[i].marks3);
        printf("Total Marks Obtained: %.2f\n", stuarr[i].total);
    }
    Sort(stuarr, n);
    printf("\nSorted list in order:\n");
    printf("\n\tRollNo\tName\tMarks1\tMarks2\tMarks3\tTotal\t\n");
    for(i=0; i<n; i++)
        printf("\t%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t\n",stuarr[i].rollno,stuarr[i].name,stuarr[i].marks1,stuarr[i].marks2,stuarr[i].marks3,stuarr[i].total);
    for(i=0;i<n;i++)
    {
        if(stuarr[i].total>max)
        {
            max = stuarr[i].total;
            j=i;
        }
    }
    printf("\nThe student with highest total marks: \n");
    printf("\tRoll No. : %d\n",stuarr[j].rollno);
    printf("\tName : %s\n",stuarr[j].name);
    printf("\tMarks1 : %.2f\n",stuarr[j].marks1);
    printf("\tMarks2 : %.2f\n",stuarr[j].marks2);
    printf("\tMarks3 : %.2f\n",stuarr[j].marks3);
    printf("\tTotal : %.2f\n",stuarr[j].total);
    return 0;
}
void Sort(struct student list[100],int n)
{
    int i,j;
    struct student temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(list[j].total<list[j+1].total)
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
}
