#line 0"mkdirSplitpath.c"

#include <string.h>
#include "types.h"
#include <stdio.h>

#ifdef __GNUC__

#define PRINT_HELPER(a)_Generic(a,void*:printf("%p",a),char*:printf("%s",a),char const*:printf("%s",a),char:printf("%c",a),signed char:printf("%d",a),signed short:printf("%d",a),signed int:printf("%d",a),signed long:printf("%ld",a),signed long long:printf("%lld",a),unsigned char:printf("%u",a),unsigned short:printf("%u",a),unsigned int:printf("%u",a),unsigned long:printf("%lu",a),unsigned long long:printf("%llu",a),float:printf("%f",a),double:printf("%f",a),long double:printf("%Lf",a),_Complex char:({__auto_type PRINT_HELPER=a;printf("%c%c",__real__*(_Complex char*)&PRINT_HELPER,__imag__*(_Complex char*)&PRINT_HELPER);}),_Complex signed char:({__auto_type PRINT_HELPER=a;printf("(%d, %d)",__real__*(_Complex signed char*)&PRINT_HELPER,__imag__*(_Complex signed char*)&PRINT_HELPER);}),_Complex signed short:({__auto_type PRINT_HELPER=a;printf("(%d, %d)",__real__*(_Complex signed short*)&PRINT_HELPER,__imag__*(_Complex signed short*)&PRINT_HELPER);}),_Complex signed int:({__auto_type PRINT_HELPER=a;printf("(%d, %d)",__real__*(_Complex signed int*)&PRINT_HELPER,__imag__*(_Complex signed int*)&PRINT_HELPER);}),_Complex signed long:({__auto_type PRINT_HELPER=a;printf("(%ld, %ld)",__real__*(_Complex signed long*)&PRINT_HELPER,__imag__*(_Complex signed long*)&PRINT_HELPER);}),_Complex signed long long:({__auto_type PRINT_HELPER=a;printf("(%lld, %lld)",__real__*(_Complex signed long long*)&PRINT_HELPER,__imag__*(_Complex signed long long*)&PRINT_HELPER);}),_Complex unsigned char:({__auto_type PRINT_HELPER=a;printf("(%u, %u)",__real__*(_Complex unsigned char*)&PRINT_HELPER,__imag__*(_Complex unsigned char*)&PRINT_HELPER);}),_Complex unsigned short:({__auto_type PRINT_HELPER=a;printf("(%u, %u)",__real__*(_Complex unsigned short*)&PRINT_HELPER,__imag__*(_Complex unsigned short*)&PRINT_HELPER);}),_Complex unsigned int:({__auto_type PRINT_HELPER=a;printf("(%u, %u)",__real__*(_Complex unsigned int*)&PRINT_HELPER,__imag__*(_Complex unsigned int*)&PRINT_HELPER);}),_Complex unsigned long:({__auto_type PRINT_HELPER=a;printf("(%lu, %lu)",__real__*(_Complex unsigned long*)&PRINT_HELPER,__imag__*(_Complex unsigned long*)&PRINT_HELPER);}),_Complex unsigned long long:({__auto_type PRINT_HELPER=a;printf("(%llu, %llu)",__real__*(_Complex unsigned long long*)&PRINT_HELPER,__imag__*(_Complex unsigned long long*)&PRINT_HELPER);}),_Complex float:({__auto_type PRINT_HELPER=a;printf("(%f, %f)",__real__*(_Complex float*)&PRINT_HELPER,__imag__*(_Complex float*)&PRINT_HELPER);}),_Complex double:({__auto_type PRINT_HELPER=a;printf("(%f, %f)",__real__*(_Complex double*)&PRINT_HELPER,__imag__*(_Complex double*)&PRINT_HELPER);}),_Complex long double:({__auto_type PRINT_HELPER=a;printf("(%Lf, %Lf)",__real__*(_Complex long double*)&PRINT_HELPER,__imag__*(_Complex long double*)&PRINT_HELPER);}))

































