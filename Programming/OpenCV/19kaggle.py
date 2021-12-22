import os
import caer 
import canaro 
import numpy as np
import cv2 as cv
import gc

IMG_SIZE = {80,80}
channel = 1
char_path = r'../input/the-simpsons-characters-dataset/simpsons_dataset'

char_dict = {}
for char in os.listdir(char_path):
    char_dict[char] = len(os.listdir(os.path.join(char_path.char)))
    
# sort the dictinary in decending order
char_dict = caer.sort_dict(char_dict, descending=True)


