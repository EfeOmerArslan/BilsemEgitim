"""Uygulama:Kullanıcıdan"Lütfen 0'dan küçük veya 100'den büyük bir sayı giriniz:"
şeklinde bir kontrol yapan program yapınız
"""
sayi=int(input("Lütfen 0'dan küçük veya 100'den büyük bir sayı giriniz:"))
if sayi < 0 or sayi> 100:
    print("Doğru br sayı girdiniz.")
else:
    print("Yanlış sayı girdiniz:")