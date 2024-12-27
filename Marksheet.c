#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ 
   
char StudentName[1][20];
char per='%',highestsubjects[5][25]={"Maths","Science","English","History","Economics"},lowestsubjects[5][25]={"Maths","Science","English","History","Economics"};
float Maths,Science,English,History,Economics,TotalMarks,Percentage;
int highestscore = 0,Count=1,lowestscore = 101; 
printf("\n__________________________\n");
printf("\nCalcutta South School");
printf("\n---------------------\n");
printf("Enter Student's Name: ");
scanf("%s",&StudentName);
printf("Enter Marks Obtained:\n");
printf("Maths:");
scanf("%f",&Maths);
printf("Science:");
scanf("%f",&Science);
printf("English:");
scanf("%f",&English);
printf("History:");
scanf("%f",&History);
printf("Economics:");
scanf("%f",&Economics);
printf("\n");
if (English<=100 && Science<=100 && History<=100 && Maths<=100 && Economics<=100)
{
 TotalMarks=Maths+Science+English+Economics+History;
printf("Total Marks Obtained:%.0f",TotalMarks);
Percentage=(TotalMarks/500)*100;

if(Percentage>=90 && Percentage<=100){
    printf("\nGrade = A+\nPercentage: %.2f %c",Percentage,per);
}
else if(Percentage<90 && Percentage>=75)
{
printf("\nGrade = A\nPercentage: %.2f %c",Percentage,per);
}
else if(Percentage<75 && Percentage>=60)
{
printf("\nGrade = B\nPercentage: %.2f %c",Percentage,per);
}
else if(Percentage<60 && Percentage>=40)
{
printf("\nGrade = C\nPercentage: %.2f %c",Percentage,per);
}
else{printf("\nGrade = D \nPercentage: %.2f %c",Percentage,per);
}
   if(Maths>highestscore){
    highestscore=Maths;
    strcpy(highestsubjects[0],"Maths");
    Count=1;
    }else if (Maths == highestscore) {
        strcpy(highestsubjects[Count++], "Maths");
    }
if(English>highestscore){
    highestscore=English;
    strcpy(highestsubjects[0],"English");
    Count=1;
    }else if (English == highestscore) {
        strcpy(highestsubjects[Count++], "English");
    }
    if (Science > highestscore) {
        highestscore = Science;
        strcpy(highestsubjects[0], "Science");
        Count = 1;
    } else if (Science == highestscore) {
        strcpy(highestsubjects[Count++], "Science");
    }
    if (History > highestscore) {
        highestscore = History;
        strcpy(highestsubjects[0], "History");
        Count = 1;
    } else if (History == highestscore) {
        strcpy(highestsubjects[Count++], "History");
    }
    if (Economics > highestscore) {
        highestscore = Economics;
        strcpy(highestsubjects[0], "Economics");
        Count = 1;
    } else if (Economics == highestscore) {
        strcpy(highestsubjects[Count++], "Economics");
    }
    printf("\nThe highest scoring subject(s) is/are:\n");
    for (int i = 0; i < Count; ++i) {
        printf("%s\n", highestsubjects[i]);
    }
    printf("With a score of %d\n", highestscore); 
if(Maths<lowestscore){
    lowestscore=Maths;
    strcpy(lowestsubjects[0],"Maths");
    Count=1;
   } else if (Maths == lowestscore) {
        strcpy(lowestsubjects[Count++], "Maths");
   }
if(English<lowestscore){
    lowestscore=English;
    strcpy(lowestsubjects[0],"English");
    Count=1;}
     else if (English == lowestscore) {
        strcpy(lowestsubjects[Count++], "English");
   }
    if(Science<lowestscore){
    lowestscore=Science;
    strcpy(lowestsubjects[0],"Science");
    Count=1;
}
else if (Science == lowestscore) {
        strcpy(lowestsubjects[Count++], "Science");
   }
if(History<lowestscore){
    lowestscore=History;
    strcpy(lowestsubjects[0],"History");
    Count=1;
}
else if (History == lowestscore) {
        strcpy(lowestsubjects[Count++], "History");
   }
if(Economics<lowestscore){
    lowestscore=Economics;
    strcpy(lowestsubjects[0],"Economics");
    Count=1;
}
else if (Economics == lowestscore) {
        strcpy(lowestsubjects[Count++], "Economics");
   }
printf("The lowest scoring subject(s) is/are:\n");
    for (int i = 0; i < Count; ++i) {
        printf("%s\n", lowestsubjects[i]);
    }
    printf("With a score of %d\n", lowestscore);

TotalMarks>=200 ? printf("\nPassed In Exam\n"):printf("\nFailed in Exam\n");}
        
if(Maths>100){printf("\nEntered Marks obtained in Maths is invalid");}
if(Science>100){printf("\nEntered Marks obtained in Science is invalid");}
if(English>100){printf("\nEntered Marks obtained in English is invalid");}
if(History>100){printf("\nEntered Marks obtained in History is invalid");}
if(Economics>100){printf("\nEntered Marks obtained in Economics is invalid");}

getch ();

return 0;

}

