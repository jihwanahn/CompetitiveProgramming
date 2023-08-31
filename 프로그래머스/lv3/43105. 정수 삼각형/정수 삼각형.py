def solution(triangle):
    height = len(triangle)

    # Loop from the second last row to the top
    for row in range(height - 2, -1, -1):
        for col in range(len(triangle[row])):
            # Calculate the maximum sum path for each position
            triangle[row][col] += max(triangle[row + 1][col], triangle[row + 1][col + 1])

    return triangle[0][0]