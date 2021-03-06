#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include<time.h>
#include<math.h>

clock_t start1;
clock_t start;
int visible[10][10];
int arr[10][10];
int out=0,noBomb;
int mouseVisit=0,ent=0;
int a[2];
int over=0,calc=0;

void Init()
{
      glClearColor(0,1,0,0.0);
      glEnable(GL_DEPTH);
      glShadeModel(GL_SMOOTH);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      glOrtho(0,500,0,600,0,500);
}


void bitmap(float x,float y,void *font,char *string)
{

  char *c;
  glRasterPos2f(x, y);
  for (c=string; *c != '\0'; c++)
  {
    glutBitmapCharacter(font, *c);
  }
}



void wait()
{
    start1=clock();
    while(((double)clock() - start1) / CLOCKS_PER_SEC<0.5)
    {
    }
}


void draw(int x,int y)
{
    glColor3f(1,1,1);
    glPointSize(3);
    glBegin(GL_POINTS);
    bresen(x,y,x,15+y);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(x,y+5);
    glVertex2f(x,y+18);
    glVertex2f(x+20,y+10);
    glEnd();
    glColor3f(0,0,0);
}


void fill(int arr[10][10],int bomb[10][2],int noBomb)
{int i,j,k;
 for(i=0;i<10;i++)
   for(j=0;j<10;j++)
    {if(arr[i][j]!=-1)
      {int a=0;
       if(i-1>=0 && j-1>=0 && arr[i-1][j-1]==-1)
         a++;
       if(i-1>=0 && arr[i-1][j]==-1)
         a++;
       if(i-1>=0 && j+1<10 && arr[i-1][j+1]==-1)
         a++;
       if(j-1>=0 && arr[i][j-1]==-1)
         a++;
       if(j+1<10 && arr[i][j+1]==-1)
         a++;
       if(i+1<10 && j-1>=0 && arr[i+1][j-1]==-1)
         a++;
       if(i+1<10 && arr[i+1][j]==-1)
         a++;
       if(i+1<10 && j+1<10 && arr[i+1][j+1]==-1)
         a++;
       arr[i][j]=a;
     /*for(k=0;k<noBomb;k++)
       arr[bomb[k][0]][bomb[k][1]]=-1;*/
      }
    }
}


void spread(int i,int j)
{//printf("\nhello %d %d",i,j);
 if(i>=0 && j>=0 && i<10 && j<10)
  {if(arr[i][j]!=-1 && visible[i][j]!=1)
    {visible[i][j]=1;
     if(arr[i][j]==0)
      {spread(i-1,j-1);
       spread(i-1,j);
       spread(i-1,j+1);
       spread(i,j-1);
       spread(i,j+1);
       spread(i+1,j-1);
       spread(i+1,j);
       spread(i+1,j+1);
      }
    }
   else;
  }
 else;
}


int finish()
{int i,j;
 for(i=0;i<10;i++)
   for(j=0;j<10;j++)
     {if(arr[i][j]!=-1 && visible[i][j]==0)
        return 0;
      else;
     }
 return 1;
}


void outline()
{
    bresen(0,0,0,500);
    bresen(50,0,50,500);
    bresen(100,0,100,500);
    bresen(150,0,150,500);
    bresen(200,0,200,500);
    bresen(250,0,250,500);
    bresen(300,0,300,500);
    bresen(350,0,350,500);
    bresen(400,0,400,500);
    bresen(450,0,450,500);
    bresen(500,0,500,500);

    bresen(0,0,500,0);
    bresen(0,50,500,50);
    bresen(0,100,500,100);
    bresen(0,150,500,150);
    bresen(0,200,500,200);
    bresen(0,250,500,250);
    bresen(0,300,500,300);
    bresen(0,350,500,350);
    bresen(0,400,500,400);
    bresen(0,450,500,450);
    bresen(0,500,500,500);
}


