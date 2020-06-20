int x = 33; // 0x00000021

int y = 0x12153467;

char z[6] = "ABCDE";

int main(int argc, char **argv)
{

    return 0;
}

// gcc bss.c
// objdump -s -j .data a.out
// first column is address followed by data columns lats column is ascii representationobjdump -s -j .data a.out