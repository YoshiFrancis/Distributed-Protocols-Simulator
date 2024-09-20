1. Graph class -> construct graph of nodes, while also assigning weight
2. Neighbor class -> make sure that each node on either side of connection can read/write to each other
3. Node class -> can read/write from neighbors, and runs only once on each iteration
4. Protocol class -> will be a factory -> input a vector of strings, outputs something else. Will also be copied around as a prototype
                     with a clone() function
