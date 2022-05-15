//
// Created by gongy on 2022/5/15.
//

#include "SqList.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 100

/*静态定义顺序表*/
typedef struct SqList{
    int data[MAXSIZE];
    int length;
}SqList;

/*动态定义顺序表*/
typedef struct SeqList{
    int *data;
    int  MaxSize,length;
};

/*顺序表基本操作*/
/*初始化顺序表*/
void InitList(SqList *L);
/*插入*/
bool ListInsert(SqList &L,int i,int e);

bool ListInsert(SqList &L, int i, int e) {
    if(i<1||i>L.length+1)
        return false;
    if(L.length==MAXSIZE)
        return false;
    for(int j=L.length;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}

void InitList(SqList *L) {
    L->length = 0;
}

/*删除*/
bool ListDelete(SqList &L,int i,int &e){
    if(i<1||i>L.length)
        return false;
    e=L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
/*查找*/
int ListFind(SqList &L,int e){
    for(int i=0;i<L.length;i++)
        if(L.data[i]==e)
            return i+1;
    return 0;
}

void InitList(SqList *L) {
    L->length = 0;
}
