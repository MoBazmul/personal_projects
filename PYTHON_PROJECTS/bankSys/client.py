import random
from registerClient import registerClient
from bank import Bank


class Client:
    bankInitials = Bank.bankInitials

    def __init__(self, firstName, surname, otherName, idNo, phone, email):
        self.firstName = firstName
        self.surname = surname
        self.otherName = otherName
        self.idNo = idNo
        self.phone = phone
        self.email = email

        self._accountNo = Client.generateAccountNo()
        self.balance = 0
        self.accountStatus = None

    @classmethod
    def generateAccountNo(cls):
        for _ in range(2):
            cls.bankInitials += str(random.randint(100, 999))
        return cls.bankInitials

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount

    def __repr__(self):
        return f"""
          First Name:       {self.firstName}
          Surname:          {self.surname}
          Other Name:       {self.otherName}
          ID No.:           {self.idNo}
          Email:            {self.email}
          Phone:            {self.phone}
          Account No.:      {self._accountNo}
          Account Bal:      {self.balance}
          Account Stat:     {self.accountStatus}
          """
