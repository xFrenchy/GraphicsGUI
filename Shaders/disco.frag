varying vec3 lightDir,normal;
uniform vec2 u_resolution;

float rand(vec2 co){
    return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);
}

void main()
{

	vec3 n = normalize(normal);
    gl_FragColor = vec4(n,1.0);
} 
