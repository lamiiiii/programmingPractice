function solution(n, words) {
    const used = new Set();
    used.add(words[0]);

    for (let i = 1; i < words.length; i++) {
        const prevWord = words[i - 1];
        const currentWord = words[i];

        const turn = Math.floor(i / n) + 1;
        const player = (i % n) + 1;

        if (prevWord[prevWord.length - 1] !== currentWord[0] || used.has(currentWord)) {
            return [player, turn];
        }

        used.add(currentWord);
    }

    return [0, 0];
}