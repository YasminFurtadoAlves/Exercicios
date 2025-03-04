#include<stdio.h>
//void sig n faça nada 
int main(){
	float calcularAreaQuadrado(float x, float y);
   	float area=calcularAreaQuadrado( 10.0, 20.0);
   	printf("Area é :%f",area);
	
	return 0;
}

	float calcularAreaQuadrado(float x, float y){
		float area=x*y;
		
		return area; 
	}
