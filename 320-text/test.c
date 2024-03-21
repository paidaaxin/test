#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*输入单行英文句子，里面包含英文字母，空格以及,.?
三种标点符号，请将句子内每个单词进行倒序，并输出倒序后的语句
*/

void swp(char *p, int head, int end){

while (end>head)
{
    /* code */
    char temp = p[head];
    p[head] = p[end];
    p[end] = temp;
    end--;
    head++;
}
}

int fun(char * p){
    int len = strlen("free,new.");
    int head = 0;
    for(int i =0; i<=len;i++){
        if(p[i]==','||p[i]=='.'){
                swp(p,head,i-1);
                head = i+1;
        }
    }
  
printf("%s",p);

}
int main(int argc, char const *argv[])
{
    char *p =malloc(20);
    strcpy(p ,"free,new.");
fun(p);
}
