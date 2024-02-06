from time import sleep
import shelve


class Bank:

    bankInitials = "14451"

    def __init__(self, name='MOBAZMUL', bankId='234FR'):
        self.name = name
        self._bankId = bankId

    @property
    def bankId(self):
        return self._bankId

    def welcomeMessage(self):
        message = "\n\t\t\t\tWELCOME TO " + self.name + " BANK\n\t\t\t     BANK CONVENIENTLY WITH US 24/7\n"
        for i in range(len(message)):
            print(message[i], end="")
            sleep(.1)

    def loginPage(self):
        print("\n\t\t\tLogIn Information")
        passkey = input("Enter Passkey (ID No.): ").strip()
        db = shelve.open('clientdb')
        if passkey in list(db.keys()):
            db.close()
            return passkey
        print("Error: Couldn't log in, Check passkey or Register")


