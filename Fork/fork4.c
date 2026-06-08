int main(void) {
    for (int i = 0; i < 3; i++) {
        fork();
    }
    return 0;
}