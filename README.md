# Spatial Interoperability Interface (SII)

The *Spatial Interoperability Interface (SII)* is a modular, C89-compliant interface
suitable for cross-language development, such as with Hourglass interfaces[^1].

> [!IMPORTANT]
> SII is currently under active development, and not suitable for any production work.

A example use-case for this interface could be a GIS application that prefers decoupling the
geospatial engine from its own internal logic. Using SII, the application could load an
engine built in C, C++, Rust, or any other language that can bind to C89, without modifying
the application's code at all.

## Structure

The SII is separated into modules based on a few different factors:

- Model
    - Vector
    - Raster
    - Attribute
- Algorithm

## License

SII is distributed under the [Boost Software License Version 1.0](LICENSE).

[^1]: [Slide-deck from CppCon 2014 describing Hourglass interfaces](https://www.slideshare.net/StefanusDuToit/cpp-con-2014-hourglass-interfaces-for-c-apis).
