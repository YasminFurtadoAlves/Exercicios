#import<stdio.h>
int main (void){
	void teste(void);
	teste();
	teste();
	teste();
	
	
	
	
	return 0;
	
}
void teste(void){
	//s�o consideradas locais pois n�o uso na fun� main
	
	static	int vareavelLocalEstatica=2;
	vareavelLocalEstatica*=2;
	
	printf("%i\n",vareavelLocalEstatica);
	
}
