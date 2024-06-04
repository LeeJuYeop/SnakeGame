#include <ncurses.h>

int main() {
    initscr();            // ncurses 라이브러리 초기화
    noecho();             // 키 입력을 화면에 표시하지 않음
    cbreak();             // 라인 버퍼링을 비활성화하여 즉시 키 입력을 받음
    curs_set(FALSE);      // 커서를 숨김

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);  // 터미널 창의 크기를 가져옴

    // 새로운 창 생성
    int winHeight = 10, winWidth = 30;
    int startY = (yMax - winHeight) / 2;
    int startX = (xMax - winWidth) / 2;
    WINDOW *win = newwin(winHeight, winWidth, startY, startX);

    refresh();
    // 창 주위에 기본 테두리 그리기
    box(win, 0, 0);
    wrefresh(win);  // 창을 새로고침하여 테두리를 표시

    // 메인 루프 (사용자가 키를 누를 때까지 대기)
    getch();

    // 정리 작업
    delwin(win);
    endwin();

    return 0;
}
