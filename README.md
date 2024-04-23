# Merge Intervals in C++

The Merge Intervals function provided in this repository merges overlapping intervals from a collection of intervals.

## Example

```c++
intervals = [[1,3],[2,6],[8,10],[15,18]]
print(mergeIntervals(intervals)) # Output: [[1,6],[8,10],[15,18]]

intervals = [[1,4],[4,5]]
print(mergeIntervals(intervals)) # Output: [[1,5]]
```

## Prerequisites

Before you begin, ensure you have the following installed on your local machine:

- A modern C++ compiler
- Git
- Docker

## Getting Started

Follow these steps to get a copy of the project up and running on your local machine for development and testing purposes.

### Clone the Repository

First, clone the repository using the following commands:

```bash
git clone https://github.com/e2e2a/interval-cpp.git
cd interval-cpp
```

## Build and Run the Application

To build the application, use the following command:

```bash
g++ -o interval interval.cpp
```

To run the application, use the following command:

```bash
./interval
```

## Docker

This repository also includes a Dockerfile for building a Docker image of the application. To build the Docker image, use the following command:

```bash
docker build -t interval .
```

To run the Docker image, use the following command:

```bash
docker run -v ${PWD}:/app interval
```

To run the interval.exe:

```bash
docker run -it interval
```
## Continuous Integration with GitHub Actions

This repository uses GitHub Actions for continuous integration. Upon every push to the repository, the GitHub Actions workflow will automatically build the project and create a release with the built executable.

### Setting up GitHub Actions

Before you can use GitHub Actions, you need to update the workflow permissions. Navigate to your project’s `Settings` -> `Actions` -> `General` -> `Workflow permissions` and set it to `Read and write permissions`. This allows GitHub Actions to access workflow environment variables like `$GITHUB_TOKEN`.
