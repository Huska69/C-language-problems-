//NDHU CSIE Lab of programming 1, week 9.4
//You have 2 tables,coursesandscores.coursesconsists 3 columns,sid,student_id, andcourse_id.scoresconsists 2 columns,sidandscore. Please find that how many students failed on at least one course.
//Input
//First line consists 2 integers m and n, shows number of rows incoursesandscores.
//Followed m lines are records ofcourses.student_idare 8-digits numbers begin with non-zero digit.sidandscoresare positive integers smaller than 1000.
//Followed n lines are records ofscores.sidare positive integers smaller than 1000.scoreare integers in range [0, 100].
//Output
//Student will be flunked when his/her average score in the course less than 60. Output is 2 integers shows number of student and student failed on at lease one course.

#include <stdio.h>

int main()
{
    int courses, scores, sid = 0, print_sid, student_id, course_id, sid2, score, count1 = 0, count2 = 0, count = 0;
    scanf("%d%d", &courses, &scores);
    int array[1000][10];
    int array2[1000][10];
    for(int i = 0; i < courses; i++){
        scanf("%d%d%d", &sid, &student_id, &course_id);
        //array[i][0] = sid;
        array[i][1] = student_id;
        array[i][2] = course_id;
        array[i][3] = 0;
        array[i][4] = 0;
        count1++;
        for (int j = 0; j < i - 1; j++){
            if(student_id == array[j][1]){
                count1 = count1 - 1;
                break;
            }
        }
    }
    for(int i = 0; i < scores; i++){
        scanf("%d%d", &sid2, &score);
        //array2[i][0] = sid2;
        array2[i][1] = score;
        array[sid2][3] += score;
        array[sid2][4]++;
    }
    for(int i = 0; i < courses; ++i){
        double avg = array[i][3] / (double) array[i][4];
        if (avg < 60.0){
            count2++;
        }
    }
    printf("%d %d", count1, count2);
    return 0;
}
