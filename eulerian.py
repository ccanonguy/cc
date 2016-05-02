# Find Eulerian Tour
#
# Write a function that takes in a graph
# represented as a list of tuples
# and return a list of nodes that
# you would follow on an Eulerian Tour
#
# For example, if the input graph was
# [(1, 2), (2, 3), (3, 1)]
# A possible Eulerian tour would be [1, 2, 3, 1]


def find_next(graph, last) :
        nex = 0
        for edge in graph :
            if (last in edge) :
                edge = list(edge)
                nex = tuple(edge)
                edge.remove(last)
                stack.extend(edge)
                break
        if nex :
            graph.remove(nex)
            if len(graph) >0 :
                next1 = list(nex)
                next1.remove(last)
                find_next(graph, next1[0])
            else :
                
            
def find_eulerian_tour(graph):
    global stack, circuit
    stack = [graph[0][0], graph[0][1]]
    last = graph[0][1]
    find_next(graph[1:], last)
    return stack

graph = [(0, 1), (1, 5), (1, 7), (4, 5),
(4, 8), (1, 6), (3, 7), (5, 9),
(2, 4), (0, 4), (2, 5), (3, 6), (8, 9)]

graph1 = [(1, 13), (1, 6), (6, 11), (3, 13),
(8, 13), (0, 6), (8, 9),(5, 9), (2, 6), (6, 10), (7, 9),
(1, 12), (4, 12), (5, 14), (0, 1),  (2, 3), (4, 11), (6, 9),
(7, 14),  (10, 13)]

print find_eulerian_tour(graph)

