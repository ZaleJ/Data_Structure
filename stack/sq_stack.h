#ifndef __SQ_STACK_H__
#define __SQ_STACK_H__

#include "node.h"
#include <iostream>
using namespace std;

template <class ElemType>
class SqStack{
	private:
		int count;
		int maxSize;
		ElemType *elems;
	public:
		SqStack( int  size);  //size为栈的长度
    	virtual ~SqStack( );
    	void  Clear( );
    	bool  Empty( );
    	int  Length( );
    	bool Full();
    	bool Push(ElemType e); //新元素入栈
    	bool Pop(ElemType &e); //出栈，即删除栈顶元素
    	bool Top(ElemType &e); //读栈，即读取栈顶元素
    	void Traverse( );

};


template <class ElemType>
SqStack<ElemType>::SqStack(int size){
	elems = new ElemType[maxSize];
	if(elems == NULL){
		cout << "init error.";
		return;
	}
	maxSize = size;
	count = 0;
	return;
}


template <class ElemType>
SqStack<ElemType>::~SqStack(){
	delete []elems;
	maxSize = 0;
	count = 0;
	return;
} 


 template <class ElemType>
 void SqStack<ElemType>::Clear(){
 	count = 0;
 	return;
 }


template <class ElemType>
bool SqStack<ElemType>::Empty(){
	
	return count == 0;
}

template <class ElemType>
bool SqStack<ElemType>::Full(){
	return count == maxSize;
}

template <class ElemType>
int SqStack<ElemType>::Length(){
	return count;
}


template <class ElemType>
bool SqStack<ElemType>::Push(ElemType e){
	if(Full()){
		cout << "fulled";
		return false;
	}else{
		elems[count] = e;
		++count;
		return true;
	}
	return false;
}


template <class ElemType>
bool SqStack<ElemType>::Pop(ElemType &e){
	if(Empty()){
		return false;
	}else{
		e = elems[count - 1];
		--count;
		return true;
	}
	return false;
}

template <class ElemType>
bool SqStack<ElemType>::Top(ElemType &e){
	if(Empty()){
		cout << "Empty";
		return false;
	}else{
		e = elems[count-1];
		
	}
	return true;
}

template <class ElemType>
void SqStack<ElemType>::Traverse(){
	for(int i = 1; i <= count; ++i){
		cout << elems[i-1];
	}
	return;
}
#endif
