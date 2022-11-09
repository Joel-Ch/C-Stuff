#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

// the value
struct data
{
    int bin;
    int dec;
    char hex[30];
};

struct data converter(struct data data, int chooser)
{
    printf("%i, %i, %s\n", data.dec, data.bin, data.hex);
    switch (chooser)
    {
    case 1:
        // convert dec to bin
        // convert dec to hex
        break;
    case 2:
    {
        // convert binary to decimal
        int dec_value = 0, base = 1, temp = data.bin;
        while (temp)
        {
            int last_digit = temp % 10;
            temp /= 10;

            dec_value += last_digit * base;

            base *= 2;
        }

        data.dec = dec_value;

        // convert binary to hex
        int binnum, hex = 0, mul = 1, count = 1, rem, i = 0;
        while (binnum != 0)
        {
            rem = binnum % 10;
            hex = hex + (rem * mul);
            if (count % 4 == 0)
            {
                if (hex < 10)
                    data.hex[i] = hex + 48;
                else
                    data.hex[i] = hex + 55;
                mul = 1;
                hex = 0;
                count = 1;
                i++;
            }
            else
            {
                mul = mul * 2;
                count++;
            }
            binnum = binnum / 10;
        }
        if (count != 1)
            data.hex[i] = hex + 48;
        if (count == 1)
            i--;

        break;
    }
    case 3:
    {
        // convert hex to dec

        // convert hex to bin
        break;
    }
    default:
        break;
    }    



    printf("%i, %i, %s", data.dec, data.bin, data.hex);
    return data;
}

void main()
{
    int chooser;
    struct data data;
    

    printf("Please choose your input type (1 for dec, 2 for bin, 3 for hex): ");
    scanf("%i", &chooser);
    printf("Please enter the number you wish to convert: ");

    
    switch (chooser)
    {
    case 1:
        scanf("%i", &data.dec);
        break;

    case 2:
        scanf("%i", &data.bin);
        break;

    case 3:
        scanf("%s", &data.hex);
        break;

    default:
        break;
    }

    converter(data, chooser);
}