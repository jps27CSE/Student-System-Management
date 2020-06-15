#include<stdio.h>
#include<string.h>

typedef struct
{
    char first[20];
    char middle[20];  //Student's Name Function 
    char last[20];
}nametype;

typedef struct
{
    char first[20];
    char middle[20];  //Father's Name Function
    char last[20];
}fathernametype;

typedef struct
{
    char first[20];
    char middle[20];  //Mother's Name Function
    char last[20];
}mothernametype;

typedef struct
{
  int id;
  nametype name;
  fathernametype fathername;    //ID Grade and Recall Section 
  mothernametype mothername;
  char grade[3];
}studenttype;

//Start of Grade Calculation Section 

void calculate_grade(studenttype *s,int mark)
{
    if(mark>=80)
    {
        strcpy(s->grade,"A+");
    }
    else if(mark>=70)
    {
        strcpy(s->grade,"A");
    }
    else if(mark>=60)
    {
        strcpy(s->grade,"A-");
    }
    else if(mark>=50)
    {
        strcpy(s->grade,"B");
    }
    else if(mark>=40)
    {
        strcpy(s->grade,"C");
    }
    else
    {
        strcpy(s->grade,"F");
    }
    
}

//End of Grade Calculation 


int main()
{
    studenttype student[100];
    int i,n;

    int sum=0;
    //
    printf("\t\t\t\t\t\tStudent System Management");
    printf("\n\t\t\t\t\t\tDeveloped By Jack Pritom Soren");
    printf("\n\t\t\t\t\t\tVersion:- 0.1\n\n\n");


    printf("Enter How much Students data you want to Input: ");
    scanf("%d",&n);
    int mark[100];

    for(i=0;i<n;i++)
    {
        printf("\nEnter the ID of Student %d: ",i+1);
        scanf("%d",&student[i].id);
        
        printf("Enter the first name of Student %d: ",i+1);
        scanf("%s",student[i].name.first);
        
        printf("Enter the middle name of Student %d: ",i+1);
        scanf("%s",student[i].name.middle);

        printf("Enter the last name of Student %d: ",i+1);
        scanf("%s",student[i].name.last);

        printf("\nEnter father's first name of Student %d: ",i+1);
        scanf("%s",student[i].fathername.first);
        
        printf("Enter father's middle name of Student %d: ",i+1);
        scanf("%s",student[i].fathername.middle);

        printf("Enter father's last  name of Student %d: ",i+1);
        scanf("%s",student[i].fathername.last);

        printf("\nEnter mother's first name of Student %d: ",i+1);
        scanf("%s",student[i].mothername.first);
        
        printf("Enter mother's middle name of Student %d: ",i+1);
        scanf("%s",student[i].mothername.middle);

        printf("Enter mother's last name of Student %d: ",i+1);
        scanf("%s",student[i].mothername.last);
        

        

        strcpy(student[i].grade,"");
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        printf("Enter of Bangla Marks Student %d: ",i+1);
        scanf("%d",&mark[0]);
        printf("Enter of English Marks Student %d: ",i+1);
        scanf("%d",&mark[1]);
        printf("Enter of Math Marks Student %d: ",i+1);
        scanf("%d",&mark[2]);
        printf("Enter of CSE Marks Student %d: ",i+1);
        scanf("%d",&mark[3]);

        sum=mark[0]+mark[1]+mark[2]+mark[3];
        

    }

    //Start of Grade and Total Calculation Section

    for(i=0;i<n;i++)
    {

        
        calculate_grade(&student[i],mark[i]);
        
    }

    //End of Grade and Total Calculation Section

    
    //Start of Output Section
    printf("Output: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("ID: %d\n",student[i].id);
        printf("Name: %s %s %s\n",student[i].name.first,student[i].name.middle,student[i].name.last);
        printf("\nFather's Name: %s %s %s\n",student[i].fathername.first,student[i].fathername.middle,student[i].fathername.last);
        printf("Mother's Name: %s %s %s\n",student[i].mothername.first,student[i].mothername.middle,student[i].mothername.last);

        printf("\n\nMarks of Bangla: %d\n",mark[0]);
        printf("Marks of English: %d\n",mark[1]);
        printf("Marks of Math: %d\n",mark[2]);
        printf("Marks of CSE: %d\n",mark[3]);
        printf("Total Number: %d\n\n",sum);
        printf("Grade: %s\n",student[i].grade);

    }

    //End of Output Section

    return 0;
    

}