#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>


int main(int argc, char *argv[]) {

    int i,j,k,x,y;
    k=15000;
    int p =0;
    int tmp1,tmp2;

    printf("Enter width:\n");
    scanf("%d",&tmp1);
    printf("Enter height:\n");
    scanf("%d",&tmp2);

    initscr();
    int width = tmp1;
    int height = tmp2;
    curs_set(0);
    refresh();
    int offsetx = (COLS - width) / 2;
    int offsety = (LINES - height) / 2;
    WINDOW * win = newwin(height, width, offsety, offsetx);
    refresh();
    box(win, 0, 0);

    y = height - 1;
    x = width - 1;

    while(p<=((y/2)-1)){
        // низ
        for(j = p-1;j<x-p-1;j++){
            if(j==-1){
                j++;
            }
            mvwprintw(win, y-(p+1), x-(j+1), "*");
            usleep(k);
            wrefresh(win);
        }
        // лево
        for(i = p;i<y-p-1;i++){
            mvwprintw(win, y-(i+1), x-(x-p-1), "*");
            usleep(k);
            wrefresh(win);
        }
        // верх
        for(j = x-p-1;j>p;j--){
            mvwprintw(win, y-(y-p-1), x-(j), "*");
            usleep(k);
            wrefresh(win);
        }
        // право
        for(i = y-p-1;i>p+1;i--){
            mvwprintw(win, y-(i-1), x-(p+1), "*");
            usleep(k);
            wrefresh(win);
        }

        p++;
    }

    wrefresh(win);

    getch();

    endwin();

    return 0;

}
