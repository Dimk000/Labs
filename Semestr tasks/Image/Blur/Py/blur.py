from PIL import Image, ImageDraw

image = Image.open("/home/user/Labs/Semestr tasks/Image/Blur/Py/lena.jpg")
draw = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixels = image.load()
rad = 4
i = 4

while i < width - 4:
    j = 4
    while j < height - 4:
        r = float((pixels[i - rad, j - rad][0] * 0.5 + pixels[i - rad, j][0] * 0.5 + pixels[i - rad, j + rad][0] * 0.5
        + pixels[i, j - rad][0] * 0.5 + pixels[i, j][0] * 0.5 + pixels[i, j + rad][0] * 0.5
        + pixels[i + rad, j - rad][0] * 0.5 + pixels[i + rad, j][0] * 0.5 + pixels[i + rad, j + rad][0]) * 0.5) / 2.5
        g = float((pixels[i - rad, j - rad][1] * 0.5 + pixels[i - rad, j][1] * 0.5 + pixels[i - rad, j + rad][1] * 0.5
        + pixels[i, j - rad][1] * 0.5 + pixels[i, j][1] * 0.5 + pixels[i, j + rad][1] * 0.5
        + pixels[i + rad, j - rad][1] * 0.5 + pixels[i + rad, j][1] * 0.5 + pixels[i + rad, j + rad][1]) * 0.5) / 2.5
        b = float((pixels[i - rad, j - rad][2] * 0.5 + pixels[i - rad, j][2] * 0.5 + pixels[i - rad, j + rad][2] * 0.5
        + pixels[i, j - rad][2] * 0.5 + pixels[i, j][2] * 0.5 + pixels[i, j + rad][2] * 0.5
        + pixels[i + rad, j - rad][2] * 0.5 + pixels[i + rad, j][2] * 0.5 + pixels[i + rad, j + rad][2]) * 0.5) / 2.5
        draw.point((i, j), (int(r), int(g), int(b)))
        j += 1
    i += 1

image.save("/home/user/Labs/Semestr tasks/Image/Blur/Py/blur.jpg", "JPEG")
del draw