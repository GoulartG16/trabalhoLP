int todos_os_primos(int max) {
	for (int i = 1; i <= max; i++){
		if (eh_primo(i) == 1) {
            printf("%d ", i);
        } 
	}
}
