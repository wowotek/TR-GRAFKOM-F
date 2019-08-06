#ifndef TAMPIL_HPP
#define TAMPIL_HPP

#include <gl/glut.h>

void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(xpos, ypos, zpos);
    glRotatef(xrot + 20, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot - 20, 0.0f, 1.0f, 0.0f);

	glScalef(30,30,30);

	glBegin(GL_LINE_LOOP);
        glColor3f(1.0,1.0,1.0);
        //0
        glVertex3f(0.134000, 1.020300, -0.083900);
        glTexCoord2f(0.611900, 0.886700);
        glVertex3f(0.085300, 1.111800, -0.061300);
        glTexCoord2f(0.638400, 0.939600);
        glVertex3f(0.146100, 1.099700, 0.018800);
        glTexCoord2f(0.580300, 0.950300);
	glEnd();
	//1 230
	glBegin(GL_LINE_LOOP);
    	glVertex3f(0.146100, 1.099700, 0.018800);
    	glTexCoord2f(0.580300, 0.950300);
    	glVertex3f(0.179500, 1.019800, 0.004200);
    	glTexCoord2f(0.567700, 0.902600);
    	glVertex3f(0.134000, 1.020300, -0.083900);
    	glTexCoord2f(0.611900, 0.886700);
	glEnd();
	//2 456
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.087900, 0.997000, 0.133900);
	    glTexCoord2f(0.472400, 0.929900);
	    glVertex3f(0.161200, 1.011700, 0.090200);
	    glTexCoord2f(0.518800, 0.917600);
	    glVertex3f(0.131500, 1.088300, 0.086600);
	    glTexCoord2f(0.534800, 0.961100);
	glEnd();
	//3 674
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.131500, 1.088300, 0.086600);
        glTexCoord2f(0.534800, 0.961100);
        glVertex3f(0.076300, 1.080200, 0.128000);
        glTexCoord2f(0.493600, 0.975100);
        glVertex3f(0.087900, 0.997000, 0.133900);
        glTexCoord2f(0.472400, 0.929900);
	glEnd();
	//4 894
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.000000, 1.073400, 0.142800);
        glTexCoord2f(10.450500, 0.993000);
        glVertex3f(0.000000, 0.989700, 0.142800);
        glTexCoord2f(0.427200, 0.949000);
        glVertex3f(0.087900, 0.997000, 0.133900);
	glTexCoord2f(0.472400, 0.929900);
	glEnd();
	//5 478
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.087900, 0.997000, 0.133900);
        glTexCoord2f(0.472400, 0.929900);
        glVertex3f(0.076300, 1.080200, 0.128000);
        glTexCoord2f(0.493600, 0.975100);
        glVertex3f(0.000000, 1.073400, 0.142800);
        glTexCoord2f(10.450500, 0.993000);
	glEnd();
	//6 653
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.131500, 1.088300, 0.086600);
        glTexCoord2f(0.534800, 0.961100);
        glVertex3f(0.161200, 1.011700, 0.090200);
        glTexCoord2f(0.518800, 0.917600);
        glVertex3f(0.179500, 1.019800, 0.004200);
        glTexCoord2f(0.567700, 0.902600);
	glEnd();
	//7 326
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.179500, 1.019800, 0.004200);
        glTexCoord2f(0.567700, 0.902600);
        glVertex3f(0.146100, 1.099700, 0.018800);
        glTexCoord2f(0.580300, 0.950300);
        glVertex3f(0.131500, 1.088300, 0.086600);
        glTexCoord2f(0.534800, 0.961100);
	glEnd();
	//8 10 11 12
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.173900, 0.307400, -0.027100);
        glTexCoord2f(0.399800, 0.513000);
        glVertex3f(0.153500, 0.312400, -0.103600);
        glTexCoord2f(0.440100, 0.492100);
        glVertex3f(0.147200, 0.463700, -0.075500);
        glTexCoord2f(0.472700, 0.577400);
	glEnd();
	//9 12 13 10
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.147200, 0.463700, -0.075500);
        glTexCoord2f(0.472700, 0.577400);
        glVertex3f(0.168700, 0.454200, 0.003100);
        glTexCoord2f(0.430000, 0.596500);
        glVertex3f(0.173900, 0.307400, -0.027100);
        glTexCoord2f(0.399800, 0.513000);
	glEnd();
	//10. 14 15 16
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.103900, 0.457500, 0.059400);
        glTexCoord2f(0.385000, 0.622000);
        glVertex3f(0.047500, 0.481000, 0.007600);
        glTexCoord2f(0.342700, 0.643800);
        glVertex3f(0.053900, 0.302200, -0.019200);
        glTexCoord2f(0.311000, 0.543400);
	glEnd();
	//11. 16 17 14
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.053900, 0.302200, -0.019200);
        glTexCoord2f(0.311000, 0.543400);
        glVertex3f(0.119200, 0.295400, 0.030000);
        glTexCoord2f(0.356400, 0.528300);
        glVertex3f(0.103900, 0.457500, 0.059400);
        glTexCoord2f(0.385000, 0.622000);
	glEnd();
	//12. 13 14 17
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.168700, 0.454200, 0.003100);
        glTexCoord2f(0.430000, 0.596500);
        glVertex3f(0.103900, 0.457500, 0.059400);
        glTexCoord2f(0.385000, 0.622000);
        glVertex3f(0.119200, 0.295400, 0.030000);
        glTexCoord2f(0.356400, 0.528300);
	glEnd();
	//13. 17 10 13
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.119200, 0.295400, 0.030000);
        glTexCoord2f(0.356400, 0.528300);
        glVertex3f(0.173900, 0.307400, -0.027100);
        glTexCoord2f(0.399800, 0.513000);
        glVertex3f(0.168700, 0.454200, 0.003100);
        glTexCoord2f(0.430000, 0.596500);
	glEnd();
	//14. 18 19 20
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.047500, 0.481000, 0.007600);
        glTexCoord2f(0.563400, 0.565100);
        glVertex3f(0.036200, 0.522900, 0.021400);
        glTexCoord2f(0.573300, 0.585200);
        glVertex3f(0.060200, 0.558300, -0.035300);
        glTexCoord2f(0.542700, 0.616000);
	glEnd();
	//15. 20 21 18
	glBegin(GL_LINE_LOOP);
        glVertex3f(0.060200, 0.558300, -0.035300);
        glTexCoord2f(0.542700, 0.616000);
        glVertex3f(0.059100, 0.461200, -0.065500);
        glTexCoord2f(0.519700, 0.560100);
        glVertex3f(0.047500, 0.481000, 0.007600);
        glTexCoord2f(0.563400, 0.565100);
	glEnd();
	//16. 22 23 14
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.138500, 0.528400, 0.067200);
	    glTexCoord2f(0.421500, 0.654500);
	    glVertex3f(0.091700, 0.527400, 0.085700);
	    glTexCoord2f(0.394900, 0.664700);
	    glVertex3f(0.103900, 0.457500, 0.059400);
	    glTexCoord2f(0.385000, 0.622000);
	glEnd();
	//17. 14 13 22
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.103900, 0.457500, 0.059400);
	    glTexCoord2f(0.385000, 0.622000);
	    glVertex3f(0.168700, 0.454200, 0.003100);
	    glTexCoord2f(0.430000, 0.596500);
	    glVertex3f(0.138500, 0.528400, 0.067200);
	    glTexCoord2f(0.421500, 0.654500);
	glEnd();
	//18. 24 3 5
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	    glVertex3f(0.179500, 1.019800, 0.004200);
	    glTexCoord2f(0.567700, 0.902600);
	    glVertex3f(0.161200, 1.011700, 0.090200);
	    glTexCoord2f(0.518800, 0.917600);
	glEnd();
	// 19. 5 25 24
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.161200, 1.011700, 0.090200);
	    glTexCoord2f(0.518800, 0.917600);
	    glVertex3f(0.167900, 0.908700, 0.098100);
	    glTexCoord2f(0.493900, 0.863500);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	glEnd();
   //20. 26 27 18 
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.064800, 0.310200, -0.097300);
	    glTexCoord2f(0.488400, 0.474600);
	    glVertex3f(0.053900, 0.302200, -0.019200);
	    glTexCoord2f(0.533400, 0.463200);
	    glVertex3f(0.047500, 0.481000, 0.007600);
	    glTexCoord2f(0.563400, 0.565100);
	glEnd();

	//21.   18,   21,   26
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.047500, 0.481000, 0.007600);
	    glTexCoord2f(0.563400, 0.565100);
	    glVertex3f(0.059100, 0.461200, -0.065500);
	    glTexCoord2f(0.519700, 0.560100);
	    glVertex3f(0.064800, 0.310200, -0.097300);
	    glTexCoord2f(0.488400, 0.474600);
	glEnd();

    //22.   28,   29,   13
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	    glVertex3f(0.154500, 0.560300, 0.009600);
	    glTexCoord2f(0.463200, 0.653000);
	    glVertex3f(0.168700, 0.454200, 0.003100);
	    glTexCoord2f(0.430000, 0.596500);
	glEnd();

    //23.   13,   12,   28
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.168700, 0.454200, 0.003100);
	    glTexCoord2f(0.430000, 0.596500);
	    glVertex3f(0.147200, 0.463700, -0.075500);
	    glTexCoord2f(0.472700, 0.577400);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	glEnd();

	//24.   20,   28,   12
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.060200, 0.558300, -0.035300);
	    glTexCoord2f(0.542700, 0.616000);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	    glVertex3f(0.147200, 0.463700, -0.075500);
	    glTexCoord2f(0.472700, 0.577400);
	glEnd();

	//25.   12,   21,   20
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.147200, 0.463700, -0.075500);
	    glTexCoord2f(0.472700, 0.577400);
	    glVertex3f(0.059100, 0.461200, -0.065500);
	    glTexCoord2f(0.519700, 0.560100);
	    glVertex3f(0.060200, 0.558300, -0.035300);
	    glTexCoord2f(0.542700, 0.616000);
	glEnd();

	//26.   30,   23,   31
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.036200, 0.522900, 0.021400);
	    glTexCoord2f(0.346200, 0.668500);
	    glVertex3f(0.091700, 0.527400, 0.085700);
	    glTexCoord2f(0.394900, 0.664700);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	glEnd();

	//27.   31,   32,   30
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	    glVertex3f(0.033600, 0.589300, 0.030200);
	    glTexCoord2f(0.353500, 0.707200);
	    glVertex3f(0.036200, 0.522900, 0.021400);
	    glTexCoord2f(0.346200, 0.668500);
	glEnd();

	//28.   23,   22,   33
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.091700, 0.527400, 0.085700);
	    glTexCoord2f(0.394900, 0.664700);
	    glVertex3f(0.138500, 0.528400, 0.067200);
	    glTexCoord2f(0.421500, 0.654500);
	    glVertex3f(0.136600, 0.585600, 0.074400);
	    glTexCoord2f(0.432000, 0.685600);
	glEnd();

	//29.   33,   31,   23
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.136600, 0.585600, 0.074400);
	    glTexCoord2f(0.432000, 0.685600);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	    glVertex3f(0.091700, 0.527400, 0.085700);
	    glTexCoord2f(0.394900, 0.664700);
	glEnd();

	//30.   34,   35,   36 
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	    glVertex3f(0.143700, 0.875500, -0.065900);
	    glTexCoord2f(0.582500, 0.806300);
	glEnd();

	//31.   36,   37,   34
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.143700, 0.875500, -0.065900);
	    glTexCoord2f(0.582500, 0.806300);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	glEnd();

	//32.   38,   39,    1
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.088400, 0.983000, -0.120000);
	    glTexCoord2f(0.631800, 0.850400);
	    glVertex3f(0.000000, 0.991100, -0.114900);
	    glTexCoord2f(0.679500, 0.847600);
	    glVertex3f(0.085300, 1.111800, -0.061300);
	    glTexCoord2f(0.638400, 0.939600);
	glEnd();
	//33.    1,    0,   38
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.085300, 1.111800, -0.061300);
	    glTexCoord2f(0.638400, 0.939600);
	    glVertex3f(0.134000, 1.020300, -0.083900);
	    glTexCoord2f(0.611900, 0.886700);
	    glVertex3f(0.088400, 0.983000, -0.120000);
	    glTexCoord2f(0.631800, 0.850400);
	glEnd();

	//34.   28,   20,   34
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	    glVertex3f(0.060200, 0.558300, -0.035300);
	    glTexCoord2f(0.542700, 0.616000);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	glEnd();
	//35.   34,   37,   28
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	glEnd();
	//36.   20,   40,   41
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.060200, 0.558300, -0.035300);
	    glTexCoord2f(0.542700, 0.616000);
	    glVertex3f(0.033600, 0.589300, 0.030200);
	    glTexCoord2f(0.589200, 0.614800);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.639600, 0.680200);
	glEnd();
	//37.   41,   34,   20
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.639600, 0.680200);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	    glVertex3f(0.060200, 0.558300, -0.035300);
	    glTexCoord2f(0.542700, 0.616000);
	glEnd();

	//38.   29,   28,   37
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.154500, 0.560300, 0.009600);
	    glTexCoord2f(0.463200, 0.653000);
	    glVertex3f(0.137300, 0.567700, -0.043200);
	    glTexCoord2f(0.498300, 0.639600);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	glEnd();
	//39.   37,   42,   29
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	    glVertex3f(0.154500, 0.560300, 0.009600);
	    glTexCoord2f(0.463200, 0.653000);
	glEnd();

	//40.   33,   29,   42
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.136600, 0.585600, 0.074400);
	    glTexCoord2f(0.432000, 0.685600);
	    glVertex3f(0.154500, 0.560300, 0.009600);
	    glTexCoord2f(0.463200, 0.653000);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	glEnd();

	//41.   42,   43,   33
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	    glVertex3f(0.136600, 0.585600, 0.074400);
	    glTexCoord2f(0.432000, 0.685600);
	glEnd();

	//42.   32,   31,   44
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.033600, 0.589300, 0.030200);
	    glTexCoord2f(0.353500, 0.707200);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	glEnd();

	//43.   44,   45,   32
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.365100, 0.794600);
	    glVertex3f(0.033600, 0.589300, 0.030200);
	    glTexCoord2f(0.353500, 0.707200);
	glEnd();

	//44.   31,   33,   43
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	    glVertex3f(0.136600, 0.585600, 0.074400);
	    glTexCoord2f(0.432000, 0.685600);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	glEnd();

	//45.   43,   44,   31
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	    glVertex3f(0.077500, 0.582500, 0.089300);
	    glTexCoord2f(0.396300, 0.696800);
	glEnd();
	//46.   44,   46,   47
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	    glVertex3f(0.083600, 0.901900, 0.126700);
	    glTexCoord2f(0.446900, 0.878700);
	    glVertex3f(0.024800, 0.895100, 0.094200);
	    glTexCoord2f(0.410000, 0.886500);
	glEnd();

	//47.   47,   45,   44
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.024800, 0.895100, 0.094200);
	    glTexCoord2f(0.410000, 0.886500);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.365100, 0.794600);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	glEnd();

	//48.   46,   44,   43
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.083600, 0.901900, 0.126700);
	    glTexCoord2f(0.446900, 0.878700);
	    glVertex3f(0.074100, 0.726000, 0.111900);
	    glTexCoord2f(0.415300, 0.779600);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	glEnd();

	//49.   43,   25,   46
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	    glVertex3f(0.167900, 0.908700, 0.098100);
	    glTexCoord2f(0.493900, 0.863500);
	    glVertex3f(0.083600, 0.901900, 0.126700);
	    glTexCoord2f(0.446900, 0.878700);
	glEnd();

	//50.   25,   43,   42
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.167900, 0.908700, 0.098100);
	    glTexCoord2f(0.493900, 0.863500);
	    glVertex3f(0.148800, 0.733200, 0.099800);
	    glTexCoord2f(0.456500, 0.769100);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	glEnd();

	//51.   42,   24,   25
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	    glVertex3f(0.167900, 0.908700, 0.098100);
	    glTexCoord2f(0.493900, 0.863500);
	glEnd();
	//52.   24,   42,   37
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	    glVertex3f(0.178700, 0.740800, 0.020700);
	    glTexCoord2f(0.501900, 0.753700);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	glEnd();

	//53.   37,   36,   24
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.132600, 0.743600, -0.061700);
	    glTexCoord2f(0.549400, 0.734400);
	    glVertex3f(0.143700, 0.875500, -0.065900);
	    glTexCoord2f(0.582500, 0.806300);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	glEnd();

	//54.   48,   49,   38
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.148100, 0.947800, -0.083000);
	    glTexCoord2f(0.595300, 0.847300);
	    glVertex3f(0.072800, 0.922800, -0.112300);
	    glTexCoord2f(0.633800, 0.823000);
	    glVertex3f(0.088400, 0.983000, -0.120000);
	    glTexCoord2f(0.631800, 0.850400);
	glEnd();

	//55.   38,    0,   48
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.088400, 0.983000, -0.120000);
	    glTexCoord2f(0.631800, 0.850400);
	    glVertex3f(0.134000, 1.020300, -0.083900);
	    glTexCoord2f(0.611900, 0.886700);
	    glVertex3f(0.148100, 0.947800, -0.083000);
	    glTexCoord2f(0.595300, 0.847300);
	glEnd();

	//56.   49,   50,   39
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.072800, 0.922800, -0.112300);
	    glTexCoord2f(0.633800, 0.823000);
	    glVertex3f(0.000000, 0.924000, -0.095300);
	    glTexCoord2f(0.670400, 0.813800);
	    glVertex3f(0.000000, 0.991100, -0.114900);
	    glTexCoord2f(0.679500, 0.847600);
	glEnd();
	//57.   39,   38,   49
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 0.991100, -0.114900);
	    glTexCoord2f(0.679500, 0.847600);
	    glVertex3f(0.088400, 0.983000, -0.120000);
	    glTexCoord2f(0.631800, 0.850400);
	    glVertex3f(0.072800, 0.922800, -0.112300);
	    glTexCoord2f(0.633800, 0.823000);
	glEnd();

	//58.   48,    0,    3
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.148100, 0.947800, -0.083000);
	    glTexCoord2f(0.595300, 0.847300);
	    glVertex3f(0.134000, 1.020300, -0.083900);
	    glTexCoord2f(0.611900, 0.886700);
	    glVertex3f(0.179500, 1.019800, 0.004200);
	    glTexCoord2f(0.567700, 0.902600);
	glEnd();

	//59.    3,   24,   48
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.179500, 1.019800, 0.004200);
	    glTexCoord2f(0.567700, 0.902600);
	    glVertex3f(0.195000, 0.908900, 0.017900);
	    glTexCoord2f(0.537600, 0.844600);
	    glVertex3f(0.148100, 0.947800, -0.083000);
	    glTexCoord2f(0.595300, 0.847300);
	glEnd();

	//60.   36,   35,   49
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.143700, 0.875500, -0.065900);
	    glTexCoord2f(0.582500, 0.806300);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	    glVertex3f(0.072800, 0.922800, -0.112300);
	    glTexCoord2f(0.633800, 0.823000);
	glEnd();

	//61.   49,   48,   36
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.072800, 0.922800, -0.112300);
	    glTexCoord2f(0.633800, 0.823000);
	    glVertex3f(0.148100, 0.947800, -0.083000);
	    glTexCoord2f(0.595300, 0.847300);
	    glVertex3f(0.143700, 0.875500, -0.065900);
	    glTexCoord2f(0.582500, 0.806300);
	glEnd();

	//62.   47,   51,   52
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.024800, 0.895100, 0.094200);
	    glTexCoord2f(0.410000, 0.886500);
	    glVertex3f(0.000000, 0.897900, 0.104700);
	    glTexCoord2f(0.405000, 0.895300);
	    glVertex3f(0.000000, 0.888900, 0.018300);
	    glTexCoord2f(0.359800, 0.886200);
	glEnd();

	//63.   52,   53,   47
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 0.888900, 0.018300);
	    glTexCoord2f(0.359800, 0.886200);
	    glVertex3f(0.011600, 0.867800, 0.030400);
	    glTexCoord2f(0.368400, 0.873400);
	    glVertex3f(0.024800, 0.895100, 0.094200);
	    glTexCoord2f(0.410000, 0.886500);
	glEnd();

	//64.   54,   50,   35
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 0.888900, 0.018300);
	    glTexCoord2f(0.685900, 0.756900);
	    glVertex3f(0.000000, 0.924000, -0.095300);
	    glTexCoord2f(0.670400, 0.813800);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	glEnd();

	//65.   35,   55,   54
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	    glVertex3f(0.011600, 0.867800, 0.030400);
	    glTexCoord2f(0.679300, 0.744900);
	    glVertex3f(0.000000, 0.888900, 0.018300);
	    glTexCoord2f(0.685900, 0.756900);
	glEnd();

	//66.   35,   34,   41
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	    glVertex3f(0.055100, 0.754300, -0.065200);
	    glTexCoord2f(0.593500, 0.722500);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.639600, 0.680200);
	glEnd();

	//67.   41,   55,   35
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.015800, 0.734600, 0.039900);
	    glTexCoord2f(0.639600, 0.680200);
	    glVertex3f(0.011600, 0.867800, 0.030400);
	    glTexCoord2f(0.679300, 0.744900);
	    glVertex3f(0.054600, 0.874300, -0.071700);
	    glTexCoord2f(0.631000, 0.787100);
	glEnd();

	//68.   56,   57,   58
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.081300, 1.092000, 0.151200);
	    glTexCoord2f(0.543100, 0.024100);
	    glVertex3f(0.145200, 1.099900, 0.091500);
	    glTexCoord2f(0.604200, 0.025100);
	    glVertex3f(0.111500, 1.290100, 0.103800);
	    glTexCoord2f(0.597000, 0.166100);
	glEnd();

	//69.   58,   59,   56
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.111500, 1.290100, 0.103800);
	    glTexCoord2f(0.597000, 0.166100);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	    glVertex3f(0.081300, 1.092000, 0.151200);
	    glTexCoord2f(0.543100, 0.024100);
	glEnd();

	//70.   59,   60,   61
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	    glVertex3f(0.000000, 1.225000, 0.147100);
	    glTexCoord2f(0.495500, 0.139900);
	    glVertex3f(0.000000, 1.085600, 0.160800);
	    glTexCoord2f(0.485600, 0.023900);
	glEnd();
	//71.   61,   56,   59
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.085600, 0.160800);
	    glTexCoord2f(0.485600, 0.023900);
	    glVertex3f(0.081300, 1.092000, 0.151200);
	    glTexCoord2f(0.543100, 0.024100);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	glEnd();

	//72.   62,   63,   64
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.136900, 1.338600, 0.129500);
	    glTexCoord2f(0.599500, 0.206300);
	    glVertex3f(0.122900, 1.393800, 0.129500);
	    glTexCoord2f(0.594400, 0.242900);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	glEnd();

	//73.   64,   65,   62
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	    glVertex3f(0.050900, 1.356800, 0.164600);
	    glTexCoord2f(0.537200, 0.220000);
	    glVertex3f(0.136900, 1.338600, 0.129500);
	    glTexCoord2f(0.599500, 0.206300);
	glEnd();

	//74.   59,   58,   62
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	    glVertex3f(0.111500, 1.290100, 0.103800);
	    glTexCoord2f(0.597000, 0.166100);
	    glVertex3f(0.136900, 1.338600, 0.129500);
	    glTexCoord2f(0.599500, 0.206300);
	glEnd();

	//75.   62,   65,   59
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.136900, 1.338600, 0.129500);
	    glTexCoord2f(0.599500, 0.206300);
	    glVertex3f(0.050900, 1.356800, 0.164600);
	    glTexCoord2f(0.537200, 0.220000);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	glEnd();

	//76.   63,   62,   66
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.122900, 1.393800, 0.129500);
	    glTexCoord2f(0.594400, 0.242900);
	    glVertex3f(0.136900, 1.338600, 0.129500);
	    glTexCoord2f(0.599500, 0.206300);
	    glVertex3f(0.149700, 1.355400, 0.061600);
	    glTexCoord2f(0.645700, 0.215800);
	glEnd();

	//77.   66,   67,   63
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.149700, 1.355400, 0.061600);
	    glTexCoord2f(0.645700, 0.215800);
	    glVertex3f(0.137900, 1.422500, 0.080800);
	    glTexCoord2f(0.628900, 0.267300);
	    glVertex3f(0.122900, 1.393800, 0.129500);
	    glTexCoord2f(0.594400, 0.242900);
	glEnd();

	//78.   68,   69,   70
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.161200, 1.116700, 0.020700);
	    glTexCoord2f(0.019400, 0.033900);
	    glVertex3f(0.105800, 1.124800, -0.079300);
	    glTexCoord2f(0.091100, 0.045600);
	    glVertex3f(0.085500, 1.218500, -0.066500);
	    glTexCoord2f(0.096300, 0.129600);
	glEnd();

	//79.   70,   71,   68
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.085500, 1.218500, -0.066500);
	    glTexCoord2f(0.096300, 0.129600);
	    glVertex3f(0.133000, 1.221000, 0.007600);
	    glTexCoord2f(0.030800, 0.120700);
	    glVertex3f(0.161200, 1.116700, 0.020700);
	    glTexCoord2f(0.019400, 0.033900);
	glEnd();

	//80.   72,   73,   74
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.452000, -0.160900);
	    glTexCoord2f(0.150300, 0.294700);
	    glVertex3f(0.070700, 1.504600, -0.138100);
	    glTexCoord2f(0.105800, 0.324400);
	    glVertex3f(0.096500, 1.419500, -0.122000);
	    glTexCoord2f(0.085400, 0.267400);
	glEnd();

