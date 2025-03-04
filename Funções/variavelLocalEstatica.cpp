#import<stdio.h>
int main (void){
	void teste(void);
	teste();
	teste();
	teste();
	
	
	
	
	return 0;
	
}
void teste(void){
	//são consideradas locais pois não uso na funç main
	
	static	int vareavelLocalEstatica=2;
	vareavelLocalEstatica*=2;
	
	printf("%i\n",vareavelLocalEstatica);
	
}
