using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Controller : MonoBehaviour
{
    [SerializeField] float speed = 25.0f;
    private Vector2 direction; 
    private Rigidbody2D rigidBody;

    void Start()
    {
        rigidBody = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if(GameManager.Instance.play == false) return;

        if (Input.GetKeyDown(KeyCode.Space))
        {
            // 물리적인 힘을 가하는 함수
            rigidBody.AddForce(Vector2.up * speed);
        }
    }

    private void FixedUpdate() // 0.02
    {

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.CompareTag("Death Zone"))
        {
            GameManager.Instance.play = false;
        }

    }
}
