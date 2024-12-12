class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        gifts_heap=[-gift for gift in gifts]
        heapq.heapify(gifts_heap)
        for _ in range(k):
            max_element=-heapq.heappop(gifts_heap)
            heapq.heappush(gifts_heap,-math.floor(math.sqrt(max_element)))
        number_of_remaining_gifts=0
        while gifts_heap:
            number_of_remaining_gifts -=heapq.heappop(gifts_heap)
        return number_of_remaining_gifts