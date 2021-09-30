#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
HANDLE wHnd; // Handle to write to the console.
HANDLE rHnd; // Handle to read from the console
void windows_size(int l, int b)
{
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleTitle("Desic");
    SMALL_RECT windowSize = {0, 0, l, b};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    COORD bufferSize = {10, 10};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
}
	int main(){
	    windows_size(50,10);
        srand(time(0));
        int num = rand() % (5000 - 1000 + 1) + 1000;
        int t = rand() % (500 - 10 + 1) + 10;
        float time=1;
        printf("Time in min: ");
        scanf("%f",&time);
        time*=60000;
        printf("\n playing....\n");
        while (time>0)
        {
            Beep(num,t);
            num = rand() % (5000 - 1000 + 1) + 1000;
            t = rand() % (500 - 10 + 1) + 10;
            time-=t;
        }
        printf("\nDone\nThanks for playing\n****DEBU****\n");
        system("pause");
    }
