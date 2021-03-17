#Bir önceki örnekteki or'lu şartı or kullanmadan yapabilir misin?
sayi=int(input("Lütfen 0'dan küçük veya 100'den büyük bir sayı giriniz:"))
if not 0<sayi<100: #0'la 100 arasında değilse.
    print("Doğru bir sayı girdiniz:")
else:
    print("Yanlış sayı girdiniz:")
