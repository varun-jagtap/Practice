# Import KMeans from scikit-learn
from sklearn.cluster import KMeans
import numpy as np

# Small example dataset: each row is one data point
data = np.array([[1, 2], [1, 4], [2, 3], [8, 8], [9, 10], [10, 8]])

# Make 2 clusters (groups)
model = KMeans(n_clusters=2, random_state=0, n_init=10)

# Train the model and find a cluster for each point
model.fit(data)

print("Cluster number for each point:")
print(model.labels_)

print("\nCluster centres:")
print(model.cluster_centers_)

# Predict the cluster for a new point
new_point = np.array([[2, 2]])
print("\nCluster for new point:", model.predict(new_point)[0])