#define SCAN_HELPER(a)_Generic(a,char*:scanf("%s",a),signed char*:scanf("%hhd",a),signed short*:scanf("%hd",a),signed int*:scanf("%d",a),signed long*:scanf("%ld",a),signed long long*:scanf("%lld",a),unsigned char*:scanf("%hhu",a),unsigned short*:scanf("%hu",a),unsigned int*:scanf("%u",a),unsigned long*:scanf("%lu",a),unsigned long long*:scanf("%llu",a),float*:scanf("%f",a),double*:scanf("%lf",a),long double*:scanf("%Lf",a),_Complex char*:({__auto_type SCAN_HELPER=a;scanf("%c%c",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex signed char*:({__auto_type SCAN_HELPER=a;scanf("%hhd%hhd",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex signed short*:({__auto_type SCAN_HELPER=a;scanf("%hd%hd",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex signed int*:({__auto_type SCAN_HELPER=a;scanf("%d%d",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex signed long*:({__auto_type SCAN_HELPER=a;scanf("%ld%ld",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex signed long long*:({__auto_type SCAN_HELPER=a;scanf("%lld%lld",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex unsigned char*:({__auto_type SCAN_HELPER=a;scanf("%hhu%hhu",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex unsigned short*:({__auto_type SCAN_HELPER=a;scanf("%hu%hu",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex unsigned int*:({__auto_type SCAN_HELPER=a;scanf("%u%u",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex unsigned long*:({__auto_type SCAN_HELPER=a;scanf("%lu%lu",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex unsigned long long*:({__auto_type SCAN_HELPER=a;scanf("%llu%llu",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex float*:({__auto_type SCAN_HELPER=a;scanf("%f%f",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex double*:({__auto_type SCAN_HELPER=a;scanf("%lf%lf",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}),_Complex long double*:({__auto_type SCAN_HELPER=a;scanf("%Lf%Lf",&__real__*SCAN_HELPER,&__imag__*SCAN_HELPER);}))






























#else

#define PRINT_HELPER(a)printf(_Generic(a,void*:"%p",char*:"%s",char const*:"%s",char:"%c",,signed char:"%d",signed short:"%d",signed int:"%d",signed long:"%ld",signed long long:"%lld",unsigned char:"%u",unsigned short:"%u",unsigned int:"%u",unsigned long:"%lu",unsigned long long:"%llu",float:"%f",double:"%f",long double:"%Lf"),a)



















#define SCAN_HELPER(a)scanf(_Generic(a,char*:"%s",signed char*:"%hhd",signed short*:"%hd",signed int*:"%d",signed long*:"%ld",signed long long*:"%lld",unsigned char*:"%hhu",unsigned short*:"%hu",unsigned int*:"%u",unsigned long*:"%lu",unsigned long long*:"%llu",float*:"%f",double*:"%lf",long double*:"%Lf"),a)
















#endif


#define PARENS ()

#define EXPAND(...)EXPAND4(EXPAND4(EXPAND4(EXPAND4(__VA_ARGS__))))
#define EXPAND4(...)EXPAND3(EXPAND3(EXPAND3(EXPAND3(__VA_ARGS__))))
#define EXPAND3(...)EXPAND2(EXPAND2(EXPAND2(EXPAND2(__VA_ARGS__))))
#define EXPAND2(...)EXPAND1(EXPAND1(EXPAND1(EXPAND1(__VA_ARGS__))))
#define EXPAND1(...)__VA_ARGS__

#define FOR_EACH(macro,...)__VA_OPT__(EXPAND(FOR_EACH_HELPER(macro,__VA_ARGS__)))
#define FOR_EACH_HELPER(macro,a,...)macro(a)__VA_OPT__(,FOR_EACH_AGAIN PARENS (macro,__VA_ARGS__))
#define FOR_EACH_AGAIN()FOR_EACH_HELPER

#define print(...)__VA_OPT__((FOR_EACH(PRINT_HELPER,__VA_ARGS__)))
#define println(...)print(__VA_OPT__(__VA_ARGS__,)(char)'\n')
#define scan(...)__VA_OPT__(FOR_EACH(SCAN_HELPER,__VA_ARGS__))

typedef struct NODE Node;

extern Node *root;
extern Node *cwd;

void mkdir(char pathName[]){
if(!strcmp(pathName,"/")){
println("MKDIR ERROR: no path provided");
return;}
char baseName[999];
char dirName[999];
Node *parentPtr=splitPath(pathName, baseName, dirName);
if(!parentPtr){
return;}
Node **node=&(parentPtr->childPtr);
while(*node){
if(!strcmp((*node)->name,baseName)){
println("MKDIR ERROR: directory ",pathName," already exists");
return;}
node=&((*node)->siblingPtr);}
Node *temp=*node=(Node *)malloc(sizeof(Node));
strcpy(temp->name,baseName);
temp->fileType='D';
temp->childPtr=0;
temp->siblingPtr=0;
temp->parentPtr=parentPtr;
println("MKDIR SUCCESS: node ",pathName," successfully created");}

Node *splitPath(char *pathName, char *baseName, char *dirName){

char *slash=pathName;
while(*slash){
++slash;}
while(slash!=pathName&&*slash!='/'){
--slash;}

{
char *a=dirName;
char *b=pathName;
while(b!=slash){
*a++=*b++;}
*a=0;}

{
char *a=baseName;
char *b=slash+(*slash=='/');
while(*a++=*b++);}

Node *node=(*pathName=='/'?root:cwd);
for(char *name=strtok(dirName,"/"); name; name=strtok(0,"/")){
Node *childPtr=node->childPtr;
while(strcmp(name,childPtr->name)){
if(!(childPtr=childPtr->siblingPtr)){
println("ERROR: directory ",dirName," does not exist");
return 0;}}
node=childPtr;}

return node;}
