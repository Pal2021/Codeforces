def maximize_gems(num_dishes, dishes_ratings):
  """
  Calculates the maximum number of gems John can gain by grouping dishes

  Args:
    num_dishes: The number of dishes
    dishes_ratings: A list of tuples containing (id, rating) for each dish

  Returns:
    The maximum number of gems John can gain
  """
  # Sort dishes by minimum and maximum id
  dishes_min_id = sorted(dishes_ratings, key=lambda d: d[0])
  dishes_max_id = sorted(dishes_ratings, key=lambda d: d[0], reverse=True)

  # Track maximum gems for min and max id cases
  max_gems_min_id = float("-inf")
  max_gems_max_id = float("-inf")

  i = 0
  while i < num_dishes:
    # Find the end of the current group
    j = i + 1
    while j < num_dishes and dishes_min_id[i][0] + 1 == dishes_min_id[j][0]:
      j += 1

    # Calculate the sum of ratings for min and max id cases within the group
    sum_min_id = sum(d[1] for d in dishes_min_id[i:j])
    sum_max_id = sum(d[1] for d in dishes_max_id[i:j])

    # Update maximum gems for both cases
    max_gems_min_id = max(max_gems_min_id, sum_min_id)
    max_gems_max_id = max(max_gems_max_id, sum_max_id)

    # Move to the next group
    i = j

  # Return the maximum number of gems
  return max(max_gems_min_id, max_gems_max_id)

# Read input and call function
num_dishes = int(input())
dishes_ratings = []
for _ in range(num_dishes):
  dish_id, dish_rating = map(int, input().split(":"))
  dishes_ratings.append((dish_id, dish_rating))

max_gems = maximize_gems(num_dishes, dishes_ratings)
print(max_gems)
