	#include <stdio.h>

	char a[7][5] ={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1}};

	char b[7][5]={
	{1,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,0}};

	char c[7][5]={
	{0,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{0,1,1,1,1}};

	char d[7][5]={
	{1,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,0}};

	char e[7][5]={
	{1,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1}};

	char f[7][5]={
	{1,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0}};

	char g[7][5]={
	{0,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,1,1,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char h[7][5]={
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1}};

	char li[7][5]={
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0}};

	char lj[7][5]={
	{0,0,0,1,0},
	{0,0,0,0,0},
	{0,0,0,1,0},
	{0,0,0,1,0},
	{0,0,0,1,0},
	{0,0,0,1,0},
	{0,1,1,0,0}};

	char k[7][5]={
	{1,0,0,0,1},
	{1,0,0,1,0},
	{1,0,1,0,0},
	{1,1,0,0,0},
	{1,0,1,0,0},
	{1,0,0,1,0},
	{1,0,0,0,1}};

	char l[7][5]={
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1}};

	char m[7][5]={
	{1,1,0,1,1},
	{1,0,1,0,1},
	{1,0,1,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1}};

	char n[7][5]={
	{1,0,0,0,1},
	{1,1,0,0,1},
	{1,1,0,0,1},
	{1,0,1,0,1},
	{1,0,0,1,1},
	{1,0,0,1,1},
	{1,0,0,0,1}};

	char o[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char p[7][5]={
	{1,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,0},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,0,0,0,0}};

	char q[7][5]={
	{0,1,1,0,1},
	{1,0,0,1,1},
	{1,0,0,1,1},
	{0,1,1,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1}};

	char r[7][5]={
	{1,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,0},
	{1,0,1,0,0},
	{1,0,0,1,0},
	{1,0,0,0,1}};

	char s[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,0},
	{0,1,1,1,0},
	{0,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char t[7][5]={
	{1,1,1,1,1},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0}};

	char u[7][5]={
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char v[7][5]={
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,0,1,0},
	{0,1,0,1,0},
	{0,0,1,0,0},
	{0,0,1,0,0}};

	char w[7][5]={
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,1,0,1},
	{1,0,1,0,1},
	{1,0,1,0,1},
	{0,1,0,1,0}};

	char lx[7][5]={
	{1,0,0,0,1},
	{0,1,0,1,0},
	{0,1,0,1,0},
	{0,0,1,0,0},
	{0,1,0,1,0},
	{0,1,0,1,0},
	{1,0,0,0,1}};

	char ly[7][5]={
	{1,0,0,0,1},
	{0,1,0,1,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0}};


	char z[7][5]={
	{1,1,1,1,1},
	{0,0,0,0,1},
	{0,0,0,1,0},
	{0,0,1,0,0},
	{0,1,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1}};

	char n0[7][5]={
	{0,1,1,1,0},
	{1,0,0,1,1},
	{1,0,1,0,1},
	{1,0,1,0,1},
	{1,0,1,0,1},
	{1,1,0,0,1},
	{0,1,1,1,0}};

	char n1[7][5]={
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1}};

	char n2[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{0,0,0,1,0},
	{0,0,1,0,0},
	{0,1,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1}};

	char n3[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{0,0,0,0,1},
	{0,1,1,1,0},
	{0,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char n4[7][5]={
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1}};

	char n5[7][5]={
	{1,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,0},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{1,1,1,1,0}};

	char n6[7][5]={
	{1,1,1,1,1},
	{1,0,0,0,0},
	{1,0,0,0,0},
	{1,1,1,1,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,1,1,1,1}};

	char n7[7][5]={
	{1,1,1,1,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,0,0,0,1}};

	char n8[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0}};

	char n9[7][5]={
	{0,1,1,1,0},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{0,1,1,1,0},
	{0,0,0,0,1},
	{0,0,0,0,1},
	{0,1,1,1,0}};

	char underLine[7][5]={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{1,1,1,1,1}};

	char minus[7][5] ={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,1,1,1,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}};

	char plus[7][5]={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0},
	{0,1,1,1,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}};

	char equal[7][5]={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{1,1,1,1,1},
	{0,0,0,0,0},
	{1,1,1,1,1},
	{0,0,0,0,0},
	{0,0,0,0,0}};


	char leftBracket[7][5]={
	{0,0,0,0,1},
	{0,0,0,1,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,0,1,0},
	{0,0,0,0,1}};

	char rightBracket[7][5]={
	{1,0,0,0,0},
	{0,1,0,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,1,0,0,0},
	{1,0,0,0,0}};

	char exclamationPoint[7][5]={
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0}};

	char questionPoint[7][5]={
	{0,0,1,0,0},
	{0,1,0,1,0},
	{0,0,0,1,0},
	{0,0,1,0,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0}};

	char dot[7][5]={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,0,0,0}};

	char comma[7][5]={
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,1,0,0}};

	char semicolon[7][5]={
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,1,0,0}};

	char colon[7][5]={
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,1,0,0},
	{0,0,0,0,0}};
