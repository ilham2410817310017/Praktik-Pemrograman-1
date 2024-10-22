harga_sepatu_A = 400000
harga_sepatu_B = 350000

diskon_A = 0.13  # 13%
diskon_B = 0.21  # 21%

print("Harga sepatu A adalah", harga_sepatu_A)
print("Harga sepatu B adalah", harga_sepatu_B)

harga_setelah_diskon_A = harga_sepatu_A * (1 - diskon_A)
harga_setelah_diskon_B = harga_sepatu_B * (1 - diskon_B)

print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", round(harga_setelah_diskon_A))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi", round(harga_setelah_diskon_B))
