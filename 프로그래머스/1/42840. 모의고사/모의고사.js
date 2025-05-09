function solution(answers) {
    const patterns = [
        [1,2,3,4,5],
        [2,1,2,3,2,4,2,5],
        [3,3,1,1,2,2,4,4,5,5],
    ]
    
    const scores = patterns.map((pattern) => 
                               answers.reduce((score, answer, idx) => {
        return answer === pattern[idx % pattern.length] ? score + 1 : score;
    }, 0)
                               );

  const maxScore = Math.max(...scores);

  return scores
    .map((score, idx) => (score === maxScore ? idx + 1 : null))
    .filter((val) => val !== null);
}