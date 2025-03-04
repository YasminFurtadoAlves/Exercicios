#import<stdio.h>
//aqui se declara as varia globais, age como uma variavel estatica mas é acessada por todo mundo 
int gVariavelGobal=2;
	
int main(void){
	void mimi(void);
	printf("MIMi tem = %i\n",gVariavelGobal);
	
	
	
	return 0;
	
}
void mimi (void){
	int gVariavelGobal=2;
	gVariavelGobal*=2;	
	
}
