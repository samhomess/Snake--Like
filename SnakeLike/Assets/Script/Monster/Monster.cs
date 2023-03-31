using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IAttack
{
    public int attack;
    public Animator animator;
  
    protected int health;
    protected float speed;
    protected Transform player;
    protected Vector2 direction;
    protected SpriteRenderer spriteRenderer;

    protected MemoryPool memoryPool;

    protected virtual void Start()
    {
        speed = 1.0f;
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        player = GameObject.Find("Character").GetComponent<Transform>();
    }

    public void Damage()
    {
        Player.function(this);     
    }

    virtual public void Use()
    {
        Debug.Log("Monster Use");
    }

    public void SetUp(MemoryPool memoryPool)
    {
        this.memoryPool = memoryPool;
    }

    protected void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.gameObject.name == "Character")
        {
            animator.SetBool("Attack", false);
        }
    }
}
