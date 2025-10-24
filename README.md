# KISS-ICP Bazel build

This project makes [KISS-ICP](https://github.com/PRBonn/kiss-icp) available as a [Bazel](https://bazel.build/) module.

The project is currently not listed in the [Bazel Central Registry](https://registry.bazel.build/).
To add it to your module, put something like this into your `MODULE.bazel`:

```
bazel_dep(name = "kiss_icp_bazel", version = "0.0.0")
archive_override(
    module_name = "kiss_icp_bazel",
    integrity = "sha256-zSV8EKnnfNf6gezFKU0ttKbatm85wauk1NKY0PWamC4=",
    strip_prefix = "kiss_icp_bazel-484e5810d16c63ccc54ba1a295f7bd674aecbafd",
    url = "https://github.com/ahans/kiss_icp_bazel/archive/484e5810d16c63ccc54ba1a295f7bd674aecbafd.tar.gz",
)
```

You can then use depend on it like this:
```
cc_test(
    name = "kiss_icp_test",
    srcs = ["kiss_icp_test.cpp"],
    deps = [
        "@kiss_icp_bazel//:kiss_icp",
    ],
)
```
