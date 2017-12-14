# Mbed OS 5 wrapper for Coremark LM32 printf()

Printf() functions from [coremark_lm32](https://github.com/jpbonn/coremark_lm32). This is a minimal `printf()` implementation, with floating point support. Adapted to be used in Mbed OS 5. The library uses ~19K less ROM (without floating point supported) or ~15K less ROM (with floating point support) than newlib.

## Usage

1. Add this library to your Mbed OS 5 project:

    ```
    $ mbed add https://github.com/janjongboom/mbed-coremark-lm32-printf
    ```

1. Change `printf()` calls into `ee_printf()`.

1. To enable floating point support, create a file called `mbed_app.json`, and add:

    ```json
    {
        "target_overrides": {
            "*": {
                "mbed-coremark-printf.enable-float": 1
            }
        }
    }
    ```

## LICENSE

```
 Copyright (C) 2002 Michael Ringgaard. All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. Neither the name of the project nor the names of its contributors
    may be used to endorse or promote products derived from this software
    without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.
```