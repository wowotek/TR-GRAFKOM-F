#include <gl/glut.h>
#include <windows.h>


bool mouseDown = false;
int is_depth;

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;

float xpos = 0.0f;
float ypos = 0.0f;
float zpos = 0.0f;

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void idle();
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("TUGAS AKHIR - GRAFIKA KOMPUTER");

	init();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glutDisplayFunc(tampil);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);

	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);

	
	glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);	// Konfigurasi Pencahayaan
	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);

	const GLfloat qaAmbientLight[] = { 0.2,0.2,0.2,1.0 };	// Set Jenis Cahaya
	const GLfloat qaDiffuseLight[] = { 1,1,1,1 };			// Set Cahaya Pencaran
	const GLfloat qaSpecularLight[] = { 1,1,1,1 };			// Set Cahaya Internal

	glLightfv(GL_LIGHT0, GL_AMBIENT, qaAmbientLight);		// Menyalaan Cahaya
	glLightfv(GL_LIGHT0, GL_DIFFUSE, qaDiffuseLight);		// Menyalakan Cahaya Pancaran
	glLightfv(GL_LIGHT0, GL_SPECULAR, qaSpecularLight);		// Menyalakan Cahaya Internal

	const GLfloat posisilampu[] = { 0,160,200,1 };			// Konfigurasi Posisi Cahaya
	glLightfv(GL_LIGHT0, GL_POSITION, posisilampu);

	glEnable(GL_COLOR_MATERIAL);							// Menyalakan warna texture sesuai warna
	glShadeModel(GL_SMOOTH);

	glMatrixMode(GL_MODELVIEW);
	glOrtho(-1, 1, -1, 1, -1, 1);
	glPointSize(2.0);
	glLineWidth(2.0);
}

void keyboard(unsigned char key, int x, int y)
{
	// Sebaiknya pakai if-else, dibanding switch case Supaya
	//    1. Mudah Dibaca
	//    2. Mudah di Debug
	if(key == 'w' || key == 'W') 
	{
		zpos += 3.0;
		glTranslatef(0.0, 0.0, 3.0);
		break;
	} else
	if(key == 'd' || key == 'D')
	{
		xpos += 3.0;
		glTranslatef(3.0, 0.0, 0.0);
		break;
	} else
	if(key == 's' || key == 'S')
	{
		zpos += -3.0;
		glTranslatef(0.0, 0.0, -3.0);
		break;
	} else
	if(key == 'a' || key == 'A')
	{
		xpos += -3.0;
		glTranslatef(-3.0, 0.0, 0.0);
		break;	
	} else
	if(key == '5') 
	{
		if (is_depth){
			is_depth =0;
			glDisable(GL_DEPTH_TEST);
		} else{
			is_depth=1;
			glEnable(GL_DEPTH_TEST);
		}
	}

	tampil();
}

void idle()
{
	if (!mouseDown)
	{
		xrot += 0.3f;
		yrot += 0.4f;
	}

	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	} else 						//
	{
		mouseDown = false;
	}
}

void mouseMotion(int x, int y)
{
	if (mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}