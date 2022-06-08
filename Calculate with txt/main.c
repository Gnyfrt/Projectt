#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *data = "16+4*x-5=3*2*y-4*z";

int main(int argc, char *argv[]) {
	openTxtFile();
	question1();
	question2();
	question3();
	
	return 0;
}

void question1(){
	//16+4x-5=3.2y-4z
	float i = 1, x = 1, y = 1, z = 1;
	
	x = 4;
	y = 3.2;
	z = -4;

	i = 16;
	i = i - 5;
	//----------------------
	y *= -1;
	z *= -1;
	i *= -1;
	//----------------------
	printf("Question 1: 16 + 4x - 5 = 3 * 2y - 4z\n", x);
	printf("(%.2fx) + ", x);
	printf("(%.2fy) + ", y);
	printf("(%.2fz) = ", z);
	printf("(%.2f)\n\n", i);
}

void question2(){
	//x+2y-0.76*z=5.6
	float i = 1, x = 1, y = 1, z = 1;
	
	x = 1;
	y = 2;
	z = 0.76;
	i = 5.6;
	//----------------------
	printf("Question 2: x + 2y - 0.76z = 5.6\n", x);
	printf("(%.2fx) + ", x);
	printf("(%.2fy) + ", y);
	printf("(%.2fz) = ", z);
	printf("(%.2f)\n\n", i);
}

void question3(){
	//4.2y+x=-3
	float i = 1, x = 1, y = 1, z = 1;
	
	x = 1;
	y = 4.2;
	i = -3;
	//----------------------
	printf("Question 3: 4.2y + x = -3\n", x);
	printf("(%.2fx) + ", x);
	printf("(%.2fy) = ", y);
	printf("(%.2f)\n\n", i);
}

void simplex_algorithm(){
	//16+4x=3.2y-4z
	float i = 1, x = 1, y = 1, z = 1;
	
	x = 1;
	y = 4.2;
	i = -3;
	//----------------------
	printf("Question 3: 4.2y + x = -3\n", x);
	printf("(%.2fx) + ", x);
	printf("(%.2fy) = ", y);
	printf("(%.2f)\n\n", i);
}

int openTxtFile(){
	FILE *fp;
	
    if ((fp = fopen ("with one unknown.txt", "r")) == NULL) {
         printf("Dosya acma hatasi!");
         exit(1);
    }
    
    fscanf(fp, "%s\t", data);
    printf("%s\n", data);
    
    fclose(fp);
    rewind(fp);
}
