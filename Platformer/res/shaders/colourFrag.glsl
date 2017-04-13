#version 150

//uniform float timeMod;
uniform sampler2D mySampler;

in Vertex	{
	vec4 colour;
	vec2 texCoord;
} IN;

out vec4 colour;

void main() {
    
    vec4 textureColor = texture(mySampler, IN.texCoord);
    colour = IN.colour * textureColor;

//	fragColour = IN.colour + vec4(1.0 * (cos(timeMod) + 1.0) * 0.5,
//								  1.0 * (cos(timeMod + 2.0) + 1.0) * 0.5,
//								  1.0 * (sin(timeMod + 2.0) + 1.0) * 0.5, 0.0);
}