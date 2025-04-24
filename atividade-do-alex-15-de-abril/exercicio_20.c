
    #include <stdio.h>

    int main() {
        char c1, c2, c3;  
       
        printf("digite a primeira palavra:");
        
        if (scanf(" %c", &c1) != 1) {  
            
            printf("entrada nao esta correta.\n");
            
            return 1;
        }
    
    
        
        printf("digite de a segunda palarvra:");
        
        if (scanf(" %c", &c2) != 1) {
        
            printf("entrada errada\n");
        
            return 1;
        }
    
        printf("digite a terceira palavra:");
       
        if (scanf(" %c", &c3) != 1) {
       
            printf("entrada errada.\n");
       
            return 1;
        }
    
        if (c1 > c2) {  
            
            char temp = c1;
            
            c1 = c2;
            
            c2 = temp;
        }
    
        if (c1 > c3) {  
            
            char temp = c1;
            
            c1 = c3;
            
            c3 = temp;
        }
    
        if (c2 > c3) {  
            
            char temp = c2;
            
            c2 = c3;
            
            c3 = temp;
        }
        
        printf("as suas 3 palavras : %c %c %c\n", c1, c2, c3);
    
        return 0;






}