//	81.   74,   75,   72
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.096500, 1.419500, -0.122000);
	    glTexCoord2f(0.085400, 0.267400);
	    glVertex3f(0.000000, 1.368100, -0.107800);
	    glTexCoord2f(0.157500, 0.229300);
	    glVertex3f(0.000000, 1.452000, -0.160900);
	    glTexCoord2f(0.150300, 0.294700);
	glEnd();

//	82.   76,   77,   71
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.146700, 1.402600, -0.096200);
	    glTexCoord2f(0.050400, 0.255400);
	    glVertex3f(0.154600, 1.369400, -0.025600);
	    glTexCoord2f(0.016800, 0.213000);
	    glVertex3f(0.133000, 1.221000, 0.007600);
	    glTexCoord2f(0.030800, 0.120700);
	glEnd();

//	83.   71,   70,   76
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.133000, 1.221000, 0.007600);
	    glTexCoord2f(0.030800, 0.120700);
	    glVertex3f(0.085500, 1.218500, -0.066500);
	    glTexCoord2f(0.096300, 0.129600);
	    glVertex3f(0.146700, 1.402600, -0.096200);
	    glTexCoord2f(0.050400, 0.255400);
	glEnd();

//	84.   78,   64,   79
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.368100, 0.137700);
	    glTexCoord2f(0.498800, 0.231800);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	    glVertex3f(0.048500, 1.433500, 0.101900);
	    glTexCoord2f(0.543000, 0.295300);
	glEnd();

