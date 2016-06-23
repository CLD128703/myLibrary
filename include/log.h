#include <stdarg.h>
#include <stdio.h>
#ifndef __Debug_Log_
#define __Debug_Log_
typedef enum LOG_Level
{
LOG_DEBUG=0,
LOG_INFO,LOG_WARN,LOG_ERROR,LOG_FATAL
} LOG_Level;
#ifndef DEBUG_FILE
#define DEBUG_FILE "debug_out.log"
#endif // DEBUG_FILE

void mlog(LOG_Level level,const char *format, ...)
{
#ifdef DEBUG
    static int first = 1;
    FILE *file = fopen(DEBUG_FILE, first==1 ? "w+" : "a+");
    va_list args;
    va_start(args, format);
    if (first==1)
        fprintf(file, "\nmLibrary debug file\n \tIn %s\n\t\tTime:%s\n", __DATE__, __TIME__);
    fprintf(file, "\n[%d]>%s\t",level,__TIME__);
    vfprintf(File, format, args);
    fprintf(file, "\n");
    va_end(args);
    first = 0;
    fclose(file);
#else
    remove(DEBUG_FILE);
#endif  // DEBUG
}

#endif // __Debug_Log_
