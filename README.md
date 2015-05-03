# jit.gl.freeframe
jit.gl.freeframe is a 32-bit Max Jitter external for Windows that can be used to load FreeframeGL plugins within Jitter.
It is similar in concept to jit.freeframe which is designed for Freeframe 1.0 plugins, but provides for texture inputs and OpenGL processing by the plugin. The pdf contains further information.


-------------------
Binaries

jit.gl.freeframe.mxe

This is the jitter plugin. Copy to Program Files > Max > Cycling '74\jitter-externals or include in the Max patch folder.

-------------------
Examples

Freeframe example

Demonstrates using jit.gl.freeframe with Freeframe plugins
Open "jit.gl.freeframe.maxhelp" and click "GO".
Select example Freeframe effects from the drop-down list.

Spout sender example

Demonstrates using jit.gl.freeframe and the SpoutSender2 plugin for sending to a Spout receiver
Open "spoutSender.maxpatch".
Textures will be be immediately available to any Spout receiver.

Spout receiver example

Demonstrates using jit.gl.freeframe and the SpoutReceiver2 plugin for receiving from a Spout sender
Start a Spout Sender
Open "spoutReceiver.maxpat"
Textures will be immediately received from the Spout sender.

-------------------
Source

jit.gl.freeframe is compiled using FreeframeGL 1.5

-------------------
Licence

Licence is Lesser GPL-3