//	85.   79,   80,   78
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.048500, 1.433500, 0.101900);
	    glTexCoord2f(0.543000, 0.295300);
	    glVertex3f(0.000000, 1.416500, 0.101000);
	    glTexCoord2f(0.506600, 0.286700);
	    glVertex3f(0.000000, 1.368100, 0.137700);
	    glTexCoord2f(0.498800, 0.231800);
	glEnd();

//	86.   81,   82,   83
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.559200, -0.064100);
	    glTexCoord2f(0.144700, 0.406300);
	    glVertex3f(0.032800, 1.559100, -0.046700);
	    glTexCoord2f(0.114000, 0.411500);
	    glVertex3f(0.052400, 1.563700, -0.078800);
	    glTexCoord2f(0.106200, 0.385400);
	glEnd();

//	87.   83,   84,   81
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.052400, 1.563700, -0.078800);
	    glTexCoord2f(0.106200, 0.385400);
	    glVertex3f(0.000000, 1.560200, -0.089800);
	    glTexCoord2f(0.146000, 0.386500);
	    glVertex3f(0.000000, 1.559200, -0.064100);
	    glTexCoord2f(0.144700, 0.406300);
	glEnd();

//	88.   85,   86,   80
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.537400, 0.375800);
	    glVertex3f(0.000000, 1.507400, 0.046200);
	    glTexCoord2f(0.513300, 0.368700);
	    glVertex3f(0.000000, 1.416500, 0.101000);
	    glTexCoord2f(0.506600, 0.286700);
	glEnd();

