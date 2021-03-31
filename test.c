#include <stdio.h>

int main()
{
    int uninitialized_var; //should throw error with -Werror
    const char* src_buf = "Hello World";
    char dst_buf[32] = {0};

    sprintf(dst_buf, "%s", src_buf);
    printf("%s \n", dst_buf);

    return 0;
}

