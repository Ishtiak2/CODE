function oneToN(N) {
    for(i = 1; i <= N; i++) {
        console.log(i);
    }
}

//oneToN(6);

// Random number between min (inclusive) and max (exclusive)
function getRandom(min, max) {
    return Math.random() * (max - min) + min;
}

console.log(getRandom(-10,10)); // e.g., 7.234
