from PIL import Image, ImageDraw
import math

image = Image.open("/home/user/Labs/Semestr tasks/Image/Sobel/Py/lena.jpg")
draw = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixels = image.load()

for i in range(height - 2):
    for j in range(width - 2):
        x = (pixels[i + 2, j][0] + pixels[i + 2, j + 1][0] + pixels[i + 2, j + 2][0])\
             - (pixels[i, j][0] + pixels[i, j + 1][0] + pixels[i, j + 2][0])
        y = (pixels[i, j + 2][0] + pixels[i + 1, j + 2][0] + pixels[i + 2, j + 2][0])\
             - (pixels[i, j][0] + pixels[i + 1, j][0] + pixels[i + 2, j][0])
        sobel = int(math.sqrt(x * x + y * y))
        draw.point((i, j), (sobel, sobel, sobel))
image.save("/home/user/Labs/Semestr tasks/Image/Sobel/Py/sobel.jpg", "JPEG")
del draw