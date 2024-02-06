#ifndef LAB_H
#define LAB_H

char *getProgName(char *str);
int add(int first, int second);
double multiplication(double first, double second);
char *readStr(void);
char *reverse(char *str);
int split(char *str);
int compare(char *str1, char *str2);
char *cleanString(char *str);
char *menu(void);
void debug(char *message);


/* TESTS */
int addTest(void);
int multiplicationTest(void);
int reverseStrTest(void);
int splitAndCompTest(void);

#endif
