using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IAttack
{
    protected int health;
    protected int attack;
    
    public void Damage(Monster monster)
    {
        // ���� �Ŵ���
        monster.health -= monster.attack;
    }

    virtual public void OnTriggerEnter2D(Collider2D collision)
    {
        IAttack obj = collision.GetComponent<IAttack>();

        var monster = collision.GetComponent<Monster>();

        if (obj != null)
        {
            Damage(monster);
        }
    }

    public void Use()
    {
        
    }
}
