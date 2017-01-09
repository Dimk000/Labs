#include "qdbmp.h"
#include <stdio.h>
#include <math.h>

void Get_x_pixels(BMP *bmp, unsigned long x, unsigned long y, unsigned char *r, unsigned char *r1, unsigned char *r2,
                  unsigned char *r3, unsigned char *r4, unsigned char *r5, unsigned char *g, unsigned char *b) {
    BMP_GetPixelRGB(bmp, x + 2, y, r, g, b);
    BMP_GetPixelRGB(bmp, x + 2, y + 1, r1, g, b);
    BMP_GetPixelRGB(bmp, x + 2, y + 2, r2, g, b);
    BMP_GetPixelRGB(bmp, x, y, r3, g, b);
    BMP_GetPixelRGB(bmp, x, y + 1, r4, g, b);
    BMP_GetPixelRGB(bmp, x, y + 2, r5, g, b);
}

void Get_y_pixels(BMP *bmp, unsigned long x, unsigned long y, unsigned char *r, unsigned char *r1, unsigned char *r2,
              unsigned char *r3, unsigned char *r4, unsigned char *r5, unsigned char *g, unsigned char *b) {
    BMP_GetPixelRGB(bmp, x, y + 2, r, g, b);
    BMP_GetPixelRGB(bmp, x+1, y+2, r1, g, b);
    BMP_GetPixelRGB(bmp, x+2, y+2, r2, g, b);
    BMP_GetPixelRGB(bmp, x, y, r3, g, b);
    BMP_GetPixelRGB(bmp, x+1, y, r4, g, b);
    BMP_GetPixelRGB(bmp, x+2, y, r5, g, b);
}


int main(void)
{
    BMP*    bmp;
    UCHAR   r,r1,r2,r3,r4,r5, g, b;
    UINT    width, height;
    UINT    x, y;
    int x_for_sobel, y_for_sobel, sobel;

    bmp = BMP_ReadFile( "/home/user/Labs/Semestr tasks/Image/Sobel/C/lena.bmp" );
    BMP_CHECK_ERROR( stderr, -1 );

    width = BMP_GetWidth( bmp );
    height = BMP_GetHeight( bmp );
    for ( x=0 ; x < width ; ++x )
    {
        for ( y=0 ; y < height ; ++y )
        {
            Get_x_pixels(bmp, x, y, &r, &r1, &r2, &r3, &r4, &r5, &g, &b);
            x_for_sobel = (r+r1+r2) - (r3+r4+r5);
            Get_y_pixels(bmp, x, y, &r, &r1, &r2, &r3, &r4, &r5, &g, &b);
            y_for_sobel = (r+r1+r2) - (r3+r4+r5);
            sobel = (int)(sqrt(x_for_sobel * x_for_sobel + y_for_sobel * y_for_sobel));

            BMP_SetPixelRGB( bmp, x, y, sobel, sobel, sobel);

        }
    }

    BMP_WriteFile( bmp, "/home/user/Labs/Semestr tasks/Image/Sobel/C/sobel.bmp");
    BMP_CHECK_ERROR( stderr, -2 );

    BMP_Free( bmp );

    return 0;
}