void bomb(int x,int y)
{
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    circle(15,x,y);
    glEnd();

    glColor3f(1,0,0);
    glPointSize(3);
    glBegin(GL_POINTS);
    glVertex2f(x-7,y);
    glVertex2f(x+7,y);
    glVertex2f(x,y-7);
    glVertex2f(x,y+7);
    glVertex2f(x+5,y+5);
    glVertex2f(x+5,y-5);
    glVertex2f(x-5,y+5);
    glVertex2f(x-5,y-5);
    glVertex2f(x,y);
    glEnd();

    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(x-4,y+15);
    glVertex2f(x+4,y+15);
    glVertex2f(x,y+20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(x-15,y-4);
    glVertex2f(x-15,y+4);
    glVertex2f(x-20,y);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(x-4,y-15);
    glVertex2f(x+4,y-15);
    glVertex2f(x,y-20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(x+15,y-4);
    glVertex2f(x+15,y+4);
    glVertex2f(x+20,y);
    glEnd();
}


void setbomb(void)
{
    int bomb[noBomb][2];
    int r,i,j,count,k;
    srand(time(NULL));
    for(count=0;count<noBomb;count++)
     {manb:
      r=rand()%100;
      i=r/10;
      j=r%10;
      //printf("\n%d %d",i,j);
      for(k=0;k<=count-1;k++)
      {if(i==bomb[k][0] && j==bomb[k][1])
        goto manb;
       else continue;
      }
      //printf("\n%d %d",i,j);
      bomb[count][0]=i;
      bomb[count][1]=j;
      //printf("\t%d %d",bomb[count][0],bomb[count][1]);
     }
    //printf("\n\n");
    for(k=0;k<noBomb;k++)
     arr[bomb[k][0]][bomb[k][1]]=-1;
    fill(arr,bomb,noBomb);
    /*for(k=0;k<noBomb;k++)
     arr[bomb[k][0]][bomb[k][1]]=-1;*/
}


void display(void)
{        glClear(GL_COLOR_BUFFER_BIT);
         glClearColor(0.3,0.3,1,0);
         if(out)
             {if(!over)
             {glColor3f(0,0,0);
              int i,j;
              for(i=0;i<10;i++)
               for(j=0;j<10;j++)
                {if(visible[i][j]==1)
                 {glColor3f(0.8,0.8,1);
                  glBegin(GL_POLYGON);
                  glVertex2f(j*50+4,450-i*50+4);
                  glVertex2f(j*50+46,450-i*50+4);
                  glVertex2f(j*50+46,450-i*50+46);
                  glVertex2f(j*50+4,450-i*50+46);
                  glEnd();
                  glColor3f(0,0,0);
                  if(arr[i][j]!=0)
                   {char str[5];
                    itoa(arr[i][j], str, 10);
                    bitmap(j*50+20,450-i*50+20,GLUT_BITMAP_TIMES_ROMAN_24,str);
                   }
                 }
                 /*else if(visible[i][j]==2)
                  {
                   //printf("\nyippi");
                   draw(j*50+20,450-i*50+10);
                  }*/
                }
              glColor3f(0,0,0);
              glPointSize(3);
              glBegin(GL_POINTS);
              outline();
              glEnd();
              ////////////////////////////////////////////////////
              bomb(a[1]*50+25,450-a[0]*50+25);
              glFlush();
              wait();
              //int i,j;
              for(i=0;i<10;i++)
               for(j=0;j<10;j++)
                 if(arr[i][j]==-1)
                    bomb(j*50+25,450-i*50+25);

              glFlush();
              wait();
             }
              glClear(GL_COLOR_BUFFER_BIT);
              glClearColor(0.3,0.3,1,0);
              glColor3f(0,0,0);
              bitmap(225,250,GLUT_BITMAP_TIMES_ROMAN_24,"OUT");
              over=1;
             }

         else
         {if(!over)
         {glColor3f(0,0,0);

          bitmap(10,550,GLUT_BITMAP_TIMES_ROMAN_24,"time elapsed:");
          float time=((double)clock() - start) / CLOCKS_PER_SEC;
          char str[100000];
          itoa(time, str, 10);
          bitmap(200,550,GLUT_BITMAP_TIMES_ROMAN_24,str);


          glPointSize(3);
          glBegin(GL_POINTS);
          outline();
          glEnd();
          int i,j;
          for(i=0;i<10;i++)
           for(j=0;j<10;j++)
             {if(visible[i][j]==1)
              {//printf("\n\nhello");
               glColor3f(0.8,0.8,1);
               glBegin(GL_POLYGON);
               glVertex2f(j*50+4,450-i*50+4);
               glVertex2f(j*50+46,450-i*50+4);
               glVertex2f(j*50+46,450-i*50+46);
               glVertex2f(j*50+4,450-i*50+46);
               glEnd();
               glColor3f(0,0,0);
               if(arr[i][j]!=0)
                {char str[5];
                 itoa(arr[i][j], str, 10);
                 bitmap(j*50+20,450-i*50+20,GLUT_BITMAP_TIMES_ROMAN_24,str);
                }
              }
              else if(visible[i][j]==2)
              {
                  //printf("\nyippi");
                  draw(j*50+20,450-i*50+10);
              }
             }
          glFlush();
         }
          if(finish())
            {wait();
             glClear(GL_COLOR_BUFFER_BIT);
             glClearColor(0.3,0.3,1,0);
             glColor3f(0,0,0);
             bitmap(200,300,GLUT_BITMAP_TIMES_ROMAN_24,"YOU WON");
             bitmap(150,250,GLUT_BITMAP_TIMES_ROMAN_24,"YOUR TIME:");
             char str[100];
             if(!calc)
              {float time=((double)clock() - start) / CLOCKS_PER_SEC;

               itoa(time, str, 10);
               calc=1;
              }
             bitmap(290,250,GLUT_BITMAP_TIMES_ROMAN_24,str);
             over=1;
            }
         }
         glFlush();

}


void mouse2(int mouse,int state,int x,int y)
{
    if(!ent) goto man;
    //printf("\n%d %d",x,y);
    mouseVisit++;
    int posi,posj;
    posj=x/50;
    if(y>=100)
      posi=(y-100)/50;
    else goto wrngpos;
    if(visible[posi][posj]==1/* || visible[posi][posj]==2*/)
      goto man;
    if(mouse==2)
      {if(visible[posi][posj]==2 && mouseVisit%2==1)
         visible[posi][posj]=0;
       else if(mouseVisit%2==1) visible[posi][posj]=2;
      }
    else
    {if(arr[posi][posj]==-1)
      {out=1;a[0]=posi;a[1]=posj;}
     else if(arr[posi][posj]==0)
      spread(posi,posj);
     else
      visible[posi][posj]=1;
    }
    man:
    wrngpos:
    ent=1;
    glutDisplayFunc(display);
    glutPostRedisplay();
}


void update(int value)
{
    glutDisplayFunc(display);
    glutPostRedisplay();
	glutTimerFunc(1000, update, value);
}


void starting(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,1,0,0);
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(150,400);
    glVertex2f(350,400);
    glVertex2f(250,450);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(150,300);
    glVertex2f(350,300);
    glVertex2f(250,350);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(150,200);
    glVertex2f(350,200);
    glVertex2f(250,250);

    glEnd();
    glColor3f(0,1,0);
    bitmap(210,416,GLUT_BITMAP_TIMES_ROMAN_24,"1.Easy");
    bitmap(200,316,GLUT_BITMAP_TIMES_ROMAN_24,"2.Medium");
    bitmap(210,216,GLUT_BITMAP_TIMES_ROMAN_24,"3.Hard");
    glFlush();
}


void mouse1(int mouse,int state,int x,int y)
{
    //printf("\n%d %d",x,y);
    if(x>=150 && x<=350 && y>=150 && y<=200)
    {
        noBomb=8;
        setbomb();
        start=clock();
        glutDisplayFunc(display);
        glutMouseFunc(mouse2);
        glutTimerFunc(500, update, 0);
        glutPostRedisplay();
    }
    else if(x>=150 && x<=350 && y>=250 && y<=300)
    {
        noBomb=12;
        setbomb();
        start=clock();
        glutDisplayFunc(display);
        glutMouseFunc(mouse2);
        glutTimerFunc(500, update, 0);
        glutPostRedisplay();
    }
    else if(x>=150 && x<=350 && y>=350 && y<=400)
    {
        noBomb=20;
        setbomb();
        start=clock();
        glutDisplayFunc(display);
        glutMouseFunc(mouse2);
        glutTimerFunc(500, update, 0);
        glutPostRedisplay();
    }
    else
    {
        glutDisplayFunc(starting);
        glutPostRedisplay();
    }
}


int main(int argc, char **argv)
{ glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  glutInitWindowPosition(250,100);
  glutInitWindowSize(500,600);
  glutCreateWindow("Minesweep");
  Init();
  glutDisplayFunc(starting);
  //glutTimerFunc(500, update, 0);
  glutMouseFunc(mouse1);
  glutMainLoop();
  return 0;
}

