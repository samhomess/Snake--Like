using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IAttack
{
    public int attack;
 
    protected int health;
    protected float speed;
    protected Transform player;
    protected Vector2 direction;
    protected SpriteRenderer spriteRenderer;

    protected MemoryPool memoryPool;

    protected virtual void Start()
    {
        speed = 1.0f;
        spriteRenderer = GetComponent<SpriteRenderer>();
        player = GameObject.Find("Character").GetComponent<Transform>();
    }

    virtual public void Use()
    {
        Debug.Log("Monster Use");
    }

    public void SetUp(MemoryPool memoryPool)
    {
        this.memoryPool = memoryPool;
    }
}
