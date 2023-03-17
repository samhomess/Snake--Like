using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public int score = 0;
    public int maxScore = 0;
    public bool play = true;

    [SerializeField] Button startButton;
    [SerializeField] Text currentScoreText;
    [SerializeField] Text maxScoreText;

    private static GameManager instance;

    public static GameManager Instance
    {
        get
        {
            return instance;
        }
    }

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        Load();

        maxScoreText.text = "Best Score : " + maxScore.ToString();
    }

    public void Death()
    {
        play = false;
        startButton.gameObject.SetActive(true);
    }

    public void ReStart()
    {
        SceneManager.LoadScene(0);
    }

    public void Save()
    {
        PlayerPrefs.SetInt("maxScore", maxScore);
    }

    public void Load()
    {
        maxScore = PlayerPrefs.GetInt("maxScore");
    }

    public void ScoreView()
    {
        // 최고 스코어 
        if(PlayerPrefs.GetInt("maxScore") <= score)
        {
            maxScore = score;
        }

        maxScoreText.text = "Best Score : " + maxScore.ToString();
        currentScoreText.text = "Current Score : " + score.ToString();
    }
}
