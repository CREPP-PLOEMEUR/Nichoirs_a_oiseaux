#Inclusion des bibliothèques

import RPi.GPIO as GPIO			#Gestion des entrés-sorties
from picamera import PiCamera 	#Gestion de la caméra
import time						#Gestion du temps


#Paramètres
PIR_Pin = 12   #Notation BCM
LED_Pin = 24		#Notation BCM
#Initialisation

camera = PiCamera()
dht = Adafruit_DHT.DHT22

def initPIR():
	"""Initalise la broche PIR en entrée"""
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(PIR_Pin, GPIO.IN)
	
def initLED():
	"""Initalise la broche LED en sortie"""
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(LED_Pin, GPIO.OUT)
	
def initCamera():
	"""Initalise la camera"""
	camera.resolution = (800, 600)
	camera.framerate = 15
 
	
def takePicture():
	"""Allume la LED, prend une photo et arrete la LED"""
	GPIO.output(LED_Pin, GPIO.HIGH)
	camera.capture('Photos/Nichoir_V0.jpg')
	GPIO.output(LED_Pin, GPIO.LOW)

	
def main():
	
	
	print("Nichoir_V1 : Init")
	
	initPIR()
	initLED()
	initCamera()

	print("Nichoir_V1 : Start")
	
	while(True):
		
		if( GPIO.input(PIR_Pin) == True):
			print("Motion detected !")
			takePicture()
			time.sleep(20)
            
            
if(__name__ == "__main__"):
	
	main()
