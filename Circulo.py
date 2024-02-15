# Importar librerias
import numpy as np
import matplotlib.pyplot as plt

# Definir el rango del parametro t
t = np.linspace(0 ,2 * np.pi,1000)

#Definir las funciones de x y de y
x = np.cos(t)
y = np.sin(t)

#Crear gráfica
plt.figure(figsize=(6,6))
plt.plot(x,y, label='Circunferencia paramétrica')
plt.axis('equal')

#Opciones adicionales para la gráfica
plt.title('Curva paramétrica')
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True)
plt.legend()

#Mostrar la gráfica
plt.show()
