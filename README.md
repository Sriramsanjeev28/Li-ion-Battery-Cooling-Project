# Li-ion-Battery-Cooling-Project
Project report, journal publication manuscript, and Arduino implementation code.

# Battery Cell Thermal Control in Electric Vehicles Using Water Cooling Block

This repository contains the project files, final report, and Arduino code implementation related to the research work on **battery thermal management in electric vehicles**. The project was also published as a research paper.

---

## 📄 Abstract
Research and development efforts in the field of transportation have recently focused on creating clean, safe, and high-efficiency modes of transportation. It has repeatedly been predicted that electric, hybrid, and fuel-cell vehicles will soon displace conventional automobiles.  

This research offers an illustration of how a battery-electric vehicle may regulate the flow of coolant over specific battery cells. Each lithium-ion battery cell's heat level is measured by a sensor, which also controls the cooling process. The PID controller (Arduino) and water pump both function using a 12V rechargeable battery.  

Temperature sensors are employed to monitor each Li-ion battery cell independently and provide feedback as an analog signal. The flow of the pump is controlled by the battery's feedback, and the coolant goes via a convey to achieve temperature control.  

When compared to lead-acid / nickel-metal hydride batteries, lithium-ion batteries offer higher energy densities, lower cost, and increased safety. Each battery cell has a water cooling block installed for more effective cooling. Compared to methods without individual control, this approach decreased temperature variation significantly and reduced thermal effects by around **40%**.  

---

## 📂 Repository Contents
- **Report/** → Final project report (PDF)  
- **Manuscript/** → Journal publication final manuscript (PDF)  
- **Arduino_Code/** → PID control and cooling system implementation (`.ino` file)  

---

## 🔧 Implementation Highlights
- Arduino-based PID control system  
- Independent temperature monitoring of Li-ion battery cells  
- Water pump control with feedback-based regulation  
- Reduction of thermal effect by ~40% using cooling blocks  

---

## 🚀 How to Use
1. Open `Arduino_Code/main.ino` in Arduino IDE.  
2. Connect Arduino board + sensors + water pump.  
3. Upload and run the code.  

---

## 🏆 Publication
This project is based on the published research article:  
**“Battery Cell Thermal Control in Electric Vehicles Using Water Cooling Block”**  
*ARAI Journal of Mobility Technology*, Vol. 4, No. 1 (January–March 2024).  
Authors: **D. Sriram Sanjeev**, Dr. S. Gnanasekaran  
🔗 [https://doi.org/10.37285/ajmt.4.1.3]