/*
	char *printedLetter;

	if (letter == 'a'){
		printedLetter=*a;
	} else if (letter == 'b'){
		printedLetter=*b;
	} else if (letter == 'c'){
		printedLetter=*c;
	} else if (letter == 'd'){
		printedLetter=*d;
	} else if (letter == 'e'){
		printedLetter=*e;
	} else if (letter == 'f'){
		printedLetter=*f;
	} else if (letter == 'g'){
		printedLetter=*g;
	} else if (letter == 'h'){
		printedLetter=*h;
	} else if (letter == 'i'){
		printedLetter=*li;
	} else if (letter == 'j'){
		printedLetter=*lj;
	} else if (letter == 'k'){
		printedLetter=*k;
	} else if (letter == 'l'){
		printedLetter=*l;
	} else if (letter == 'm'){
		printedLetter=*m;
	} else if (letter == 'n'){
		printedLetter=*n;
	} else if (letter == 'o'){
		printedLetter=*o;
	} else if (letter == 'p'){
		printedLetter=*p;
	} else if (letter == 'q'){
		printedLetter=*q;
	} else if (letter == 'r'){
		printedLetter=*r;
	} else if (letter == 's'){
		printedLetter=*s;
	} else if (letter == 't'){
		printedLetter=*t;
	} else if (letter == 'u'){
		printedLetter=*u;
	} else if (letter == 'v'){
		printedLetter=*v;
	} else if (letter == 'w'){
		printedLetter=*w;
	} else if (letter == 'x'){
		printedLetter=*lx;
	} else if (letter == 'y'){
		printedLetter=*ly;
	} else if (letter == 'z'){
		printedLetter=*z;
	} else if (letter == '0'){
		printedLetter=*n0;
	} else if (letter == '1'){
		printedLetter=*n1;
	} else if (letter == '2'){
		printedLetter=*n2;
	} else if (letter == '3'){
		printedLetter=*n3;
	} else if (letter == '4'){
		printedLetter=*n4;
	} else if (letter == '5'){
		printedLetter=*n5;
	} else if (letter == '6'){
		printedLetter=*n6;
	} else if (letter == '7'){
		printedLetter=*n7;
	} else if (letter == '8'){
		printedLetter=*n8;
	} else if (letter == '9'){
		printedLetter=*n9;
	} else if (letter == '_'){ //new
		printedLetter=*underLine;
	} else if (letter == '-'){
		printedLetter=*minus;
	} else if (letter == '+'){
		printedLetter=*plus;
	} else if (letter == '='){
		printedLetter=*equal;
	} else if (letter == '('){
		printedLetter=*leftBracket;
	} else if (letter == ')'){
		printedLetter=*rightBracket;
	} else if (letter == '!'){
		printedLetter=*exclamationPoint;
	} else if (letter == '?'){
		printedLetter=*questionPoint;
	} else if (letter == '.'){
		printedLetter=*dot;
	} else if (letter == ','){
		printedLetter=*comma;
	} else if (letter == ';'){
		printedLetter=*semicolon;
	} else if (letter == ':'){
		printedLetter=*colon;
	} 
*/
	int main(int argc, char const *argv[])
	{
		FILE *fp;
		fp = fopen("font.tf","w");

		

		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&a[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&b[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&c[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&d[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&e[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&f[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&g[i][j],1,1,fp);
			}
		}

		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&h[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&li[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&lj[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&k[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&l[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&m[i][j],1,1,fp);
			}
		}


		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&o[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&p[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&q[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&r[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&s[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&t[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&u[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&v[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&w[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&lx[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&ly[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&z[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n0[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n1[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n2[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n3[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n4[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n5[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n6[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n7[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n8[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&n9[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&underLine[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&minus[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&plus[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&equal[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&leftBracket[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&rightBracket[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&exclamationPoint[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&questionPoint[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&dot[i][j],1,1,fp);
			}
		}
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&comma[i][j],1,1,fp);
			}
		}
		return 0;
		
	}
/*
	else{
		return 1;
	}

	for(int i=0;i<7;i++)	{
		for(int j=0;j<5;j++){
			if(printedLetter[j+i*5]){
				drowSquare(x+j*multiplayer,y+i*multiplayer,x+j*multiplayer+multiplayer,y+i*multiplayer+multiplayer,color);
			}
		}
	}
	return 0;*/
