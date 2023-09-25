# securecoding-string

This project shows basic operations with C safe string library. This includes:
  - bgets
      extern bstring bgets (bNgetc getcPtr, void * parm, char terminator);
  - bdestroy
      extern int bdestroy (bstring b);
  - bconcat
      extern int bconcat (bstring b1, const_bstring b2);
  - binstr
      extern int binstr (const_bstring b1, int pos, const_bstring b2);

The bstring library is used to implement the following 3 tasks.
1. Read a string s, print s, and print the length of s.
2. Read strings s1 and s2, append s2 to s1, and print the result.
3. Read strings s1 and s2 and print a message indicating whether s2 is a substring of s1.