//	89.   80,   79,   85
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.416500, 0.101000);
	    glTexCoord2f(0.506600, 0.286700);
	    glVertex3f(0.048500, 1.433500, 0.101900);
	    glTexCoord2f(0.543000, 0.295300);
	    glVertex3f(0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.537400, 0.375800);
	glEnd();

//	90.   57,   87,   88
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.145200, 1.099900, 0.091500);
	    glTexCoord2f(0.604200, 0.025100);
	    glVertex3f(0.161200, 1.116700, 0.020700);
	    glTexCoord2f(0.657700, 0.032800);
	    glVertex3f(0.133000, 1.221000, 0.007600);
	    glTexCoord2f(0.669500, 0.126100);
	glEnd();

//	91.   88,   58,   57
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.133000, 1.221000, 0.007600);
	    glTexCoord2f(0.669500, 0.126100);
	    glVertex3f(0.111500, 1.290100, 0.103800);
	    glTexCoord2f(0.597000, 0.166100);
	    glVertex3f(0.145200, 1.099900, 0.091500);
	    glTexCoord2f(0.604200, 0.025100);
	glEnd();

//	92.   89,   70,   69
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.231900, -0.084500);
	    glTexCoord2f(0.166800, 0.143000);
	    glVertex3f(0.085500, 1.218500, -0.066500);
	    glTexCoord2f(0.096300, 0.129600);
	    glVertex3f(0.105800, 1.124800, -0.079300);
	    glTexCoord2f(0.091100, 0.045600);
	glEnd();

//	93.   69,   90,   89
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.105800, 1.124800, -0.079300);
	    glTexCoord2f(0.091100, 0.045600);
	    glVertex3f(0.000000, 1.126500, -0.093300);
	    glTexCoord2f(0.169000, 0.045600);
	    glVertex3f(0.000000, 1.231900, -0.084500);
	    glTexCoord2f(0.166800, 0.143000);
	glEnd();

//	94.   91,   92,   93
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.146600, 1.524500, 0.046400);
	    glTexCoord2f(0.644200, 0.347500);
	    glVertex3f(0.121400, 1.558800, -0.054000);
	    glTexCoord2f(0.652600, 0.415200);
	    glVertex3f(0.032800, 1.559100, -0.046700);
	    glTexCoord2f(0.586400, 0.443200);
	glEnd();

//	95.   94,   82,   95
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.049100, 1.542500, -0.004900);
	    glTexCoord2f(0.080400, 0.412900);
	    glVertex3f(0.032800, 1.559100, -0.046700);
	    glTexCoord2f(0.114000, 0.411500);
	    glVertex3f(0.033900, 1.610900, -0.035400);
	    glTexCoord2f(0.116200, 0.449800);
	glEnd();

//	96.   95,   96,   94
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.033900, 1.610900, -0.035400);
	    glTexCoord2f(0.116200, 0.449800);
	    glVertex3f(0.049200, 1.611300, 0.003500);
	    glTexCoord2f(0.086900, 0.458700);
	    glVertex3f(0.049100, 1.542500, -0.004900);
	    glTexCoord2f(0.080400, 0.412900);
	glEnd();

//	97.   97,   95,   82
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.000000, 1.610000, -0.048000);
	    glTexCoord2f(0.142400, 0.445800);
	    glVertex3f(0.033900, 1.610900, -0.035400);
	    glTexCoord2f(0.116200, 0.449800);
	    glVertex3f(0.032800, 1.559100, -0.046700);
	    glTexCoord2f(0.114000, 0.411500);
	glEnd();

//	98.   82,   81,   97
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.032800, 1.559100, -0.046700);
	    glTexCoord2f(0.114000, 0.411500);
	    glVertex3f(0.000000, 1.559200, -0.064100);
	    glTexCoord2f(0.144700, 0.406300);
	    glVertex3f(-0.000000, 1.610000, -0.048000);
	    glTexCoord2f(0.142400, 0.445800);
	glEnd();

//	99.   98,   86,   85
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.000000, 1.582400, 0.054900);
	    glTexCoord2f(0.517200, 0.427900);
	    glVertex3f(0.000000, 1.507400, 0.046200);
	    glTexCoord2f(0.513300, 0.368700);
	    glVertex3f(0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.537400, 0.375800);
	glEnd();

//	100.   85,   99,   98
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.537400, 0.375800);
	    glVertex3f(0.029000, 1.591000, 0.046800);
	    glTexCoord2f(0.535100, 0.436200);
	    glVertex3f(-0.000000, 1.582400, 0.054900);
	    glTexCoord2f(0.517200, 0.427900);
	glEnd();

//	101.    4,    9,   51
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.087900, 0.997000, 0.133900);
	    glTexCoord2f(0.472400, 0.929900);
	    glVertex3f(0.000000, 0.989700, 0.142800);
	    glTexCoord2f(0.427200, 0.949000);
	    glVertex3f(0.000000, 0.897900, 0.104700);
	    glTexCoord2f(0.405000, 0.895300);
	glEnd();

//	102.   51,   47,    4
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 0.897900, 0.104700);
	    glTexCoord2f(0.405000, 0.895300);
	    glVertex3f(0.024800, 0.895100, 0.094200);
	    glTexCoord2f(0.410000, 0.886500);
	    glVertex3f(0.087900, 0.997000, 0.133900);
	    glTexCoord2f(0.472400, 0.929900);
	glEnd();

//	103.  100,  101,  102
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.163600, 1.405300, 0.046200);
	    glTexCoord2f(0.661700, 0.255700);
	    glVertex3f(0.200000, 1.496400, -0.003200);
	    glTexCoord2f(0.695700, 0.331200);
	    glVertex3f(0.148000, 1.505700, 0.018300);
	    glTexCoord2f(0.667900, 0.346000);
	glEnd();

//	104.  102,   67,  100
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.148000, 1.505700, 0.018300);
	    glTexCoord2f(0.667900, 0.346000);
	    glVertex3f(0.137900, 1.422500, 0.080800);
	    glTexCoord2f(0.628900, 0.267300);
	    glVertex3f(0.163600, 1.405300, 0.046200);
	    glTexCoord2f(0.661700, 0.255700);
	glEnd();


//	401.  242,  243,  246
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.490400, 0.378900);
	    glVertex3f(-0.049100, 1.542500, -0.004900);
	    glTexCoord2f(0.454700, 0.414500);
	    glVertex3f(-0.123600, 1.462900, 0.091200);
	    glTexCoord2f(0.414300, 0.312400);
	glEnd();

//	402.  246,  239,  242
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.123600, 1.462900, 0.091200);
	    glTexCoord2f(0.414300, 0.312400);
	    glVertex3f(-0.048500, 1.433500, 0.101900);
	    glTexCoord2f(0.473700, 0.299100);
	    glVertex3f(-0.022000, 1.516300, 0.040200);
	    glTexCoord2f(0.490400, 0.378900);
	glEnd();

//	403.  301,  303,  253
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.153500, 1.525500, -0.066500);
	    glTexCoord2f(0.352700, 0.422400);
	    glVertex3f(-0.195700, 1.491700, -0.080700);
	    glTexCoord2f(0.305500, 0.407300);
	    glVertex3f(-0.200000, 1.496400, -0.003200);
	    glTexCoord2f(0.327600, 0.356000);
	glEnd();

//	404.  253,  252,  301
	glBegin(GL_LINE_LOOP);
	    glVertex3f(-0.200000, 1.496400, -0.003200);
	    glTexCoord2f(0.327600, 0.356000);
	    glVertex3f(-0.155300, 1.510500, 0.004500);
	    glTexCoord2f(0.357500, 0.364700);
	    glVertex3f(-0.153500, 1.525500, -0.066500);
	    glTexCoord2f(0.352700, 0.422400);
	glEnd();

//	405.   59,   65,   64
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	    glVertex3f(0.050900, 1.356800, 0.164600);
	    glTexCoord2f(0.537200, 0.220000);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	glEnd();

//	406.   64,   78,   59
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	    glVertex3f(0.000000, 1.368100, 0.137700);
	    glTexCoord2f(0.498800, 0.231800);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	glEnd();

//	407.   60,   59,   78
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.000000, 1.225000, 0.147100);
	    glTexCoord2f(0.495500, 0.139900);
	    glVertex3f(0.033800, 1.308400, 0.143300);
	    glTexCoord2f(0.526400, 0.183800);
	    glVertex3f(0.000000, 1.368100, 0.137700);
	    glTexCoord2f(0.498800, 0.231800);
	glEnd();

