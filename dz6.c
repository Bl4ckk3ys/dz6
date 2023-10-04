#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//6.  Даны координаты трех вершин треугольника (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь.
int main()
{   
    int x1, y1, x2, y2, x3, y3, null;
    double p, s;
  
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    s = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    p = (sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)) + sqrt(pow((x3 - x1),2) + pow((y3 - y1),2))+sqrt(pow((x2 - x3),2) + pow((y2 - y3),2)));
    printf("\n%lf %lf",p, s);

    scanf("\n%d",&null);
    return 0;
}