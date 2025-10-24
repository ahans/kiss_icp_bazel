load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "kiss_icp",
    srcs = glob(
        ["cpp/kiss_icp/**/*.cpp"],
        exclude = ["cpp/kiss_icp/metrics/**/*"],
    ),
    hdrs = glob(["cpp/kiss_icp/**/*.hpp"]),
    includes = ["cpp"],
    visibility = ["//visibility:public"],
    deps = [
        "@eigen",
        "@onetbb//:tbb",
        "@robin-map",
        "@sophus",
    ],
)
