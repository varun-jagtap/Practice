import itertools

toppings = ["🍕 Pepperoni", "🍄 Mushroom", "🧅 Onion"]

# Generate combinations
pizza_combinations = list(itertools.combinations(toppings, 2))

print("--- 🍕 PIZZA COMBINATIONS (Order doesn't matter) ---")

print(f"You can make {len(pizza_combinations)} different 2-topping pizzas:")

for choice in pizza_combinations:
    print(f"• {choice[0]} and {choice[1]}")


print("\n" + "=" * 50 + "\n")
