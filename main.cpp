#include <iostream>
#include <cstdint>
#include "hex_print.h"
#include "bool_print.h"
using namespace std;



//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------


/*char bit_digit(uint8_t byte,uint8_t bit){
    if(byte & (0x1<<bit)){return '1';}
    return '0';
}


void print_in_binary(uint8_t byte){
    for(int i=7;i>0;i--)
        cout<<bit_digit(byte,i);
}


void print_in_binary(void* data,size_t size) {

    const uint8_t* bytes = as_bytes(data);
    for (int i = 0; i < size; i++) {
        print_in_binary(bytes[i]);
        if ((i + 1) % 4 == 0) { cout << '\n'; }
        else { cout << ' '; }
    }
}*/


//--|\  /|-----/\-----|---|\  |---------------------------------------------------------
//--| \/ |----/__\----|---| \ |---------------------------------------------------------
//--|    |---/    \---|---|  \|---------------------------------------------------------

int main(){

    uint8_t u8 = 42;
    uint16_t u16 = 42;
    uint32_t u32 = 42;

    print_in_binary(&u8,sizeof(u8));
    print_in_binary(&u16,sizeof(u16));
    print_in_binary(&u32,sizeof(u32));

    cout<<'\n';

    print_in_hex(&u8,sizeof(u8));
    print_in_hex(&u16,sizeof(u16));
    print_in_hex(&u32,sizeof(u32));



    return 0;
}




