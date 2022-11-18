#include <stdio.h>
#include<string.h>
int main(){
	char c[105];
	scanf("%s",&c);
	int n=strlen(c);
	for(int i=0;c[i]!='\0';i++){
		if(c[i]>='a'&&c[i]<='z'){
			c[i]=c[i]-'a'+'A';
		}
		else if(c[i]>='A'&&c[i]<='Z'){
			c[i]=c[i]-'A'+'a';
		}
	}
	printf("%s\n",c);
	return 0;
}