//	408.   79,   64,  162
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.048500, 1.433500, 0.101900);
	    glTexCoord2f(0.543000, 0.295300);
	    glVertex3f(0.082300, 1.404800, 0.155200);
	    glTexCoord2f(0.559400, 0.251000);
	    glVertex3f(0.121700, 1.455500, 0.096800);
	    glTexCoord2f(0.608400, 0.296300);
	glEnd();

//	409.  134,  135,  115
	glBegin(GL_LINE_LOOP);
	    glVertex3f(0.049200, 1.611300, 0.003500);
	    glTexCoord2f(0.750100, 0.163400);
	    glVertex3f(0.033900, 1.610900, -0.035400);
	    glTexCoord2f(0.740100, 0.115600);
	    glVertex3f(0.083600, 1.624900, -0.019600);
	    glTexCoord2f(0.785300, 0.141200);
	glEnd();

//	410.  163,   99,   85
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.578900, 0.408900);
	glVertex3f(0.029000, 1.591000, 0.046800);
	glTexCoord2f(0.535100, 0.436200);
	glVertex3f(0.022000, 1.516300, 0.040200);
	glTexCoord2f(0.537400, 0.375800);
	glEnd();

//	411.   14,   23,   30
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.103900, 0.457500, 0.059400);
	glTexCoord2f(0.385000, 0.622000);
	glVertex3f(0.091700, 0.527400, 0.085700);
	glTexCoord2f(0.394900, 0.664700);
	glVertex3f(0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.346200, 0.668500);
	glEnd();

//	412.   14,   30,   15
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.103900, 0.457500, 0.059400);
	glTexCoord2f(0.385000, 0.622000);
	glVertex3f(0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.346200, 0.668500);
	glVertex3f(0.047500, 0.481000, 0.007600);
	glTexCoord2f(0.342700, 0.643800);
	glEnd();

//	413.   40,   20,   19
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.033600, 0.589300, 0.030200);
	glTexCoord2f(0.589200, 0.614800);
	glVertex3f(0.060200, 0.558300, -0.035300);
	glTexCoord2f(0.542700, 0.616000);
	glVertex3f(0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.573300, 0.585200);
	glEnd();

//	414.   22,   29,   33
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.138500, 0.528400, 0.067200);
	glTexCoord2f(0.421500, 0.654500);
	glVertex3f(0.154500, 0.560300, 0.009600);
	glTexCoord2f(0.463200, 0.653000);
	glVertex3f(0.136600, 0.585600, 0.074400);
	glTexCoord2f(0.432000, 0.685600);
	glEnd();

//	415.   66,   58,   88
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.645700, 0.215800);
	glVertex3f(0.111500, 1.290100, 0.103800);
	glTexCoord2f(0.597000, 0.166100);
	glVertex3f(0.133000, 1.221000, 0.007600);
	glTexCoord2f(0.669500, 0.126100);
	glEnd();

//	416.   47,   53,   45
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.024800, 0.895100, 0.094200);
	glTexCoord2f(0.410000, 0.886500);
	glVertex3f(0.011600, 0.867800, 0.030400);
	glTexCoord2f(0.368400, 0.873400);
	glVertex3f(0.015800, 0.734600, 0.039900);
	glTexCoord2f(0.365100, 0.794600);
	glEnd();

//	417.   36,   48,   24
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.143700, 0.875500, -0.065900);
	glTexCoord2f(0.582500, 0.806300);
	glVertex3f(0.148100, 0.947800, -0.083000);
	glTexCoord2f(0.595300, 0.847300);
	glVertex3f(0.195000, 0.908900, 0.017900);
	glTexCoord2f(0.537600, 0.844600);
	glEnd();

//	418.    4,   47,   46
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087900, 0.997000, 0.133900);
	glTexCoord2f(0.472400, 0.929900);
	glVertex3f(0.024800, 0.895100, 0.094200);
	glTexCoord2f(0.410000, 0.886500);
	glVertex3f(0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.446900, 0.878700);
	glEnd();

//	419.   22,   13,   29
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.138500, 0.528400, 0.067200);
	glTexCoord2f(0.421500, 0.654500);
	glVertex3f(0.168700, 0.454200, 0.003100);
	glTexCoord2f(0.430000, 0.596500);
	glVertex3f(0.154500, 0.560300, 0.009600);
	glTexCoord2f(0.463200, 0.653000);
	glEnd();

//	420.   35,   50,   49
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.054600, 0.874300, -0.071700);
	glTexCoord2f(0.631000, 0.787100);
	glVertex3f(0.000000, 0.924000, -0.095300);
	glTexCoord2f(0.670400, 0.813800);
	glVertex3f(0.072800, 0.922800, -0.112300);
	glTexCoord2f(0.633800, 0.823000);
	glEnd();

//	421.    5,   46,   25
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.161200, 1.011700, 0.090200);
	glTexCoord2f(0.518800, 0.917600);
	glVertex3f(0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.446900, 0.878700);
	glVertex3f(0.167900, 0.908700, 0.098100);
	glTexCoord2f(0.493900, 0.863500);
	glEnd();

//	422.   46,    5,    4
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.446900, 0.878700);
	glVertex3f(0.161200, 1.011700, 0.090200);
	glTexCoord2f(0.518800, 0.917600);
	glVertex3f(0.087900, 0.997000, 0.133900);
	glTexCoord2f(0.472400, 0.929900);
	glEnd();

//	423.   58,   66,   62
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.111500, 1.290100, 0.103800);
	glTexCoord2f(0.597000, 0.166100);
	glVertex3f(0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.645700, 0.215800);
	glVertex3f(0.136900, 1.338600, 0.129500);
	glTexCoord2f(0.599500, 0.206300);
	glEnd();

//	424.   66,  100,   67
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.645700, 0.215800);
	glVertex3f(0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.661700, 0.255700);
	glVertex3f(0.137900, 1.422500, 0.080800);
	glTexCoord2f(0.628900, 0.267300);
	glEnd();

//	425.  103,  106,  119
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.014800, 1.693400, 0.102300);
	glTexCoord2f(0.832700, 0.257600);
	glVertex3f(-0.000000, 1.717900, 0.120300);
	glTexCoord2f(0.854600, 0.275800);
	glVertex3f(-0.000000, 1.697500, 0.117900);
	glTexCoord2f(0.836200, 0.275900);
	glEnd();

//	426.  118,  117,  131
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.018500, 1.652400, 0.108500);
	glTexCoord2f(0.802400, 0.258600);
	glVertex3f(-0.000000, 1.656300, 0.139500);
	glTexCoord2f(0.810500, 0.276000);
	glVertex3f(-0.000000, 1.643800, 0.118000);
	glTexCoord2f(0.796800, 0.276000);
	glEnd();

//	427.   70,   74,   76
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.085500, 1.218500, -0.066500);
	glTexCoord2f(0.096300, 0.129600);
	glVertex3f(0.096500, 1.419500, -0.122000);
	glTexCoord2f(0.085400, 0.267400);
	glVertex3f(0.146700, 1.402600, -0.096200);
	glTexCoord2f(0.050400, 0.255400);
	glEnd();

//	428.  163,  304,   99
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.578900, 0.408900);
	glVertex3f(0.049200, 1.611300, 0.003500);
	glTexCoord2f(0.569600, 0.456800);
	glVertex3f(0.029000, 1.591000, 0.046800);
	glTexCoord2f(0.535100, 0.436200);
	glEnd();

//	429.   83,  159,   73
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.052400, 1.563700, -0.078800);
	glTexCoord2f(0.106200, 0.385400);
	glVertex3f(0.121400, 1.558800, -0.054000);
	glTexCoord2f(0.052300, 0.381300);
	glVertex3f(0.070700, 1.504600, -0.138100);
	glTexCoord2f(0.105800, 0.324400);
	glEnd();
//	430.   39,  305,    1
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.000000, 0.991100, -0.114900);
	glTexCoord2f(0.679500, 0.847600);
	glVertex3f(0.000000, 1.115200, -0.064300);
	glTexCoord2f(0.690100, 0.931300);
	glVertex3f(0.085300, 1.111800, -0.061300);
	glTexCoord2f(0.638400, 0.939600);
	glEnd();

//	431.   64,  161,  162
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.082300, 1.404800, 0.155200);
	glTexCoord2f(0.559400, 0.251000);
	glVertex3f(0.119300, 1.446700, 0.082600);
	glTexCoord2f(0.609500, 0.278700);
	glVertex3f(0.121700, 1.455500, 0.096800);
	glTexCoord2f(0.608400, 0.296300);
	glEnd();

//	432.  161,   67,  102
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.119300, 1.446700, 0.082600);
	glTexCoord2f(0.609500, 0.278700);
	glVertex3f(0.137900, 1.422500, 0.080800);
	glTexCoord2f(0.628900, 0.267300);
	glVertex3f(0.148000, 1.505700, 0.018300);
	glTexCoord2f(0.667900, 0.346000);
	glEnd();

//	433.  116,  114,  107
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.061000, 1.658600, -0.070300);
	glTexCoord2f(0.798900, 0.095700);
	glVertex3f(0.050000, 1.728000, -0.063400);
	glTexCoord2f(0.855200, 0.076200);
	glVertex3f(0.101300, 1.694900, -0.011200);
	glTexCoord2f(0.833300, 0.142700);
	glEnd();

