# Knowledge Representation and Logical Inference
# in Wumpus World

# Known facts
knowledge = {"breeze_1_1": False, "stench_1_1": False, "gold_2_2": True}

# Inference
if knowledge["breeze_1_1"] == False:
    print("No Breeze at (1,1)")
    print("Therefore, adjacent cells are safe from pits.")

if knowledge["stench_1_1"] == False:
    print("No Stench at (1,1)")
    print("Therefore, adjacent cells are safe from Wumpus.")

# Decision
if knowledge["breeze_1_1"] == False and knowledge["stench_1_1"] == False:
    print("Cell (1,2) is SAFE.")
    print("Cell (2,1) is SAFE.")
    print("Agent can move to an adjacent cell.")

if knowledge["gold_2_2"] == True:
    print("Gold is present at (2,2).")
    print("Agent should move towards the gold.")
