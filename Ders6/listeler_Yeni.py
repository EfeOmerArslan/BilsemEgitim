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

liste.pop() #Listenin son elemanını siler
print(liste)
liste.pop(2)#2. indexteki yani 3 elemanı siler
print(liste)

liste3=[2,3,4,8,5,4,3,1,9,4,6,7,2]
#sort metodu
print(liste3)
liste3.sort() #Listeyi küçükten büyüğe doğru sıralar, string is a'dan z'ye doğru sıralar
print(liste3)
liste3.sort(reverse=True) #Listeyi büyükten küçüğe(tersten)sıralar
print(liste3)