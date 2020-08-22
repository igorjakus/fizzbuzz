for number in range(1, 101):
    output = ''

    if number % 3 == 0:
        output += 'Fizz'
    if number % 5 == 0:
        output += 'Buzz'
    if number % 7 == 0:
        output += 'Bizz'
    if number % 9 == 0:
        output += 'Fuzz'

    if not output:
        output += str(number)
    print(output)