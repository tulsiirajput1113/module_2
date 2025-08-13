#include<stdio.h>
#include<string.h>

 main()
 {
    FILE *fp;
    char text[100];

    
    fp = fopen("myfile.txt", "w");
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);  
    fprintf(fp, "%s", text);
    fclose(fp);

    
    fp = fopen("myfile.txt", "r");
    fgets(text, sizeof(text), fp);     
    printf("File content: %s", text);
    fclose(fp);

    
}

