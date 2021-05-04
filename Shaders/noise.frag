varying vec3 lightDir,normal;

//https://stackoverflow.com/questions/4200224/random-noise-functions-for-glsl
float rand(vec2 co){
    return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);
}

void main()
{
	vec3 rgb; 
	rgb.x = rand(normal);
	rgb.y = rand(normal);
	rgb.z = rand(normal);

	vec4 color;
	color.x = rgb.x;
	color.y = rgb.y;
	color.z = rgb.z;
	color.w = 1.0;

	gl_FragColor = color;
} 
