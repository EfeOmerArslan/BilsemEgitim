#kullanıcıdan cinisyet hanesine e ya da k girilmesi istenir. Kullanıcını girdiği veriye göre cinsiyeti ekrana yazdır.
cinsiyet=input("Cinsiyetinizi giriniz e/k :")
#cinsiyet=cinsiyet.lower()

if cinsiyet.lower()=="e" :
    print("erkek")
elif cinsiyet.lower()=="k":
    print("kadın")
else:
    print("Hatalı seçim.")