print("********************\nATM sistemine hoşgeldiniz\n********************")

print("""
İşlemler:

1. Bakiye Sorgulama
2. Para Yatırma
3. Para Çekme

Programdan 'q' tuşu ile çıkabilirsiniz.

""")
# Kullanıcının hesabında 1000 lira var. Para yatırmayı seçtiğinde istenilen değerde  lira yatıracak.
# Para çek dediğinde istenilen değerde para çekilecek ama
# eksiye düşemeyecek


para=1000
while True :
    islem = input("İşlem seçiniz : ")
    if islem == "1" :
        print(para)

    elif islem =="2" :
        yatirma=int(input("Yatırmak istediğiniz miktarı giriniz:"))
        para+=yatirma
        print(para)
    elif islem =="3":
        cekmek=int(input("Çekmek istediğiniz miktarı giriniz:"))
        para-=cekmek
        print(para)
    elif islem=="q" :
        print("İyi günler")
        break





