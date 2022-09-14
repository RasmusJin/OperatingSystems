
int main() {
    while (1) {
        type_prompt();
        read_command(command, parameters);
        if(fork() != 0){
            /*parent code*/
            waitpid(-1, &status, 0);
        } else {
            /*child code*/
            execve(command, parameters, 0);
        }
    }
}

