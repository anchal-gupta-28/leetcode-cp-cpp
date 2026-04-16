/**
 * @param {any} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: function(val1) {
            if (val === val1) return true;
            else throw new Error("Not Equal");
        },

        notToBe: function(val1) {
            if (val !== val1) return true;
            else throw new Error("Equal");
        }
    };
};


// Test Cases 

try {
    console.log(expect(5).toBe(5));       // true
} catch (e) {
    console.log(e.message);
}

try {
    console.log(expect(5).notToBe(5));    // throws "Equal"
} catch (e) {
    console.log(e.message);
}

try {
    console.log(expect(10).notToBe(5));   // true
} catch (e) {
    console.log(e.message);
}

try {
    console.log(expect(10).toBe(5));      // throws "Not Equal"
} catch (e) {
    console.log(e.message);
}