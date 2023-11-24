
import datetime

class User:
    def __init__(self, name, password) -> None:
        self.name = name
        self.password = password


class Customer(User):
    def __init__(self, bank) -> None:
        
        self.bank = bank
        self.balance = 0
        self.history = []
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            self.bank.total_balance += amount
            self.history.append(f'\nDeposited {amount} Tk on {datetime.datetime.now()}.\n')
            print(f'\nSuccessfully deposited {amount} Tk on your account\n.')
            
        else:
            print(f'\nUnacceptable {amount} Tk, please deposit more than 0 Tk\n.')
            
    def withdraw(self,amount):
        if amount > self.balance:
            print(f'\nInsufficient balance\n.')
        elif amount < self.min_withdraw:
            print(f'\nSorry sir, you can not withdraw less then {self.min_withdraw} Tk\n.')
        elif amount <= self.balance and amount > self.max_withdraw:
            print(f'\nSorry sir, you can not withdraw more the {self.max_withdraw} Tk.\n')   
        else:
            self.balance -= amount
            self.bank.total_balance -= amount
            self.history.append(f'\nWithdrawn {amount} Tk on {datetime.datetime.now()}.\n')
            print(f'\n{amount} Tk withdrawn successfully.\n')
            

    def check_balance(self):
        print(f'\nYou have {self.balance} Tk on your account\n.')
        
    def transfer_balance(self,amount):
        if amount <= self.balance:
            self.balance -= amount
            self.history.append(f'\nTransferred {amount} Tk on {datetime.datetime.now()}\n.')
            print(f'\nSuccessfully transferred {amount} Tk.\n')
            
        else:
            print(f'\nYou do not have sufficient balance to transfer.\n')
            
    def loan(self, amount):
        if amount <= 2*self.balance:
            self.balance += amount
            self.bank.total_loan += amount
            self.history.append(f'\nLoan {amount} Tk on {datetime.datetime.now()}\n')
            print(f'\nLoan {amount} Tk added on your account.\n')
            
        else:
            print(f'\nYou are unable to loan {amount} Tk.\n')
            
    def transaction_history(self):
        for transaction in self.history:
            print()
            print(transaction)
            print()
            
            
    

            

class Bank:
    def __init__(self, name) -> None:
        self.name = name
        self.total_balance = 0
        self.total_loan = 0
        self.loan_feature = True
        
        

    def check_total_balance(self):
        return self.total_balance
    
    def check_loan(self):
        return self.total_loan
    
    def enable_loan_feature(self):
        self.loan_feature = True
        print(f'\nLoan feature is enable.\n')
        
    def disable_loan_feature(self):
        self.loan_feature = False
        print(f'\nLoan feature is disable.\n')
        


class Admin(User):
    def __init__(self, bank) -> None:
        self.bank = bank

    def check_total_balance(self):
        total_balance = self.bank.check_total_balance()
        print(f'\nTotal Balance on your account  {total_balance} Tk.\n')
        
    def check_total_loan(self):
        total_loan = self.bank.check_loan()
        print(f'\nTotal loan on your account {total_loan} Tk.\n')
        
    def enable_loan(self):
        self.bank.enable_loan_feature()
        
    def disable_loan(self):
        self.bank.disable_loan_feature()
        
        
        


    
bank = Bank('XYZ Bank Ltd.')
customer = Customer(bank)
admin = Admin(bank)

print()
print(f'----------Welcome to our {bank.name}----------')

flag = True
while flag:
    print('\n1.Create user account\n2.Create admin account\n')
    print('Enter your choice Sir :')

    a = int(input())
    if a == 1:
       
        name = input('\nEnter your name : ')
        
        password = input('\nEnter your password : ')
       
        print('\nContinue as user : ')
        
        flag1 = True
        while(flag1):
            
            print('\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Transfer Balance\n5.Loan Balance\n6.Transaction History\n')
            
            print('\nEnter your choice Sir : ')
            b = int(input())
            if b == 1:
               
                print(f'\nAmount of money you want to deposit : ')
                amount = int(input())
                customer.deposit(amount)
                
            elif b == 2:
                
                print(f'\nAmount of money you want to withdraw : ')
                amount = int(input())
                customer.withdraw(amount)
                
            elif b == 3:
                customer.check_balance()
                
            elif b == 4:
                
                print(f'\nAmount of money you want to transfer : ')
                amount = int(input())
                customer.transfer_balance(amount)
                
            elif b == 5:
                if bank.loan_feature:
                    
                    print(f'\nAmount of money you want to loan : ')
                    amount = int(input())
                    customer.loan(amount)
                else:
                    print()
                    print(f'\nSorry Sir, our loan feature is currently off.')
                    print()
            elif b == 6:
                customer.transaction_history()
                
           
            else:
                print(f'\nYou pressed wrong key.')
                flag1 = False
        
    elif a == 2:
       
        name = input('Enter your name : ')
        password = input('Enter your password : ')
        print()
        flag2 = True
        while(flag2):
            print('\n1.Check Total Balance\n2.Check Total Loan Balance\n3.Enable Loan Feature\n4.Disable Loan Feature')
            print('\nEnter your choice Sir : ')
            c = int(input())
            if c == 1:
                admin.check_total_balance()
            elif c == 2:
                admin.check_total_loan()
                
            elif c == 3:
                admin.enable_loan()
                
            elif c == 4:
                admin.disable_loan()
                
            else:
                print(f'\nYou pressed wrong key.\n')
                flag2 = False
                
    else:
        print(f'\nPlease, press the right key.')
        
                
                
                


