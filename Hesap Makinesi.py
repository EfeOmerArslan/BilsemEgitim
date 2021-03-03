print("""HESAP MAKİNESİ
1-TOPLAMA
2-ÇIKARMA
3-ÇARPMA
4-BÖLME
LÜTFEN BİR SEÇİM YAPINIZ
ÇIKMAK İÇİN \"ÇIKIŞ\"YAZINIZ""") #\ sonraki karakteri görme demek

islem=input("Seçiminiz 1-4 :")

sayi1 = int(input("Birinci Sayıyı Giriniz:"))
sayi2 = int(input("İkinci Sayıyı Giriniz:"))

if islem=="1" :
    print(sayi1+sayi2)
elif islem=="2":
    print(sayi1-sayi2)
elif islem == "3":
    print(sayi1 * sayi2)
elif islem=="4":
    print(sayi1 / sayi2)
elif islem=="çıkış":
    print("Hoşçakal...")
else :
    print("Hatalı Seçim")
