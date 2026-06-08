#include <stdio.h>
typedef struct {
    int kor;
    int eng;
}Score;
typedef struct {
    char name[20];
    Score score;
}Student;
int main(void) {
    Student st = {"Hong", {80, 90}};
    int sum = 0;
    sum = st.score.kor + st.score.eng;
    st.score.kor = st.score.kor + 5;
    st.score.eng = st.score.eng - 10;
    sum = sum + st.score.kor +  st.score.eng;
    printf("%d %d %d\n",st.score.kor, st.score.eng, sum);
    return 0;
}