#define MAX 50

typedef int KEYTYPE;

typedef struct{
    KEYTYPE key;
} REGISTER;

typedef struct{
    REGISTER A[MAX];
    int nroElem;
} LIST;