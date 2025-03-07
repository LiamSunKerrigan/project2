#line 0"mkdirSplitpath.c"

#include "types.h"

typedef struct NODE Node;

extern Node *root, *cwd;

void mkdir(char *pathName){
if(!strcmp(pathName, "/")){
printf("MKDIR ERROR: no path provided\n");
return;}
char baseName[999], dirName[999];
Node *parentPtr, *node, **nodePtr;
if(parentPtr = splitPath(pathName, baseName, dirName)){
for(nodePtr = &(parentPtr->childPtr); node = *nodePtr; nodePtr = &(node->siblingPtr)){
if(!strcmp(node->name, baseName)){
printf("MKDIR ERROR: directory %s already exists\n", pathName);
return;}}
node = *nodePtr = (Node *)malloc(sizeof(Node));
strcpy(node->name, baseName);
node->fileType = 'D';
node->childPtr = node->siblingPtr = 0;
node->parentPtr = parentPtr;
printf("MKDIR SUCCESS: node %s successfully created\n", pathName);}}

Node *splitPath(char *pathName, char *baseName, char *dirName){
{
char *lastSlash = pathName;
while(*lastSlash){
++lastSlash;}
while(lastSlash != pathName && *lastSlash != '/'){
--lastSlash;}
strcpy(baseName, lastSlash + (*lastSlash == '/'));
{
char *dst = dirName;
char *src = pathName;
while(src != lastSlash){
*dst++ = *src++;}
*dst = 0;}}
Node *node = (*pathName == '/' ? root : cwd);
for(char *name = strtok(dirName, "/"); name; name = strtok(0, "/")){
Node *childPtr = node->childPtr;
while(strcmp(name, childPtr->name)){
if(!(childPtr = childPtr->siblingPtr)){
printf("ERROR: directory %s does not exist\n", dirName);
return 0;}}
node = childPtr;}
return node;}
