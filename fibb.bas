
main:
    definitions:
    r0 = total
    r1 = one
    r2 = two
    r3 = loopcount
    r4 = endvalue
    r5 = "Fibonnaci number "
    r6 = " is "

    enter r4

    is r4 = 0
        yes -> goto fail()
        no -> continue
    is r4 = 1
        yes -> goto fail()
        no -> continue
    r1 = 1
    r2 = 1

    mainloop()
        r0 = r1 + r2
        print r5
        print r3
        print r6
        print r0
        r2 = r1
        r1 = r0
        r3 = r3 + 1
        is r3 = r4
            yes -> goto end()
            no -> goto mainloop()
    fail()
        print r5
        print r6
        print #1
        goto end()
