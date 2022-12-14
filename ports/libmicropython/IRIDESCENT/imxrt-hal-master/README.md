# imxrt-hal

A Rust hardware abstraction layer (HAL) for NXP i.MX RT processors.

[![All Checks][all-checks-badge]][all-checks-url] [![Crates.io][imxrt-hal-badge]][imxrt-hal-url]

[all-checks-badge]: https://github.com/imxrt-rs/imxrt-rs/workflows/All%20Checks/badge.svg
[all-checks-url]: https://github.com/imxrt-rs/imxrt-rs/actions?query=workflow%3A%22All+Checks%22
[imxrt-hal-badge]: https://img.shields.io/crates/v/imxrt-hal
[imxrt-hal-url]: https://crates.io/crates/imxrt-hal

[matrix-chat](https://matrix.to/#/#imxrt-rs:matrix.org)

## Goals

- Create *the* collaborative group to support using Rust on NXP's i.MX RT series.
- Simple but useful register level access. It compiles quickly, and it's intuitive for existing embedded developers. Every hal republishes the RAL.
- Embedded HAL support.
- RTIC support.
- NXP EVK board support
- Supporting popular boards such as the Teensy 4.

## Getting Started

### HAL

If you want to develop Rust libraries and applications for an i.MX RT-based system, use the `imxrt-hal` crate. The `imxrt-hal` crate provides implementations of the [`embedded-hal` traits](https://crates.io/crates/embedded-hal) specific to i.MX RT processors. Use the HAL if you want to

- toggle GPIOs
- use timers (GPTs, PITs)
- control PWM outputs (single pin)
- talk to I2C devices
- read and write serial data (UART)
- send and receive data over SPI

The publicly-supported HAL is on [crates.io](https://crates.io/crates/imxrt-hal). Include the HAL in your Rust library or binary:

```toml
[dependencies.imxrt-hal]
version = "0.4"
features = ["imxrt1062", "rt"] # "rt" flag optional
```

Note the `"imxrt1062"` feature flag. You're **required** to supply a feature flag that describes your i.MX RT variant. The HAL supports the following processors, as identified by feature flags:

- [x] `"imxrt1062"`

The `"rt"` feature flag is recommended for users who are

- building executables that run on i.MX RT processors
- creating board support packages (BSP), or higher-level libraries, for i.MX RT systems

Enabling the `"rt"` feature-flag will link in the i.MX RT interrupt table. If you're familiar with crates that are generated from `svd2rust`, [the `"rt"` feature](https://docs.rs/svd2rust/0.17.0/svd2rust/#the-rt-feature) has the same behaviors in the `imxrt-hal` as it does in `svd2rust`-generated crates.

#### Future of the HAL

Follow #56 to understand how we're breaking `imxrt-hal` into separate crates. If you'd like to try the new HAL crate(s), depend on `imxrt1060-hal`, and skip the feature flag that describes your i.MX RT variant.


## Q/A

#### *Are there any board support packages (BSP) that use the `imxrt-hal` crate?*

There are a few BSPs that use the `imxrt-hal` crate:

- [The `imxrt1060evk-bsp` crate](https://github.com/imxrt-rs/imxrt1060evk-bsp), useful for the i.MX RT 1060 Evaluation Kit (EVK).
- [The `teensy4-bsp` crate](https://github.com/mciantyre/teensy4-rs), supporting Rust development on the Teensy 4.

Consider using those crates if you already own those hardware platforms, as they may provide a simpler foundation for building Rust applications.

#### *How can I use Rust to boot an i.MX RT-based system? Does the HAL provide the reset handler?*

Neither the HAL nor the RAL can help you boot an i.MX RT-based system. Typically, Rust developers use [the `cortex-m-rt` crate](https://github.com/rust-embedded/cortex-m-rt) as a minimal runtime for Cortex-M processors. However, i.MX RT processors require more setup than what the `cortex-m-rt` crate offers. As of now, you're required to use your own runtime crate to support i.MX RT processor start-up.

We have some components that might be helpful when building your own runtime crate:

- [The `imxrt-boot-gen` crate](https://github.com/imxrt-rs/imxrt-boot-gen) lets you define some of the data structures that are required to boot i.MX RT processors. It's used in the other projects listed below.
- [The `imxrt-rt` crate](https://github.com/imxrt-rs/imxrt-rt) provides a runtime crate that may be useful for other i.MX RT processors. It's the runtime crate used in [the `imxrt1060evk-bsp` crate](https://github.com/imxrt-rs/imxrt1060evk-bsp).
- [The `teensy4-rs` project](https://github.com/mciantyre/teensy4-rs) provides its own runtime crate that utilizes the tightly-coupled memory (TCM) regions. The runtime is specific for the Teensy 4, although it may be used elsewhere.

#### *Why not use [`svd2rust`](https://docs.rs/svd2rust/0.17.0/svd2rust/) to generate a crate for register access?*

See [here](https://github.com/mciantyre/teensy4-rs/issues/48) and [here](https://users.rust-lang.org/t/svd2rust-generates-an-enormous-crate/32372). `svd2rust` generates a crate that's nearly 1 million lines of Rust code, and it takes a few minutes to compile. On the other hand, the RAL compiles in a few seconds. Additionally, `svd2rust` only supports one SVD input, but the RAL auto-generation script accepts multiple SVD inputs, sharing the common peripherals across processor families. This means that we can more easily support all i.MX RT processor variants from a single crate.

## Contributing & Development

For contributions and development guidance, see [CONTRIBUTING.md](CONTRIBUTING.md)

## License

Licensed under either of

- Apache License, Version 2.0 ([LICENSE-APACHE](LICENSE-APACHE) or
  http://www.apache.org/licenses/LICENSE-2.0)
- MIT license ([LICENSE-MIT](LICENSE-MIT) or http://opensource.org/licenses/MIT)

at your option.
