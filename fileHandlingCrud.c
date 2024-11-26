#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void insert();
void update();
void delete();
void shorts();
void display();
void search();

struct student{
    int roll;
    char sec;
    char name[20];
    int marks;
    float grade;
}s, tamp, a[50];

int main(){
    int ch;

    while(ch!=7){
        printf("\t-------------------------------------------------------\n");
        printf("\t Welcome to student managment report\n");
        printf("\t--------------------------------------------------------\n");
        printf("----------------operations apply on file---------------\n");
        printf("\t1. Insert student record\n\t2. Desplay Student Records\n\t3. Search Records\n\t4. Delete Records\n\t5. Shord Records\n\t6. Updata records\n\t7. Exit");
        printf("\n Enter Your Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: delete(); break;
            case 5: shorts(); break;
            case 6: update(); break;
            case 7: exit(1); break;
            default: printf("\nInvalid Choice: ");
        }
    }
}

void insert(){
    FILE *fp;
    fp = fopen("student","ab+");
    if(fp==NULL){
        printf("ERROR: cannot open the file\n");
        return;
    }else{
    printf("\t-----privious store data------\n");
    display();
    printf("\t-----Enter New Student data------\n");
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);
    printf("Enter Class Section: ");
    fgets(s.sec);
    printf("Enter Name: ");
    fgets(s.name);
    printf("Enter Markes: ");
    scanf("%d",&s.marks);
    printf("Enter Grades: ");
    scanf("%f",&s.grade);
    fwrite(&s,sizeof(struct student),1,fp);
    printf("\nstudent record entered successfully...!\n");
    }
    printf("Updated Records");
    display();
    fclose(fp);
}
void display(){
    FILE *fp;
    fp = fopen("student","rb");
    if(fp==NULL){
        printf("ERROR: file not found");
        return;
    }else{
    printf("-------Student Details----------\n");
    printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
    while(fread(&s,sizeof(struct student),1,fp)==1){
        printf("\t%d\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
    }}
    fclose(fp);
}
void  search(){
    FILE *fp;
    int ro, x=0;
    fp = fopen("student","rb");
    printf("Enter Student roll number you want to search\n");
    scanf("%d",&ro);
    if(fp==NULL){
        printf("file not found\n");
    }
    while((fread(&s,sizeof(struct student),1,fp)>0) && (x=0)){
        if(ro==s.roll){
            x=1;
            printf("RECOURD found successfully .... !\n");
            printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
            printf("\t%d\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
        }

    }
    if(x==0)
        printf("record not found :) ..!\n");
    
    fclose(fp);
}
void delete(){
    FILE *fp,*cp;
    char name[20];
    unsigned x=0;
    fp = fopen("student","rb");
    if(fp==NULL){
        printf("file not found..!");
        return;

    }
    printf("previous record...\n");
    display();
    printf("Enter student name you want to delete: ");
    scanf("%s",name);
    cp = fopen("stu1","ab+");
    while(fread(&s,sizeof(struct student),1,fp)==1){
        if(strcmp(name,s.name)!=0){
            printf("record deleted successfully......!");
            fwrite(&s,sizeof(struct student),1,cp);
        }
        else{
            x=1;
        }
    }
    if(x==0){
        printf("record not  found...!");
    }
    fclose(fp);
    fclose(cp);
    remove("student");
    rename("stu1","student");
    printf("UPtated recourd");
    display();
}

void shorts(){
    int i, j, k=0;
    FILE *fp;
fp = fopen("student","rb");
 if(fp==NULL){
        printf("file not found\n");
    }
    i=0;
while(fread(&a[i],sizeof(a[i]),1,fp)==1){
    i++;k++;
} 
for(i=0; i<k;i++){
    for(j=0; j<k-i-1; j++){
        if(a[j].roll>a[j+1].roll){
            tamp = a[j];
            a[j]=a[j+1];
            a[j+1]=tamp;
        }
    }
}
printf("\t After shorted details:\n");
for(i=0; i<k; i++){
    printf("\t%d\t%s\t%c\t%d\t%f",a[i].roll,a[i].name,a[i].sec,a[i].marks,a[i].grade);
}
fclose(fp);
}
void update(){
    
      FILE *fp;
    int ro, x=0;
    fp = fopen("student","rb+");
    printf("Enter Student roll number you want to search\n");
    scanf("%d",&ro);
    if(fp==NULL){
        printf("file not found\n");
    }else{
    while((fread(&s,sizeof(struct student),1,fp)>0) && (x=0)){
        if(ro==s.roll){
            x=1;
            printf("RECOURD found successfully Now Doing update .... !\n");
            printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
            printf("\t%d\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
            printf("\n---update recored-----");
             printf("\nupdate Roll Number: ");
    scanf("%d",&s.roll);
    printf("\nupdate Class Section: ");
    scanf("%c",&s.sec);
    printf("\nupdate Name: ");
    scanf("%s",s.name);
    printf("\nupdate Markes: ");
    scanf("%d",&s.marks);
    printf("\nupdate Grades: ");
    scanf("%f",&s.grade);
    fseek(fp,sizeof(struct student),1);
    fwrite(&s,sizeof(struct student),1,fp);
    printf("\nupdate recored successfully...!\n");
        }

    }}
    if(x==0){
        printf("record not found :) ..!\n");
    }
    fclose(fp);
     
}
