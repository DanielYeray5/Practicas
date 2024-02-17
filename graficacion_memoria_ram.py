import psutil
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# Función para obtener el uso actual de la memoria RAM
def get_ram_usage():
    return psutil.virtual_memory().percent

# Función de actualización para la animación
def update(frame):
    y_data.append(get_ram_usage())
    x_data.append(frame)

    # Limitar la cantidad de puntos mostrados en el gráfico para evitar la sobrecarga visual
    if len(x_data) > max_data_points:
        del x_data[0]
        del y_data[0]

    line.set_data(x_data, y_data)
    ax.relim()
    ax.autoscale_view()

# Configuración inicial
max_data_points = 50  # Número máximo de puntos en el gráfico
x_data, y_data = [], []

# Configuración del gráfico
fig, ax = plt.subplots()
line, = ax.plot(x_data, y_data, label='Uso de RAM (%)')
ax.set_ylim(0, 100)
ax.set_xlabel('Tiempo')
ax.set_ylabel('Uso de RAM (%)')
ax.legend()

# Configuración de la animación
ani = FuncAnimation(fig, update, blit=False)

# Mostrar el gráfico en tiempo real
plt.show()
