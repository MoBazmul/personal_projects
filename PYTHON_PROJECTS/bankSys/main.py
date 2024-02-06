import random
from time import sleep

from addToDb import addToDb
from bank import Bank
from client import Client
from registerClient import registerClient
import shelve


def main():
    bank = Bank()
    bank.welcomeMessage()

    helpInfo = """
    [Command]:  Usage
    [login]: Login to your account with id as passkey
    [register]: Register for an account if you don't have one
    [search]: Search for an account
    [deposit]: Deposit to your account (will only run after successfully login)
    [withdraw]: Withdraw from your account (will only run after successfully login)
    [transfer]: Transfer money to another account (will only run after successfully login)
    [balance]: Check account balance (will only run after successfully login)
    [info]: General account information (will only run after successfully login)
    [logout]: Logout if you're logged in
    [exit]: Exit the system
    """

    print("Type \"help\" to know how to use the system")
    while True:
        response = input('>> ').strip().lower()
        match response:
            case 'help':
                print(helpInfo)

            case 'login':
                passkey = bank.loginPage()
                if passkey:
                    db = shelve.open('clientdb')
                    obj = db[passkey]

                    print("\t\t\t\n------------Log In Successfully-------------")

                    while True:
                        service = input(">>> ")
                        match service:
                            case 'deposit':
                                amount = int(input("Amount: "))
                                obj.deposit(amount)
                                if obj.balance > 0:
                                    obj.accountStatus = "Active"
                                else:
                                    obj.accountStatus = "Dormant"
                                db[passkey] = obj

                            case 'withdraw':
                                amount = int(input("Amount: "))
                                obj.withdraw(amount)
                                if obj.balance > 0:
                                    obj.accountStatus = "Active"
                                else:
                                    obj.accountStatus = "Dormant"
                                db[passkey] = obj

                            case 'balance':
                                print(obj.balance)

                            case 'transfer':
                                amount = int(input("Amount to transfer: "))
                                account = input("Transfer to (use IDNo): ")
                                if account not in db.keys():
                                    print("Error: The ID No provided does not belong to any account")
                                else:
                                    obj1 = db[account]
                                    obj.balance -= amount
                                    obj1.balance += amount

                                    if obj.balance > 0:
                                        obj.accountStatus = "Active"
                                    else:
                                        obj.accountStatus = "Dormant"

                                    db[account] = obj1
                                    db[passkey] = obj

                                    print("Transferring", sep="", end="")
                                    for _ in range(4):
                                        sleep(random.randint(1, 4))
                                        print(".", sep="", end="")

                                    print("100%\nDone!")

                            case 'info':
                                print(obj)

                            case 'logout':
                                db.close()
                                break

                            case 'exit':
                                db.close()
                                return

                            case _:
                                print("Undefined Service")

                else:
                    print("Error: Incorrect passkey (use your ID No)")

            case 'register':
                details = registerClient()
                obj = Client(*details)
                addToDb(obj)

            case 'search':
                db = shelve.open('clientdb')
                idNo = input("Enter ID No.: ")

                if idNo not in db.keys():
                    print("No records found")
                    db.close()
                else:
                    obj = db[idNo]
                    print(obj)
                    db.close()

            case 'exit':
                break

            case _:
                print('Undefined Command')


if __name__ == "__main__":
    main()
