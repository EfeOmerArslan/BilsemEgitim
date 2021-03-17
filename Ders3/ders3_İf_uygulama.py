#kullanıcıdan cinisyet hanesine e ya da k girilmesi istenir. Kullanıcını girdiği veriye göre cinsiyeti ekrana yazdır.
cinsiyet=input("Cinsiyetinizi giriniz e/k :")
if cinsiyet=="e" :
    print("erkek")
elif cinsiyet=="k":
    print("kadın")
else:
    print("Hatalı seçim.")