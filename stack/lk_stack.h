#ifndef __LINK_STACK_H__
#define __LINK_STACK_H__
#include "node.h"
#include <iostream>
using namespace std;
template<class ElemType>
class LinkStack 
{
	private:
		Node<ElemType> *top;	// 栈顶指针
    	int count;     //栈长度
	public:
		LinkStack( );  
		virtual ~LinkStack( );
		void  Clear( );
 	    bool  Empty( );
    	int  Length( );
    	bool Push(ElemType e); //新元素入栈
    	bool Pop(ElemType &e); //出栈，即删除栈顶元素
    	bool Top(ElemType &e); //读栈，即读取栈顶元素
    	void Traverse( );
    	//void SysConvert();
};

template<class ElemType>
LinkStack<ElemType>::LinkStack(){
	top = NULL;
    count=0;
	return;
}


template <class ElemType>
LinkStack<ElemType>:: ~LinkStack( ){
	Clear();	
}


template<class ElemType>
void LinkStack<ElemType>::Clear(){
    Node<ElemType> *p;
    while(top!=NULL){        
		p=top;
        top=top->next;
        delete p;
    }
    count=0;
}

template<class ElemType>
bool LinkStack<ElemType>::Empty(){
	return top == NULL;
}


template <class ElemType>
int LinkStack<ElemType>::Length(){
	return count;
}


template<class ElemType>
bool LinkStack<ElemType>::Push(ElemType e){    
	Node<ElemType> *newtop = new Node<ElemType>;
	newtop->data = e;
	newtop->next = top;
    top = newtop;    
	count++;
	return true;

}


template<class ElemType>
bool LinkStack<ElemType>::Pop(ElemType &e) {
    if (Empty()){
    	return false;
    }else{
		Node<ElemType> *old_top = top;	
		e = old_top->data;				
		top = old_top->next;			
		delete old_top;	count--;				
		return true;
	}
}


template<class ElemType>
bool LinkStack<ElemType>::Top(ElemType &e){
	if(Empty()){
		return false;
    }else{
		e = top->data;	
		return true;
	}
}


template <class ElemType>
void LinkStack<ElemType>::Traverse( ) {  
	Node<ElemType> *tmpPtr;		
	for (tmpPtr = top; tmpPtr != NULL; tmpPtr = tmpPtr->next){
		cout<<tmpPtr->data<<'\t';    
	}
}



















#endif
