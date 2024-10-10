#include<stdio.h>


int main(){
    char s[] = "Samrendra";
    int counter;
    /*
    * But C sees this character array(also called String) s[] = "Shatner" as s[] = "Shatner\0"
    * Here '\0' is the numm terminating character also known as sentinel character
    * This is an additional character at the end of the string.
    * Whenever the computer needs to read the contents of a string,
    * it goes through the contents of the character array that makes up the string 
    * one at a time, until it reaches \0.
    * 
    * i.e, wahen the computer sees s = "Shatner" it reads it like it was just an array of seperate 
    * characters and stores it in memory like
    * 
    * S     h       a       t       n       e       r       \0
    * s[0]  s[1]    s[2]    s[3]    s[4]    s[5]    s[6]    s[7]
    * 
    * where the last character of the string becomes the null character - '\0'.
    * That's why in our code we need to define character arrays with one character
    * ex: 
    *       char card_name[3];
    * 
    * The card_name string is only ever going to record one or two character,
    * but because strings end with a null character at the end, we have to allow for 
    * an extra character in the array.
    */

    printf("[%s]\n", s);
    printf("[%c]\n", s[0]);
    printf("[%c]\n", s[1]);
    printf("[%c]\n", s[6]);
    printf("[%c]\n", s[9]); // null character is defined as control character and thus its unprintable.

    for(counter = 0; counter < sizeof(s); counter++){
        printf("%c\n", s[counter]);
    }


    s[0] = 'L';
    printf("%s\n", s);

    /*
    * Since we can access each individual character in Strings in C.
    * Thus we are able to modify each oif these characters and this we have a 
    * lot more control over the string in C
    * As powerful as this sounds it also very dangerous thus we need to be
    * very carefull with strings in C. 
    * 
    * In other languages the strings are generally immutable.
    */


   /*
   *
   * printf("At index 10: [%c]\n", s[1000001001]);
   * What is segmentation fault - core dumped error
   * 
   */

   //removing null terminating charcter form a C String(Character Array)
   s[9] = 'H';
   printf("The String arfter replacing the null character: [%s]\n", s);
   /*
   *
   * After we insert a character at the position of the  null terminating character
   * the null character '\0' shifts to the next memory location and at the place of null character the 
   * character that we insert is added.
   * Thus the total size of the array is increased by 1 or by the no of times a character is added to the array.
   */

   //we can also uise the null terminating character to  shorten the string
   //or end the string at a certain position
   s[5] = '\0';
   printf("String after inserting null terminating character at index 5 : [%s]\n", s);


   /*
   * here we see how flexible the C strings are.
   * 1. they are character array and we can operate on them as if we are operating on
   *    a array of character.
   * 2. we can assign new character to the strings(chgaracter arrays), making them mutable.
   * 3. we can access each individual elemnts of the string in C, which enables us to 
   *    completely modify the contents of the string. creating a very string. 
   *    This allows the reusablity of the strings.
   *    
   *    Ex: Assign the first character of any existing string to '\0' null terminating 
   *    character. Now we have nothing in that string.
   * 4. we can also insert the null terminating character at any index to shorten the string.
   * 5. we also find out what is 'segementyation fault - core dumped' error.
   */
    return 0;
}