
def menu(scelta) : # define a function
    print ('''
    benvenuto nella calcolatrice
    per somma = 1
    per sott = 2
    per molt = 3
    per div = 4
    per espon = 5
    per esc = esc
    ''') #write in output stream what you want, the tree quote       consider the start of new line, which otherwise is written as \n
    scelta = input("inserisci qui il numero corrispondente: ")
    return scelta #return of a function

scelta = 'ciao'#this is a variable, it doesn't have a type
while scelta != 'esc': #this is a loop, it repeats the code written inside it until a condition is true
    scelta=menu(scelta)#in this line i call the function menu and i assign the its return to the variable scelta
    try : # with the command 'try' and 'except' i control the exception
        if scelta=='1': #this is a choise, it runs the code if a condition is true
            print("\nhai scelto somma\n")
            a=float(input ("inserisci a:"))
            b=float(input ("inserisci b:"))
            print("\nil risultato è:"+ str(a+b))
        elif scelta=='2':
            print("\nhai scelto sottrazione\n")
            a=float(input ("inserisci a:"))
            b=float(input ("inserisci b:"))
            print("\nil risultato è:"+ str(a-b))
        elif scelta=='3':
            print("\nhai scelto moltiplicazione\n")
            a=float(input ("inserisci a:"))
            b=float(input ("inserisci b:"))
            print("\nil risultato è:"+ str(a*b))
        elif scelta=='4':
            print("\nhai scelto divisione\n")
            a=float(input ("inserisci a:"))
            b=float(input ("inserisci b:"))
            print("\nil risultato è:"+ str(a/b))
        elif scelta=='5':
            print("\nhai scelto esponenziale\n")
            a=float(input ("inserisci a:"))
            b=float(input ("inserisci b:"))
            print("\nil risultato è:"+ str(a**b))
        if scelta != 'esc':
            fine= input('desideri continuare? si/no :')
        if fine == 'no':
            break
        print("____________________________________________")
    except ValueError: #it runs the code only if the 'ValueError' exception occurs
        print("inserisci numeri")
        continue
    except ZeroDivisionError:
        print ("hai diviso per zero ")
        continue


