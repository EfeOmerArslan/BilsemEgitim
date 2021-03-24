#Listeler birden fazla veri tipindeki değerleri kendi içerisinde tutabiliyor.
isim="efe"
liste=[1,2,3,"efe",4,5]
bosliste=[]
bosliste2=list()

print(type(isim))
print(type(liste))
print(type(bosliste)) #Bize değişkenin tipini verir.

print(liste)

#Listenin elemanlarına ulaşmak
print(liste[3]) #Sıfırıncı indeksten başlar
print(liste[0]) #Listenin ilk elemanını ekrana yazdırır.

#Listenin eleman sayısını bulma
print(len(liste))
