#include <stdio.h>

int hahahahaha() {
	
}

int main() {
	int food=1, number, money1=5000, money2=5000, money3=6000, money4=12000, wow, givemoney=0, result;
	while( food>=1 && food<=4 ){
	
		printf("1. ¿⁄¿Â∏È	5000\n");
		printf("2. ¬´ªÕ		5000\n");
		printf("3. ∫∫¿Ωπ‰	5000\n");
		printf("4. ≈¡ºˆ¿∞	5000\n");
		
		printf("¿ΩΩƒ ¡æ∑˘øÕ ∞≥ºˆ∏¶ ¿‘∑¬«œººø‰ : \n");
		scanf("%d %d", &food, &number); 
		switch(food) {
			case 1 :
				result = money1*number;
				printf("¿⁄¿Â∏È %d∞≥¥¬ %d¿‘¥œ¥Ÿ.\n", number, result); 
				break;
			case 2 :
				result = money2*number;
				printf("¬´ªÕ %d¥¬ %d∞≥¿‘¥œ¥Ÿ.\n", number, money2*wow); break;
			case 3 :
				result = money3*number;
				printf("∫∫¿Ωπ‰ %d¥¬ %d∞≥¿‘¥œ¥Ÿ.", number, money3*wow); break;
			case 4 :
				result = money4*number;
				printf("≈¡ºˆ¿∞ %d¥¬ %d∞≥¿‘¥œ¥Ÿ.\n", number, money4*wow); break;
			default : 
				break;
		}
		if( food<1 || food>4 ) break;
		printf("µ∑¿ª ≥÷æÓ¡÷ººø‰.\n");
		scanf("%d", &givemoney);
		result = givemoney - result;
		printf("¿‹µ∑ %d πﬁæ∆∞°ººø‰.\n", result); 
			
	}
	return 0;
	
}