//	434.  110,  134,  115
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.098200, 1.656100, 0.034300);
	glTexCoord2f(0.810900, 0.172200);
	glVertex3f(0.049200, 1.611300, 0.003500);
	glTexCoord2f(0.750100, 0.163400);
	glVertex3f(0.083600, 1.624900, -0.019600);
	glTexCoord2f(0.785300, 0.141200);
	glEnd();

//	435.  135,  116,  115
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.033900, 1.610900, -0.035400);
	glTexCoord2f(0.740100, 0.115600);
	glVertex3f(0.061000, 1.658600, -0.070300);
	glTexCoord2f(0.798900, 0.095700);
	glVertex3f(0.083600, 1.624900, -0.019600);
	glTexCoord2f(0.785300, 0.141200);
	glEnd();

//	436.  239,  246,  227
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.048500, 1.433500, 0.101900);
	glTexCoord2f(0.473700, 0.299100);
	glVertex3f(-0.123600, 1.462900, 0.091200);
	glTexCoord2f(0.414300, 0.312400);
	glVertex3f(-0.082300, 1.404800, 0.155200);
	glTexCoord2f(0.447600, 0.259600);
	glEnd();

//	437.  279,  266,  281
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.050800, 1.617800, 0.001500);
	glTexCoord2f(0.755900, 0.392900);
	glVertex3f(-0.077000, 1.628400, -0.020900);
	glTexCoord2f(0.784500, 0.414500);
	glVertex3f(-0.033900, 1.610900, -0.035400);
	glTexCoord2f(0.742400, 0.439300);
	glEnd();

//	438.  243,  242,  250
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.454700, 0.414500);
	glVertex3f(-0.022000, 1.516300, 0.040200);
	glTexCoord2f(0.490400, 0.378900);
	glVertex3f(-0.029000, 1.591000, 0.046800);
	glTexCoord2f(0.499300, 0.437400);
	glEnd();

//	439.  179,  195,  188
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.103900, 0.457500, 0.059400);
	glTexCoord2f(0.243500, 0.594400);
	glVertex3f(-0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.296400, 0.624300);
	glVertex3f(-0.091700, 0.527400, 0.085700);
	glTexCoord2f(0.249400, 0.637900);
	glEnd();

//	440.  179,  182,  195
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.103900, 0.457500, 0.059400);
	glTexCoord2f(0.243500, 0.594400);
	glVertex3f(-0.047500, 0.481000, 0.007600);
	glTexCoord2f(0.291100, 0.599900);
	glVertex3f(-0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.296400, 0.624300);
	glEnd();

//	441.  206,  186,  185
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.033600, 0.589300, 0.030200);
	glTexCoord2f(0.049700, 0.659300);
	glVertex3f(-0.036200, 0.522900, 0.021400);
	glTexCoord2f(0.053700, 0.626300);
	glVertex3f(-0.060200, 0.558300, -0.035300);
	glTexCoord2f(0.093600, 0.644000);
	glEnd();

//	442.  187,  198,  194
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.138500, 0.528400, 0.067200);
	glTexCoord2f(0.220500, 0.637500);
	glVertex3f(-0.136600, 0.585600, 0.074400);
	glTexCoord2f(0.221900, 0.670500);
	glVertex3f(-0.154500, 0.560300, 0.009600);
	glTexCoord2f(0.181200, 0.650600);
	glEnd();

//	443.  230,  232,  223
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.357500, 0.232400);
	glVertex3f(-0.133000, 1.221000, 0.007600);
	glTexCoord2f(0.313800, 0.145200);
	glVertex3f(-0.109500, 1.278500, 0.104000);
	glTexCoord2f(0.397400, 0.169700);
	glEnd();

//	444.  211,  209,  216
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.024800, 0.895100, 0.094200);
	glTexCoord2f(0.313400, 0.850400);
	glVertex3f(-0.015800, 0.734600, 0.039900);
	glTexCoord2f(0.320900, 0.749500);
	glVertex3f(-0.011600, 0.867800, 0.030400);
	glTexCoord2f(0.346100, 0.823700);
	glEnd();

//	445.  201,  189,  213
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.143700, 0.875500, -0.065900);
	glTexCoord2f(0.123400, 0.837400);
	glVertex3f(-0.195000, 0.908900, 0.017900);
	glTexCoord2f(0.178400, 0.856400);
	glVertex3f(-0.148100, 0.961900, -0.083000);
	glTexCoord2f(0.124200, 0.878200);
	glEnd();

//	446.  169,  212,  211
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.087900, 0.997000, 0.133900);
	glTexCoord2f(0.269700, 0.913300);
	glVertex3f(-0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.274800, 0.856500);
	glVertex3f(-0.024800, 0.895100, 0.094200);
	glTexCoord2f(0.313400, 0.850400);
	glEnd();

//	447.  187,  194,  176
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.138500, 0.528400, 0.067200);
	glTexCoord2f(0.220500, 0.637500);
	glVertex3f(-0.154500, 0.560300, 0.009600);
	glTexCoord2f(0.181200, 0.650600);
	glVertex3f(-0.168700, 0.454200, 0.003100);
	glTexCoord2f(0.192900, 0.586400);
	glEnd();

//	448.  202,  214,  215
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.054600, 0.874300, -0.071700);
	glTexCoord2f(0.069500, 0.834900);
	glVertex3f(-0.072800, 0.922800, -0.112300);
	glTexCoord2f(0.080900, 0.872100);
	glVertex3f(0.000000, 0.924000, -0.095300);
	glTexCoord2f(0.041800, 0.874400);
	glEnd();

//	449.  172,  190,  212
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.161200, 1.011700, 0.090200);
	glTexCoord2f(0.221900, 0.917900);
	glVertex3f(-0.167900, 0.908700, 0.098100);
	glTexCoord2f(0.225700, 0.858400);
	glVertex3f(-0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.274800, 0.856500);
	glEnd();

//	450.  212,  169,  172
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.083600, 0.901900, 0.126700);
	glTexCoord2f(0.274800, 0.856500);
	glVertex3f(-0.087900, 0.997000, 0.133900);
	glTexCoord2f(0.269700, 0.913300);
	glVertex3f(-0.161200, 1.011700, 0.090200);
	glTexCoord2f(0.221900, 0.917900);
	glEnd();

//	451.  223,  225,  230
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.109500, 1.278500, 0.104000);
	glTexCoord2f(0.397400, 0.169700);
	glVertex3f(-0.132100, 1.343700, 0.131600);
	glTexCoord2f(0.406000, 0.220900);
	glVertex3f(-0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.357500, 0.232400);
	glEnd();

//	452.  230,  229,  251
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.149700, 1.355400, 0.061600);
	glTexCoord2f(0.357500, 0.232400);
	glVertex3f(-0.137900, 1.422500, 0.080800);
	glTexCoord2f(0.382200, 0.281900);
	glVertex3f(-0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.350300, 0.274100);
	glEnd();

//	453.  256,  119,  106
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.014800, 1.693400, 0.102300);
	glTexCoord2f(0.832900, 0.294200);
	glVertex3f(-0.000000, 1.697500, 0.117900);
	glTexCoord2f(0.836200, 0.275900);
	glVertex3f(-0.000000, 1.717900, 0.120300);
	glTexCoord2f(0.854600, 0.275800);
	glEnd();

//	454.  267,  131,  117
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.018600, 1.652400, 0.108500);
	glTexCoord2f(0.802500, 0.293400);
	glVertex3f(-0.000000, 1.643800, 0.118000);
	glTexCoord2f(0.796800, 0.276000);
	glVertex3f(-0.000000, 1.656300, 0.139500);
	glTexCoord2f(0.810500, 0.276000);
	glEnd();


//	455.  233,  237,  235
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.085500, 1.218500, -0.066500);
	glTexCoord2f(0.240100, 0.141900);
	glVertex3f(-0.146700, 1.402600, -0.096200);
	glTexCoord2f(0.255000, 0.271600);
	glVertex3f(-0.096500, 1.419500, -0.122000);
	glTexCoord2f(0.217400, 0.279500);
	glEnd();

//	456.  243,  250,  306
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.454700, 0.414500);
	glVertex3f(-0.029000, 1.591000, 0.046800);
	glTexCoord2f(0.499300, 0.437400);
	glVertex3f(-0.050800, 1.617800, 0.001500);
	glTexCoord2f(0.466600, 0.466900);
	glEnd();

//	457.  240,  236,  299
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.047800, 1.562000, -0.075700);
	glTexCoord2f(0.185300, 0.390000);
	glVertex3f(-0.070700, 1.504600, -0.138100);
	glTexCoord2f(0.193400, 0.330800);
	glVertex3f(-0.121400, 1.558800, -0.054000);
	glTexCoord2f(0.239600, 0.393400);
	glEnd();

//	458.  204,  168,  307
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.000000, 0.991100, -0.114900);
	glTexCoord2f(0.046000, 0.911500);
	glVertex3f(-0.085300, 1.111800, -0.061300);
	glTexCoord2f(0.118900, 0.981500);
	glVertex3f(0.000000, 1.115200, -0.064300);
	glTexCoord2f(0.067900, 0.992900);
	glEnd();

