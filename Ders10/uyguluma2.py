#Fonksiyon 2 tane parametre alacak, buraya iki sayı gönderilecek, büyük olan yazdırılacak
def karsilastirma(a,b):
    if a>b:
        print("İlk sayı ikinci sayıdan büyüktür.")
    elif a<b :
        print("İkinci sayı birinci sayıdan büyüktür.")
    else:
        print("Bu iki sayı eşittir.")
sayi1=int(input("Birinci sayıyı giriniz:"))
sayi2=int(input("İkinci sayıyı giriniz:"))
karsilastirma(sayi1,sayi2)