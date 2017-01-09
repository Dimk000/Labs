from PIL import Image, ImageDraw


image = Image.open("/home/user/Labs/Semestr tasks/Image/Grayscale/Py/lena.jpg")
draw = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixels = image.load()
for i in range(width):
    for j in range(height):
        r = pixels[i, j][0]
        g = pixels[i, j][1]
        b = pixels[i, j][2]
        gray = int((r + g + b) / 3)
        draw.point((i, j), (gray, gray, gray))
image.save("/home/user/Labs/Semestr tasks/Image/Grayscale/Py/gray.jpg", "JPEG")
del draw