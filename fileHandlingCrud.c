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
        printf("\t\n\n\n\n\n-------------------------------------------------------\n");
        printf("\t\t Welcome to student managment report\n");
        printf("\t--------------------------------------------------------\n");
        printf("\t----------------operations apply on file---------------\n");
        printf("\t1. Insert student record\n\t2. Desplay Student Records\n\t3. Search Records\n\t4. Delete Records\n\t5. Shord Records\n\t6. Updata records\n\t7. Exit");
        printf("\n\t Enter Your Choice: ");
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
    printf("\tEnter Roll Number: ");
    scanf("%d",&s.roll);
    getchar();
    printf("\tEnter Class Section: ");
    scanf("%c",&s.sec);
    printf("\tEnter Name: ");
    scanf("%s",s.name);
    printf("\tEnter Markes: ");
    scanf("%d",&s.marks);
    printf("\tEnter Grades: ");
    scanf("%f",&s.grade);
    fwrite(&s,sizeof(struct student),1,fp);
    printf("\n\tstudent record entered successfully...!\n");
    }
    printf("\tUpdated Records");
    display();
    fclose(fp);
}
void display(){
    FILE *fp;
    fp = fopen("student","rb");
    if(fp==NULL){
        printf("\tERROR: file not found");
        return;
    }else{
    printf("\t-------Student Details----------\n");
    printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
    while(fread(&s,sizeof(struct student),1,fp)==1){
        printf("\t%d\t\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
    }}
    fclose(fp);
}
void  search(){
    FILE *fp;
    int ro, x=0;
    fp = fopen("student","rb");
    printf("\tEnter Student roll number you want to search\n");
    scanf("%d",&ro);
    if(fp==NULL){
        printf("\tfile not found\n");
    }
    while((fread(&s,sizeof(struct student),1,fp)>0) && (x==0)){
        if(ro==s.roll){
            x=1;
            printf("\tRECOURD found successfully .... !\n");
            printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
            printf("\t%d\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
        }

    }
    if(x==0)
        printf("\trecord not found :) ..!\n");
    
    fclose(fp);
}
void delete(){
    FILE *fp,*cp;
    char name[20];
    unsigned x=0;
    fp = fopen("student","rb");
    if(fp==NULL){
        printf("\tfile not found..!");
        return;

    }
    printf("\tprevious record...\n");
    display();
    printf("\tEnter student name you want to delete: ");
    scanf("%s",name);
    cp = fopen("stu1","ab+");
    while(fread(&s,sizeof(struct student),1,fp)==1){
        if(strcmp(name,s.name)!=0){
            printf("\trecord deleted successfully......!");
            fwrite(&s,sizeof(struct student),1,cp);
        }
        else{
            x=1;
        }
    }
    if(x==0){
        printf("\trecord not  found...!");
    }
    fclose(fp);
    fclose(cp);
    remove("student");
    rename("stu1","student");
    printf("\tUPtated recourd");
    display();
}

void shorts(){
    int i, j, k=0;
    FILE *fp;
fp = fopen("student","rb");
 if(fp==NULL){
        printf("\tfile not found\n");
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
    printf("\n\t%d\t%s\t%c\t%d\t%f",a[i].roll,a[i].name,a[i].sec,a[i].marks,a[i].grade);
}
fclose(fp);
}
void update(){
    
      FILE *fp;
    int ro, x=0;
    fp = fopen("student","rb+");
    printf("\tEnter Student roll number you want to search\n");
    scanf("%d",&ro);
    if(fp==NULL){
        printf("\tfile not found\n");
    }else{
        fseek(fp,-sizeof(struct student),1);
    while(fread(&s,sizeof(struct student),1,fp)>0 && x==0){
        if(ro==s.roll){
            x=1;
            printf("\tRECOURD found successfully Now Doing update .... !\n");
            printf("\tRoll no.\tName\tSection\tMarks\tGrade\n");
            printf("\t%d\t%s\t%c\t%d\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
            printf("\n\t---update recored-----");
             printf("\t\nupdate Roll Number: ");
    scanf("%d",&s.roll);
    getchar();
    printf("\t\nupdate Class Section: ");
    scanf("%c",&s.sec);
    printf("\t\nupdate Name: ");
    scanf("%s",s.name);
    printf("\t\nupdate Markes: ");
    scanf("%d",&s.marks);
    printf("\t\nupdate Grades: ");
    scanf("%f",&s.grade);
    
    fwrite(&s,sizeof(struct student),1,fp);
    printf("\t\nupdate recored successfully...!\n");
        }

    }}
    if(x==0){
        printf("\trecord not found :) ..!\n");
    }
    fclose(fp);
     
}
