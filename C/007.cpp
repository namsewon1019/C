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
				printf("������ �Է� : ");
				scanf("%d", &data);
				Push( &stack, data );
				break;
			case 2 :
        data = Pop(&stack);
        if( data )
				  printf("pop ������ : %d\n", data);
				break;
      case 0 :
        break;
			default :
				printf("�߸��� �Է� �Դϴ�. \n");
				break;
		}
	}while( menu );
}

void createStack( STACK *s ){  // top �����͸� -1�� �ʱ�ȭ
	s->top = -1;
}
int isFull( STACK *s ){   // ������ ���� �� ������ true ����
	return (s->top)  == STACK_SIZE-1;
	
}
int isEmpty( STACK *s ){   // ������ ��� ������ true ����
	return s->top == -1;

}
void Push( STACK *s, ELEMENT data ){ //������ ���� �� ������ ���� ��� �� ����, �ƴϸ� push
	if(isFull(s)){
		printf("stack is full\n");
		return ;
	}
	else {
		s->buf[++(s->top)] = data;
	}
	
}
int Pop( STACK *s ){  //������ ���  ������ ���� ��� �� 0 ����, �ƴϸ� �� �� ������ ����
	if(isEmpty(s)){
		printf("stack is empty\n");
		return 0;
	}
	else {
	return s->buf[(s->top)--];	
	}

}
