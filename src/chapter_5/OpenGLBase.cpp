#include "OpenGLBase.h"



OpenGLBase::OpenGLBase()
{
}


OpenGLBase::~OpenGLBase()
{
}

void OpenGLBase::initOpenGL(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(350, 300);//���ô���λ��
	glutInitWindowSize(800, 600);//���ô��ڴ�С
}
void  OpenGLBase::init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);//���ó�ʼ������ɫ
	glMatrixMode(GL_PROJECTION);//����ǰ����ָ��ΪͶӰ����
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);////left right,buttom,up (left,buttom),(right,up) ��Ұ��Χ
	glutCreateWindow("An Example OpenGL Program");//�������ڲ�����
}

void  OpenGLBase::resetOpenGL()
{
	glutSetWindowTitle("HHH");
}
