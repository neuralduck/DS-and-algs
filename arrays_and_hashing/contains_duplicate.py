def solution_1(nums: list[int]) -> bool:
    return len(set(nums)) != len(nums)

def solution_2(nums: list[int]) -> bool:
    visited = []
    for num in nums:
        if num in visited:
            return True
        else:
            visited.append(num)
    return False


def solution_3(nums):
    def has_duplicate(reamaining: list[int], visited: set):
        if not reamaining:
            return False
        head, *tail = reamaining
        if head in visited:
            return True
        return has_duplicate(tail, visited | {head})
    return has_duplicate(nums, set())

