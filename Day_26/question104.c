
// Company: TCS, Accenture, Cognizant

#include <stdio.h>

int main()
{
    // Quiz Application
    char questions[5][200] =
        {
            "Q1. What is the full form of CPU?\n   a) Central Processing Unit\n   b) Computer Processing Unit\n   c) Central Program Unit\n   d) Computer Program Unit",
            "Q2. Which language is known as the mother of all languages?\n   a) Python\n   b) Java\n   c) C\n   d) Assembly",
            "Q3. What does HTML stand for?\n   a) Hyper Text Markup Language\n   b) High Text Markup Language\n   c) Hyper Transfer Markup Language\n   d) None of these",
            "Q4. Which of these is NOT a programming language?\n   a) Java\n   b) Python\n   c) HTML\n   d) C++",
            "Q5. What is the file extension of a C program?\n   a) .cpp\n   b) .java\n   c) .c\n   d) .py"
        };

    char answers[5] = {'a', 'c', 'a', 'c', 'c'};
    char userAns;
    int i, score = 0;

    printf("=== Welcome to Quiz Application ===\n");
    printf("Total Questions: 5\n");
    printf("Answer each question with a, b, c, or d\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &userAns);

        if (userAns == answers[i])
        {
            printf("Correct!\n\n");
            score++;
        }
        else
        {
            printf("Wrong! Correct answer: %c\n\n", answers[i]);
        }
    }

    printf("============================\n");
    printf("Quiz Completed!\n");
    printf("Your Score: %d / 5\n", score);

    if (score == 5)
        printf("Grade: Excellent!\n");

    else if (score >= 3)
        printf("Grade: Good!\n");

    else if (score >= 2)
        printf("Grade: Average!\n");
        
    else
        printf("Grade: Need Improvement!\n");

    printf("============================\n");

    return 0;
}
