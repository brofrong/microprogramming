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
