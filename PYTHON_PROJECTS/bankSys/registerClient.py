import re


def registerClient():
    firstName = input("First Name: ")
    while not firstName:
        print('This field must not be empty')
        firstName = input("First Name: ")
    firstName = cleanInput(firstName)

    surname = input("Surname: ")
    while not surname:
        print('This field must not be empty')
        surname = input("Surname: ")
    surname = cleanInput(surname)

    otherName = input("Other Name: ")
    otherName = cleanInput(otherName)

    idNo = input("ID No.: ")
    while not idNo:
        print('This field must not be empty')
        idNo = input("ID No.: ")
    cleanInput(idNo)

    phoneNo = input("Phone: ")
    while not phoneNo:
        print('This field must not be empty')
        phoneNo = input("Phone: ")
    cleanInput(phoneNo)

    email = input("Email: ")
    while not email or not validateEmail(email):
        print(f"Error: Invalid Email")
        email = input("Email: ")
    cleanInput(email)

    return firstName, surname, otherName, idNo, phoneNo, email


def validateEmail(email):
    if not re.search(r"^\w+@\w+\.[a-z]+$", email, re.IGNORECASE):
        return False
    return True


def cleanInput(arg):
    return arg.strip().capitalize()