//	459.  227,  246,  302
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.082300, 1.404800, 0.155200);
	glTexCoord2f(0.447600, 0.259600);
	glVertex3f(-0.123600, 1.462900, 0.091200);
	glTexCoord2f(0.414300, 0.312400);
	glVertex3f(-0.120000, 1.436100, 0.092000);
	glTexCoord2f(0.405200, 0.290800);
	glEnd();

//	460.  302,  252,  229
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.120000, 1.436100, 0.092000);
	glTexCoord2f(0.405200, 0.290800);
	glVertex3f(-0.155300, 1.510500, 0.004500);
	glTexCoord2f(0.357500, 0.364700);
	glVertex3f(-0.137900, 1.422500, 0.080800);
	glTexCoord2f(0.382200, 0.281900);
	glEnd();

//	461.  265,  257,  264
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.065800, 1.666000, -0.074000);
	glTexCoord2f(0.808500, 0.459100);
	glVertex3f(-0.101400, 1.694900, -0.011200);
	glTexCoord2f(0.836000, 0.408500);
	glVertex3f(-0.052000, 1.737600, -0.071300);
	glTexCoord2f(0.867300, 0.481200);
	glEnd();

//	462.  258,  266,  279
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.101400, 1.666900, 0.033300);
	glTexCoord2f(0.819300, 0.381800);
	glVertex3f(-0.077000, 1.628400, -0.020900);
	glTexCoord2f(0.784500, 0.414500);
	glVertex3f(-0.050800, 1.617800, 0.001500);
	glTexCoord2f(0.755900, 0.392900);
	glEnd();

//	463.  281,  266,  265
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.033900, 1.610900, -0.035400);
	glTexCoord2f(0.742400, 0.439300);
	glVertex3f(-0.077000, 1.628400, -0.020900);
	glTexCoord2f(0.784500, 0.414500);
	glVertex3f(-0.065800, 1.666000, -0.074000);
	glTexCoord2f(0.808500, 0.459100);
	glEnd();

//	464.  159,   83,   82
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.121400, 1.558800, -0.054000);
	glTexCoord2f(0.052300, 0.381300);
	glVertex3f(0.052400, 1.563700, -0.078800);
	glTexCoord2f(0.106200, 0.385400);
	glVertex3f(0.032800, 1.559100, -0.046700);
	glTexCoord2f(0.114000, 0.411500);
	glEnd();

//	465.  241,  240,  299
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.032800, 1.559100, -0.046700);
	glTexCoord2f(0.174300, 0.414800);
	glVertex3f(-0.047800, 1.562000, -0.075700);
	glTexCoord2f(0.185300, 0.390000);
	glVertex3f(-0.121400, 1.558800, -0.054000);
	glTexCoord2f(0.239600, 0.393400);
	glEnd();

//	466.  222,   60,   78
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.036100, 1.305900, 0.139000);
	glTexCoord2f(0.470000, 0.186000);
	glVertex3f(0.000000, 1.225000, 0.147100);
	glTexCoord2f(0.495500, 0.139900);
	glVertex3f(0.000000, 1.368100, 0.137700);
	glTexCoord2f(0.498800, 0.231800);
	glEnd();

//	467.  163,  162,   91
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.578900, 0.408900);
	glVertex3f(0.121700, 1.455500, 0.096800);
	glTexCoord2f(0.608400, 0.296300);
	glVertex3f(0.146600, 1.524500, 0.046400);
	glTexCoord2f(0.644200, 0.347500);
	glEnd();

//	468.   91,   93,  163
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.146600, 1.524500, 0.046400);
	glTexCoord2f(0.644200, 0.347500);
	glVertex3f(0.032800, 1.559100, -0.046700);
	glTexCoord2f(0.586400, 0.443200);
	glVertex3f(0.049100, 1.542500, -0.004900);
	glTexCoord2f(0.578900, 0.408900);
	glEnd();

//	469.  244,  300,  245
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.032800, 1.559100, -0.046700);
	glTexCoord2f(0.452300, 0.450400);
	glVertex3f(-0.121400, 1.558800, -0.054000);
	glTexCoord2f(0.383500, 0.429800);
	glVertex3f(-0.153200, 1.532000, 0.010100);
	glTexCoord2f(0.373700, 0.362000);
	glEnd();

//	470.  308,  309,  310
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.172200, 0.000300, 0.031200);
	glTexCoord2f(0.682300, 0.992200);
	glVertex3f(0.073400, 0.000300, 0.050300);
	glTexCoord2f(0.676300, 0.945000);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.743500, 0.952300);
	glEnd();

//	471.  310,  311,  308
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.743500, 0.952300);
	glVertex3f(0.135800, 0.000300, -0.099100);
	glTexCoord2f(0.742600, 0.978500);
	glVertex3f(0.172200, 0.000300, 0.031200);
	glTexCoord2f(0.682300, 0.992200);
	glEnd();

//	472.  312,  313,  314
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.568800, 0.514100);
	glVertex3f(0.073400, 0.000300, 0.050300);
	glTexCoord2f(0.622600, 0.466800);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glEnd();

//	473.  314,  315,  312
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glVertex3f(0.070300, 0.104400, -0.024700);
	glTexCoord2f(0.631500, 0.524900);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.568800, 0.514100);
	glEnd();

//	474.  316,  317,  318
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.130600, 0.095700, -0.095000);
	glTexCoord2f(0.736700, 0.557700);
	glVertex3f(0.153500, 0.312400, -0.103600);
	glTexCoord2f(0.689200, 0.656400);
	glVertex3f(0.173900, 0.307400, -0.027100);
	glTexCoord2f(0.658400, 0.636200);
	glEnd();

//	475.  318,  319,  316
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.173900, 0.307400, -0.027100);
	glTexCoord2f(0.658400, 0.636200);
	glVertex3f(0.148000, 0.084500, -0.031200);
	glTexCoord2f(0.705600, 0.532300);
	glVertex3f(0.130600, 0.095700, -0.095000);
	glTexCoord2f(0.736700, 0.557700);
	glEnd();

//	476.  320,  321,  322
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087800, 0.097800, -0.089200);
	glTexCoord2f(0.759600, 0.570700);
	glVertex3f(0.070300, 0.104400, -0.024700);
	glTexCoord2f(0.790300, 0.587600);
	glVertex3f(0.053900, 0.302200, -0.019200);
	glTexCoord2f(0.766700, 0.682900);
	glEnd();

//	477.  322,  323,  320
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.053900, 0.302200, -0.019200);
	glTexCoord2f(0.766700, 0.682900);
	glVertex3f(0.064800, 0.310200, -0.097300);
	glTexCoord2f(0.728300, 0.674500);
	glVertex3f(0.087800, 0.097800, -0.089200);
	glTexCoord2f(0.759600, 0.570700);
	glEnd();

//	478.  316,  324,  325
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.130600, 0.095700, -0.095000);
	glTexCoord2f(0.736700, 0.557700);
	glVertex3f(0.135800, 0.000300, -0.099100);
	glTexCoord2f(0.760800, 0.519000);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.784000, 0.527400);
	glEnd();

//	479.  325,  320,  316
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.080700, 0.000300, -0.097600);
	glTexCoord2f(0.784000, 0.527400);
	glVertex3f(0.087800, 0.097800, -0.089200);
	glTexCoord2f(0.759600, 0.570700);
	glVertex3f(0.130600, 0.095700, -0.095000);
	glTexCoord2f(0.736700, 0.557700);
	glEnd();

//	480.  326,  327,  314
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.098200, 0.005500, 0.139400);
	glTexCoord2f(0.654800, 0.431300);
	glVertex3f(0.111400, 0.043100, 0.140100);
	glTexCoord2f(0.664700, 0.446000);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glEnd();

//	481.  314,  313,  326
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glVertex3f(0.073400, 0.000300, 0.050300);
	glTexCoord2f(0.622600, 0.466800);
	glVertex3f(0.098200, 0.005500, 0.139400);
	glTexCoord2f(0.654800, 0.431300);
	glEnd();

//	482.  314,  327,  328
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glVertex3f(0.111400, 0.043100, 0.140100);
	glTexCoord2f(0.664700, 0.446000);
	glVertex3f(0.150600, 0.039600, 0.132000);
	glTexCoord2f(0.681200, 0.447400);
	glEnd();

//	483.  328,  329,  314
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.150600, 0.039600, 0.132000);
	glTexCoord2f(0.681200, 0.447400);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glEnd();

//	484.  330,  331,  329
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.691500, 0.434200);
	glVertex3f(0.172200, 0.000300, 0.031200);
	glTexCoord2f(0.717800, 0.478800);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glEnd();

//	485.  329,  328,  330
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glVertex3f(0.150600, 0.039600, 0.132000);
	glTexCoord2f(0.681200, 0.447400);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.691500, 0.434200);
	glEnd();

//	486.  309,  308,  332
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.073400, 0.000300, 0.050300);
	glTexCoord2f(0.676300, 0.945000);
	glVertex3f(0.172200, 0.000300, 0.031200);
	glTexCoord2f(0.682300, 0.992200);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.635000, 0.984600);
	glEnd();

//	487.  332,  333,  309
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.635000, 0.984600);
	glVertex3f(0.098200, 0.005500, 0.139400);
	glTexCoord2f(0.635000, 0.954400);
	glVertex3f(0.073400, 0.000300, 0.050300);
	glTexCoord2f(0.676300, 0.945000);
	glEnd();

