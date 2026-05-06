bool isPalindrome(int x) {
    int resto = 10;
    int dividendo, esquerda, direita;


    if(x < 100) {
        dividendo = 10;
    } else if(x >= 100) {
        dividendo = 100;
    }  
        esquerda = x / dividendo;
        direita = x % resto;
        if(esquerda == direita) {
            return true;
        } else {
            return false;
        }
}
