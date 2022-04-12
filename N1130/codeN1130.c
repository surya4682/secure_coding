#include<stdio.h>

int size = 5;

void recurse(int a) {
    void (*foo)(int)=recurse; //fix uninitialized pointer
   // foo();

    //recursive call (implement a valid recursive check mechanism to fix null dereference)
   // foo();
   if(a==0)
    {
	printf("Recursion ends here");
	return;
    }
    printf("Recursing \n");
    if(foo!=NULL)
    {
	foo(a-1);
    }

}

int main() {
    recurse(size);
    return 0;
}
