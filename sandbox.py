import matplotlib.pyplot as plt

def calculate_external_exposure(space_dose_rate, outdoor_hours_per_day, days_per_year):
    return space_dose_rate * outdoor_hours_per_day * days_per_year * 1e-6

space_dose_rates = range(1, 101)  # 0.1 μSv/h から 100 μSv/h まで
external_exposures = [calculate_external_exposure(rate, 10, 365) for rate in space_dose_rates]

plt.plot(space_dose_rates, external_exposures)
plt.xlabel('Space Dose Rate (μSv/h)')
plt.ylabel('External Exposure (Sv)')
plt.title('External Exposure over 1 Year (0.1 - 100 μSv/h)')
plt.grid(True)
plt.show()

space_dose_rates = range(100, 10001)  # 100 μSv/h から 10,000 μSv/h まで
external_exposures = [calculate_external_exposure(rate, 10, 10) for rate in space_dose_rates]

plt.plot(space_dose_rates, external_exposures)
plt.xlabel('Space Dose Rate (μSv/h)')
plt.ylabel('External Exposure (Sv)')
plt.title('External Exposure over 10 Days (100 - 10,000 μSv/h)')
plt.grid(True)
plt.show()
