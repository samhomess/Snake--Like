using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreTrigger : MonoBehaviour, IFunction
{
    public void Function()
    {
        GameManager.Instance.score++;
        GameManager.Instance.ScoreView();
        GameManager.Instance.Save();
    }
}
