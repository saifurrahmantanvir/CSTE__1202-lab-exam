#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, (char *)"C:\\TDM-GCC-32\\lib\\libbgi.a");

  /**
   * @brief void line(int x1, int y1, int x2, int y2)
   *
   *
   */
  line(20, 20, 100, 100);

  /**
   * @brief void circle(int x, int y, int radius)
   *
   *
   */
  circle(20, 50, 100);

  /**
   * @brief void rectangle(int left, int top, int right, int bottom)
   *
   *
   */
  rectangle(20, 20, 100, 100);

  /**
   * @brief void bar(int left, int top, int right, int bottom)
   *
   *
   */
  bar(10, 20, 30, 200);

  /**
   * @brief void ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
   *
   *
   */
  ellipse(320, 240, 0, 270, 100, 50);

  putpixel(20, 30, BLACK);

  int color = getpixel(20, 30);

  getch();
  closegraph();
}