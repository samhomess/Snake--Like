using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapControl : MonoBehaviour
{
    private float scrollSpeed = 0.5f;
    private float offset;
    [SerializeField] Material material;

    // Update is called once per frame
    void Update()
    {
        offset += (Time.deltaTime * scrollSpeed) / 10;
        material.SetTextureOffset("_MainTex", new Vector2(offset, 0));
    }

    private void OnApplicationQuit()
    {
        material.SetTextureOffset("_MainTex", new Vector2(0, 0));
    }
}
