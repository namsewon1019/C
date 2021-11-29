	#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10
typedef int ELEMENT;
typedef struct Stack{
	ELEMENT buf[STACK_SIZE];
	int top;
}STACK;

void createStack( STACK *s );
int isFull( STACK *s );
int isEmpty( STACK *s );
void Push( STACK *s, ELEMENT data );
ELEMENT Pop( STACK *s );

int main(){
	int menu;
	ELEMENT data ;
	STACK stack;
	
	createStack( &stack );
	do{
		printf("1:push, 2:pop, 0:exit : ");
		scanf("%d", &menu);
		switch( menu ){
			case 1 :
				printf("데이터 입력 : ");
				scanf("%d", &data);
				Push( &stack, data );
				break;
			case 2 :
        data = Pop(&stack);
        if( data )
				  printf("pop 데이터 : %d\n", data);
				break;
      case 0 :
        break;
			default :
				printf("잘못된 입력 입니다. \n");
				break;
		}
	}while( menu );
}

void createStack( STACK *s ){  // top 포인터를 -1로 초기화
	s->top = -1;
}
int isFull( STACK *s ){   // 스택이 가득 차 있으면 true 리턴
	return (s->top)  == STACK_SIZE-1;
	
}
int isEmpty( STACK *s ){   // 스택이 비어 있으면 true 리턴
	return s->top == -1;

}
void Push( STACK *s, ELEMENT data ){ //스택이 가득 차 있으면 문구 출력 후 리턴, 아니면 push
	if(isFull(s)){
		printf("stack is full\n");
		return ;
	}
	else {
		s->buf[++(s->top)] = data;
	}
	
}
int Pop( STACK *s ){  //스택이 비어  있으면 문구 출력 후 0 리턴, 아니면 맨 위 데이터 리턴
	if(isEmpty(s)){
		printf("stack is empty\n");
		return 0;
	}
	else {
	return s->buf[(s->top)--];	
	}

}
