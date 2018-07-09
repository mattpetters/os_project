void dummy_test_entrypoint(){

}

void main(){
    char * videoMemory = (char*) 0xb8000;
    *videoMemory = 'x';
}
