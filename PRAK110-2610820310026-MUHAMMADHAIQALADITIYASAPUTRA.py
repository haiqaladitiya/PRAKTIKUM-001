import math

tinggi = 12
alas = 5
sisiA = alas
sisiB = tinggi
sisiC = int(math.sqrt(alas * alas + tinggi * tinggi))
keliling = sisiA + sisiB + sisiC
luas = int((alas * tinggi) / 2)

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")

print("Jawab :")
print(f"Sisi A = {sisiA} cm")
print(f"Sisi B = {sisiB} cm")
print(f"Sisi C = {sisiC} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")
