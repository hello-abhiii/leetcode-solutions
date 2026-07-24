import json
from datetime import datetime
import re

GOAL = 700

# Read stats.json
with open("stats.json", "r") as f:
    data = json.load(f)["leetcode"]

easy = data["easy"]
medium = data["medium"]
hard = data["hard"]
solved = data["solved"]

# Progress
progress = int((solved / GOAL) * 20)
bar = "█" * progress + "░" * (20 - progress)
percent = (solved / GOAL) * 100

dashboard = f"""
| 📊 Statistics | Count |
|--------------|------:|
| 🟢 Easy | {easy} |
| 🟡 Medium | {medium} |
| 🔴 Hard | {hard} |
| ✅ Total Solved | **{solved}** |

### 🎯 Goal Progress

{bar}
{solved}/{GOAL} ({percent:.2f}%)

🕒 Last Updated: {datetime.utcnow().strftime("%d %b %Y %H:%M UTC")}
"""

with open("README.md","r",encoding="utf8") as f:
    readme = f.read()

pattern = r'<!-- START DASHBOARD -->(.*?)<!-- END DASHBOARD -->'

replacement = f"""<!-- START DASHBOARD -->
{dashboard}
<!-- END DASHBOARD -->"""

readme = re.sub(pattern,replacement,readme,flags=re.DOTALL)

with open("README.md","w",encoding="utf8") as f:
    f.write(readme)

print("Dashboard Updated")
