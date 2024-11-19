nilai = int(input("Masukkan angka: "))

if nilai == 0:
    print("Nol")
elif 0 < nilai < 10 :
    print("Satuan")
elif 10 == nilai or 20 <= nilai < 100 :
    print("Puluhan")
elif 10 < nilai < 20 :
    print("Belasan")
else :
    print("Anda Menginput Melebihi Limit Bilangan")