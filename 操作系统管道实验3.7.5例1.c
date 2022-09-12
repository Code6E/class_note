#include<stdio.h>
//Linux环境中药添加头文件，Unix不用添加添加头文件 
main()
{
	int x,fd[2];
	char buf[30],s[30];
	pipe(fd);
	whlie((x=fork())==-1);
	if(x==0)
	{
		sprintf(buf,"This is an example\n");
		write(fd[1],buf,30);
		exit(0);
	}
	else
	{
		wait(0);
		read(fd[0],s,30);
		printf("%s",s);
	}
 } 
