"""
GitHub repo-sundakı bir qovluğun içindəki bütün faylların
birbaşa (blob) linklərini çıxarır.

İSTİFADƏ:
  1) `pip install requests` (əgər yoxdursa)
  2) Aşağıdakı REPO, BRANCH, FOLDER dəyərlərini öz repona uyğun dəyiş
  3) Faylı işə sal: python list_github_links.py
"""

import requests
from urllib.parse import quote

REPO = "ismayilqarayev/eolymp"
BRANCH = "main"
FOLDER = "Python/azercell_cup_problems/Müqayisə əməliyyatları"

url = f"https://api.github.com/repos/{REPO}/contents/{quote(FOLDER)}?ref={BRANCH}"

response = requests.get(url)
response.raise_for_status()
items = response.json()

# Fayl adına görə sırala (problem_01, problem_02, ...)
items.sort(key=lambda x: x["name"])

print(f"'{FOLDER}' qovluğunda {len(items)} fayl tapıldı:\n")

for item in items:
    if item["type"] == "file":
        print(f"{item['name']}: {item['html_url']}")