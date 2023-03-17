using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IFunction
{
    void Function();
}

public class DeathTrigger : MonoBehaviour, IFunction
{
    public void Function()
    {
        GameManager.Instance.Death();
    }
}
