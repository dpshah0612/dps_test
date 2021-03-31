#include <stdio.h>

#ifdef VM
#define my_sprintf sprintf
#endif

int main()
{
    const char* src_buf = "Hello World";
    char dst_buf[32] = {0};

#ifdef VM
    //check_compile_error
    my_sprintf(dst_buf, "%s", src_buf);
#else
    sprintf(dst_buf, "%s", src_buf);
#endif

    printf("%s \n", dst_buf);

    return 0;
}

