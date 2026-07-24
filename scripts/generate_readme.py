import json
from datetime import datetime

GOAL = 700

with open("stats.json", "r") as f:
    data = json.load(f)["leetcode"]

easy = data["easy"]
medium = data["medium"]
hard = data["hard"]
solved = data["solved"]

progress = int((solved / GOAL) * 20)
bar = "█" * progress + "░" * (20 - progress)
percent = (solved / GOAL) * 100

readme = f"""# 🚀 LeetCode Dashboard

## 👨‍💻 About

- Language: **C++**
- Goal: **{GOAL} Problems**
- Updated: **{datetime.utcnow().strftime('%Y-%m-%d %H:%M UTC')}**

---

# 📊 Progress

| Difficulty | Solved |
|------------|--------|
| 🟢 Easy | {easy} |
| 🟡 Medium | {medium} |
| 🔴 Hard | {hard} |

## Total Solved

**{solved} Problems**

---

# 🎯 Goal Progress

{bar}

{solved}/{GOAL}

{percent:.2f}%

---

⭐ Automatically updated using GitHub Actions.
"""

with open("README.md", "w") as f:
    f.write(readme)

print("README generated successfully.")
