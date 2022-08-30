
function roots(a,b,c) {
  //codigo que aplica la formula de la cuadratica
  let discriminant = b*b - 4*a*c;
  let root = Math.sqrt(discriminant);
  let x1 = (-b + root) / (2*a);
  let x2 = (-b - root) / (2*a);
  return [x1, x2];
}

function main() {
  let a = 1;
  let b = 3;
  let c = -4;
  console.log(roots(a,b,c));
  return 0;
}

main()