//	488.  330,  328,  327
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.691500, 0.434200);
	glVertex3f(0.150600, 0.039600, 0.132000);
	glTexCoord2f(0.681200, 0.447400);
	glVertex3f(0.111400, 0.043100, 0.140100);
	glTexCoord2f(0.664700, 0.446000);
	glEnd();

//	489.  327,  326,  330
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.111400, 0.043100, 0.140100);
	glTexCoord2f(0.664700, 0.446000);
	glVertex3f(0.098200, 0.005500, 0.139400);
	glTexCoord2f(0.654800, 0.431300);
	glVertex3f(0.161800, 0.005500, 0.135600);
	glTexCoord2f(0.691500, 0.434200);
	glEnd();

//	490.  334,  319,  318
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.118200, 0.111100, 0.006800);
	glTexCoord2f(0.671700, 0.528900);
	glVertex3f(0.148000, 0.084500, -0.031200);
	glTexCoord2f(0.705600, 0.532300);
	glVertex3f(0.173900, 0.307400, -0.027100);
	glTexCoord2f(0.658400, 0.636200);
	glEnd();

//	491.  318,  335,  334
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.173900, 0.307400, -0.027100);
	glTexCoord2f(0.658400, 0.636200);
	glVertex3f(0.119200, 0.295400, 0.030000);
	glTexCoord2f(0.628700, 0.616200);
	glVertex3f(0.118200, 0.111100, 0.006800);
	glTexCoord2f(0.671700, 0.528900);
	glEnd();

//	492.  320,  323,  317
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087800, 0.097800, -0.089200);
	glTexCoord2f(0.759600, 0.570700);
	glVertex3f(0.064800, 0.310200, -0.097300);
	glTexCoord2f(0.728300, 0.674500);
	glVertex3f(0.153500, 0.312400, -0.103600);
	glTexCoord2f(0.689200, 0.656400);
	glEnd();

//	493.  317,  316,  320
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.153500, 0.312400, -0.103600);
	glTexCoord2f(0.689200, 0.656400);
	glVertex3f(0.130600, 0.095700, -0.095000);
	glTexCoord2f(0.736700, 0.557700);
	glVertex3f(0.087800, 0.097800, -0.089200);
	glTexCoord2f(0.759600, 0.570700);
	glEnd();

//	494.  329,  331,  324
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glVertex3f(0.172200, 0.000300, 0.031200);
	glTexCoord2f(0.717800, 0.478800);
	glVertex3f(0.135800, 0.000300, -0.099100);
	glTexCoord2f(0.760800, 0.519000);
	glEnd();

//	495.  324,  319,  329
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.135800, 0.000300, -0.099100);
	glTexCoord2f(0.760800, 0.519000);
	glVertex3f(0.148000, 0.084500, -0.031200);
	glTexCoord2f(0.705600, 0.532300);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glEnd();

//	496.  314,  329,  334
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glVertex3f(0.143300, 0.064300, 0.048800);
	glTexCoord2f(0.686600, 0.491700);
	glVertex3f(0.118200, 0.111100, 0.006800);
	glTexCoord2f(0.671700, 0.528900);
	glEnd();

//	497.  334,  336,  314
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.118200, 0.111100, 0.006800);
	glTexCoord2f(0.671700, 0.528900);
	glVertex3f(0.088900, 0.106000, 0.005700);
	glTexCoord2f(0.652500, 0.521600);
	glVertex3f(0.087600, 0.065200, 0.060000);
	glTexCoord2f(0.651900, 0.486400);
	glEnd();

//	498.  336,  335,  337
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.088900, 0.106000, 0.005700);
	glTexCoord2f(0.652500, 0.521600);
	glVertex3f(0.119200, 0.295400, 0.030000);
	glTexCoord2f(0.628700, 0.616200);
	glVertex3f(0.053900, 0.302200, -0.019200);
	glTexCoord2f(0.593000, 0.610400);
	glEnd();

//	499.  337,  315,  336
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.053900, 0.302200, -0.019200);
	glTexCoord2f(0.593000, 0.610400);
	glVertex3f(0.070300, 0.104400, -0.024700);
	glTexCoord2f(0.631500, 0.524900);
	glVertex3f(0.088900, 0.106000, 0.005700);
	glTexCoord2f(0.652500, 0.521600);
	glEnd();

//	500.  338,  339,  340
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.195700, 1.491700, -0.080700);
	glTexCoord2f(0.862300, 0.993800);
	glVertex3f(0.200000, 1.496400, -0.003200);
	glTexCoord2f(0.806900, 0.982800);
	glVertex3f(0.268700, 1.404500, -0.008700);
	glTexCoord2f(0.822800, 0.892500);
	glEnd();

//	501.  340,  341,  338
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.268700, 1.404500, -0.008700);
	glTexCoord2f(0.822800, 0.892500);
	glVertex3f(0.267400, 1.393800, -0.071300);
	glTexCoord2f(0.876900, 0.898300);
	glVertex3f(0.195700, 1.491700, -0.080700);
	glTexCoord2f(0.862300, 0.993800);
	glEnd();

//	502.  342,  343,  344
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.201000, 1.334500, -0.035700);
	glTexCoord2f(0.714100, 0.856200);
	glVertex3f(0.217700, 1.354600, 0.023900);
	glTexCoord2f(0.758800, 0.878600);
	glVertex3f(0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.739800, 0.938000);
	glEnd();

//	503.  344,  345,  342
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.739800, 0.938000);
	glVertex3f(0.154600, 1.369400, -0.025600);
	glTexCoord2f(0.695400, 0.896000);
	glVertex3f(0.201000, 1.334500, -0.035700);
	glTexCoord2f(0.714100, 0.856200);
	glEnd();

//	504.  341,  346,  347
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.267400, 1.393800, -0.071300);
	glTexCoord2f(0.876900, 0.898300);
	glVertex3f(0.208400, 1.369000, -0.095400);
	glTexCoord2f(0.927500, 0.923100);
	glVertex3f(0.146700, 1.402600, -0.096200);
	glTexCoord2f(0.938200, 0.976700);
	glEnd();

//	505.  347,  338,  341
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.146700, 1.402600, -0.096200);
	glTexCoord2f(0.938200, 0.976700);
	glVertex3f(0.195700, 1.491700, -0.080700);
	glTexCoord2f(0.862300, 0.993800);
	glVertex3f(0.267400, 1.393800, -0.071300);
	glTexCoord2f(0.876900, 0.898300);
	glEnd();

//	506.  348,  347,  346
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.154600, 1.369400, -0.025600);
	glTexCoord2f(0.991900, 0.951100);
	glVertex3f(0.146700, 1.402600, -0.096200);
	glTexCoord2f(0.938200, 0.976700);
	glVertex3f(0.208400, 1.369000, -0.095400);
	glTexCoord2f(0.927500, 0.923100);
	glEnd();

//	507.  346,  349,  348
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.208400, 1.369000, -0.095400);
	glTexCoord2f(0.927500, 0.923100);
	glVertex3f(0.201000, 1.334500, -0.035700);
	glTexCoord2f(0.980500, 0.906500);
	glVertex3f(0.154600, 1.369400, -0.025600);
	glTexCoord2f(0.991900, 0.951100);
	glEnd();

//	508.  340,  339,  344
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.268700, 1.404500, -0.008700);
	glTexCoord2f(0.822800, 0.892500);
	glVertex3f(0.200000, 1.496400, -0.003200);
	glTexCoord2f(0.806900, 0.982800);
	glVertex3f(0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.739800, 0.938000);
	glEnd();

//	509.  344,  343,  340
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.163600, 1.405300, 0.046200);
	glTexCoord2f(0.739800, 0.938000);
	glVertex3f(0.217700, 1.354600, 0.023900);
	glTexCoord2f(0.758800, 0.878600);
	glVertex3f(0.268700, 1.404500, -0.008700);
	glTexCoord2f(0.822800, 0.892500);
	glEnd();

//	510.  350,  351,  352
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.580300, 0.969800, 0.031700);
	glTexCoord2f(0.747300, 0.766900);
	glVertex3f(0.596000, 0.918700, 0.056900);
	glTexCoord2f(0.725400, 0.810700);
	glVertex3f(0.601400, 0.923800, 0.114400);
	glTexCoord2f(0.685800, 0.800800);
	glEnd();

//	511.  352,  353,  350
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.601400, 0.923800, 0.114400);
	glTexCoord2f(0.685800, 0.800800);
	glVertex3f(0.583000, 0.983300, 0.119600);
	glTexCoord2f(0.695300, 0.755500);
	glVertex3f(0.580300, 0.969800, 0.031700);
	glTexCoord2f(0.747300, 0.766900);
	glEnd();

//	512.  354,  355,  356
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.490600, 1.088100, 0.007500);
	glTexCoord2f(0.942500, 0.595700);
	glVertex3f(0.515500, 1.065800, 0.023000);
	glTexCoord2f(0.937200, 0.566600);
	glVertex3f(0.508900, 1.065900, 0.062500);
	glTexCoord2f(0.964800, 0.551100);
	glEnd();

//	513.  356,  357,  354
//	514.  358,  359,  360
//	515.  360,  361,  358
//	516.  362,  363,  364
//	517.  364,  365,  362
//	518.  366,  367,  368
//	519.  368,  369,  366
//	520.  370,  371,  372

    glutSwapBuffers();
}

#endif