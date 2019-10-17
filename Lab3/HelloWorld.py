try:
    x = float(input("Input x from 1 to 5: "))

    if x <= 0 or x > 5:
        raise -1
    else:
        delta = 4  # epselon = 10^-delta
        fX = -pow(x, 2) / 2  # first element of f(x)
        varX = fX  # sum of first elements f(x)
        n = 6  # number of next element
        lastSum = 1

        # while round(varX * float(pow(x, 4) / ((n - 3) * (n - 2) * (n - 1) * n)), 4):
        # while round(lastSum - fX, delta)
        while round(lastSum, delta) != round(fX, delta):
            lastSum = fX
            varX *= (pow(x, 4) / ((n - 3) * (n - 2) * (n - 1) * n))
            n += 4
            fX += varX
            print(fX)
        print("x=" + str(x) + "; result is: " + str(round(fX, delta)))
except:
    print("Wrong input!!!")
