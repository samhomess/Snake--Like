using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapMove : MonoBehaviour
{
    [SerializeField] float speed = 5.0f;
    Vector2 initPosition;
    Vector2 direction = Vector2.left;

    private void Start()
    {
        initPosition = new Vector2(120, 0);
    }

    void Update()
    {
        if (GameManager.Instance.play == false) return;

        transform.Translate(direction * speed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag("Position Zone"))
        {
            transform.position = initPosition;
        }
    }
}
