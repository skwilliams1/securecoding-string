#include <stdio.h>
#include "bstrlib.h"

//Removes the newline character at the end of the bstring, if one is present.
void rmNewLine(bstring a) {
    if(a->data[a->slen - 1] == '\n') {
        bdelete(a, a->slen - 1, 1); 
    }
}

int main(void) {
    bstring s = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s) {  //Check that a string was read
        rmNewLine(s);
        printf("The input string is: %s\n", s->data);
        printf("The length of the string is: %d\n", s->slen);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    bdestroy(s);

    bstring s1 = bgets ((bNgetc) fgetc, stdin, '\n');
    bstring s2 = bgets ((bNgetc) fgetc, stdin, '\n');
    bstring s3 = bfromcstr(" ");

   if (s1 && s2) {
        rmNewLine(s1);
        rmNewLine(s2);

       bconcat (s3, s1); 
       bconcat(s3, s2); 
    
       printf("The concatenation of %s and %s is: %s \n", s1->data, s2->data, s3->data);

    }
    else {
        puts("Please provide input in the Input tab.");
    }
    bdestroy(s1);
    bdestroy(s2);
    
    bstring s4 = bgets ((bNgetc) fgetc, stdin, '\n');
    bstring s5 = bgets ((bNgetc) fgetc, stdin, '\n');
    
    if(s4 && s5) { 
        rmNewLine(s4);
        rmNewLine(s5);

        int substring =  binstr(s4, 0, s5);
        
        if (substring >= 0){
            printf("Finally, '%s' is a substring of '%s'", s5->data, s4->data);
        }
        else {
            printf("Finally, '%s' is not a substring of '%s'", s5->data, s4->data);
        }
    }
    else {
        puts("Please provide input in the Input tab.");
        
    }
    bdestroy(s4);
    bdestroy(s5);

}