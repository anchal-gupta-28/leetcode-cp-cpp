/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        return "Hello World";
    };
};

// Create the function
const f = createHelloWorld();

// Test calls , for every argumet(jab fun ko call krte hai to function ke andar jo pass krte h usse argument bolte hai) , it print a "hello world" , no matter what's inside the agrs.
console.log(f());          // Output: Hello World
console.log(f(1, 2, 3));  // Output: Hello World
console.log(f("test"));   // Output: Hello World