def solution(m, n, puddles):
    MOD = 1000000007
    
    # Create a grid to store the number of paths to each cell
    grid = [[0] * (n+1) for _ in range(m+1)]
    
    # Mark the starting cell with 1 path
    grid[1][1] = 1
    
    # Mark flooded cells as -1 to avoid them
    for puddle in puddles:
        grid[puddle[0]][puddle[1]] = -1
    
    for i in range(1, m+1):
        for j in range(1, n+1):
            # Skip flooded cells and the starting cell
            if grid[i][j] == -1 or (i == 1 and j == 1):
                continue
            
            # Calculate the number of paths to this cell
            # by adding paths from the cell above and the cell to the left
            if grid[i][j-1] != -1:
                grid[i][j] += grid[i][j-1]
            if grid[i-1][j] != -1:
                grid[i][j] += grid[i-1][j]
            
            grid[i][j] %= MOD
    
    return grid[m][n]