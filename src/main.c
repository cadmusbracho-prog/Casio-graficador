#include <gint/display.h>
#include <gint/keyboard.h>

int main(void)
{
    dclear(C_WHITE);
    dtext(10, 10, C_BLACK, "Graficador Casio OK");
    dline(0, 32, 127, 32, C_BLACK);
    dupdate();

    getkey();
    return 0;
}
