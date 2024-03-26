# Qt Lists

A simple example of how to use lists in Qt.


## Build

```bash
mkdir build && cd $_
cmake .. -DCMAKE_MODULE_PATH=/path/to/QtCMake/cmake \
    -DCMAKE_PREFIX_PATH=/path/to/Qt/6.x.x/gcc_64
make -j $(nproc)
```

## Run

```bash
./main
```
