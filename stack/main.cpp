#include "lk_stack.h"		// 

#include "sq_stack.h"	
#define ElemType int
#define DEFAULT_SIZE 3
//#include <iostream>
//using namespace std;
int main(void){
	LinkStack<ElemType> l;
	SqStack<ElemType> s(DEFAULT_SIZE);
	int c = 0;
	while(c != 100){
		cout << "\n1. 链式栈入栈.";
		cout << "\n2. 链式栈遍历.";
		cout << "\n3. 链式栈出栈.";
		cout << "\n4. 链式栈读栈.";
		cout << "\n5. 链式栈清空.";
		cout << "\n6. 链式栈销毁.";
		cout << "\n7. 顺序栈入栈.";
		cout << "\n8. 顺序栈出栈.";
		cout << "\n9. 顺序栈销毁.";
		cout << "\n10. 顺序栈清空.";
		cout << "\n11. 顺序栈读栈."; 
		cout << "\n12. 顺序栈判断是否为空.";
		cout << "\n13. 顺序栈求长.";
		cout << "\n14. 顺序栈遍历.";
		cout << "\n15. SysConvert.";//进制转换，基于LinkStack.h 
		cout << "\n16. .";
		cout << "\n17. .";
		cin >> c;
		switch(c){
			case 1:
				ElemType i;
				cout << "input element: ";
				cin >> i;
				l.Push(i);
				break;
			case 2:
				l.Traverse();
				break;
			case 3:
				ElemType j;
				l.Pop(j);
				break;
			case 4:
				ElemType e;
				l.Top(e);
				break;
			case 5:
				l.Clear();
				break;
			case 6:
				l.~LinkStack();
				break;
			case 9:
				s.~SqStack();
				break;
			case 10:
				s.Clear();
				break;
			case 12:
				if(s.Empty()){
					cout << "is emp";
				}else{
					cout << "not emp";
				}
				break; 
			case 13:
				cout << s.Length(); 
				break;
			case 7:
				ElemType p;
				cout << "input element:";
				cin >> p;
				s.Push(p);
				break;
			case 8:
				ElemType pop;
				s.Pop(pop);
				cout << "poped " << pop;
				break;
			case 11:
				ElemType top;
				s.Top(top);
				break;
			case 14:
				s.Traverse();
				break;
			case 15:
				break;
			case 16:
				break;
		}
	}
	return 0;
}
