#include"mystruct.h"

int Main_menu(void);
void Line (int n);
void Licence(int color);
int InputChoice(void);
int Selectdifficulty(void);
int Playing(char* mine,char* others,int diff);
void gotoxy(int xpos, int ypos);
void Beforegame(void);
void Gameover(int score,int diff,int* best);
void ShowTheBest(int best[]);
void Setting(char* mine,char* others);
void Say_Good_Bye(void);
