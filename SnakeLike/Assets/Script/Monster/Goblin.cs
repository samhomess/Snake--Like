using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEditor;
using UnityEngine;

public class Goblin : Monster
{
    protected override void Start()
    {
        health = 100;
        attack = 5;

        base.Start();
    }

    public void DamageAnimation()
    {
        // 현재 진행 중인 애니메이션 "Attack" 이라면
        if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
        {
            // Attack 애니메이션의 진행 상태가 다 끝난 상태면 Damage가 들어올 수 있도록 설정합니다.
            if (animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
            {

            }
        }
    }

    public override void Use(  )
    {
        animator.SetBool("Attack", true);

        SoundManager.instance.Sound(SoundManager.SoundType.Attack);
        //memoryPool.DeactivatePoolItem(gameObject);
    }

    public void Update()
    {
        direction = transform.position - player.position;

        if(direction.x > 0)
        {
            spriteRenderer.flipX = true;
        }
        else if (direction.x < 0)
        {
            spriteRenderer.flipX = false;
        }

        transform.position = Vector3.MoveTowards
        (
            transform.position,
            player.position,
            Time.deltaTime * speed
        );
    }

}
