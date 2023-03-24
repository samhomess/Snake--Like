using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneMoveManager : MonoBehaviour
{
    [SerializeField] GameObject screen;
    [SerializeField] Image progressImage;

    public void SceneMove()
    {
        StartCoroutine(SceneLoad(1));
    }

    IEnumerator SceneLoad(int index)
    {
        screen.SetActive(true);

        AsyncOperation operation = SceneManager.LoadSceneAsync(index);

        progressImage.fillAmount = 0;

        // allowSceneActivation �� �̵��� �����ϴ� ����

        // true -> ���� �̵��մϴ�.
        // false -> ���� �̵����� �ʽ��ϴ�.
        operation.allowSceneActivation = false;

        float progress = 0;

        // isDone �� �ε��� �� ������ �� Ȯ���ϴ� ����
        // true <- �� �ε��� �� ���� ����
        // false <- �� �ε��� ������ ���� ���� 
        while (!operation.isDone)
        {
            progress = Mathf.MoveTowards(progress, operation.progress, Time.deltaTime);

            progressImage.fillAmount = progress;

            // 0.9f���� �� �ε��� �����ϴ�.
            if(progress >= 0.9f)
            {
                progressImage.fillAmount = 1f;
                operation.allowSceneActivation = true;
            }

            yield return null;
        }
    }

}
