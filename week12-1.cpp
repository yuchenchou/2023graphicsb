#include <stdio.h>
int main()
{///�ɮ׫��� fout = fopen("�ɦW","�Ҧ�");�n�}��
    FILE* fout = fopen("file.txt", "w");
    printf("Hello World\n");
    fprintf(fout, "Hello World�b�ɮ׸�\n");
}
