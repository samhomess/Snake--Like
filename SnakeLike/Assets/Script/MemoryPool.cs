using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryPool
{
    public class PoolItem
    {
        public GameObject gameObject;    // 실제 화면에 나타날 게임 오브젝트             
    }                                   
                                        
    private int increaseCount = 1;       // 게임 오브젝트가 부족할 때 추가시키는 개수
    private int maxCount;                // 현재 리스트에 등록되어 있는 게임 오브젝트 개수
    private int activeCount;             // 현재 활성화되어 있는 게임 오브젝트 개수
                                        
    private GameObject poolObject;       // 오브젝트 풀링에서 관리하는 게임 오브젝트 
    private List<PoolItem> poolItemList; // 모든 오브젝트를 관리하고 저장하는 리스트

    public MemoryPool(GameObject poolObject)
    {
        maxCount = 0;
        activeCount = 0;
        this.poolObject = poolObject;

        poolItemList = new List<PoolItem>();

        InstantiateObjects();
    }


    public void InstantiateObjects()
    {
        maxCount += increaseCount;

        for(int i = 0; i < increaseCount; i++)
        {
            PoolItem poolItem = new PoolItem();

            poolItem.gameObject = GameObject.Instantiate(poolObject);
            poolItem.gameObject.SetActive(false);
           
            poolItemList.Add(poolItem);
        }
    }

    public GameObject ActivatePoolItem()
    {
        if(poolItemList == null)
        {
            return null;
        }

        // 현재 생성해서 관리는 모든 게임 오브젝트 개수와
        // 현재 활성화된 상태의 게임 오브젝트 비교   
        if(maxCount == activeCount)
        {
            InstantiateObjects();
        }
        
        for(int i = 0; i < poolItemList.Count; i++)
        {
            PoolItem poolItem = poolItemList[i];

            // activeSelf : 게임 오브젝트가 비활성화되었는지 확인하는 프로퍼티
            if (poolItem.gameObject.activeSelf == false)
            {
                activeCount++;

                poolItem.gameObject.SetActive(true);

                return poolItem.gameObject;
            }
        }

        return null;
    }

    public void DeactivatePoolItem(GameObject removeObject)
    {
        if(poolItemList == null || removeObject ==null)
        {
            return;
        }

        for(int i = 0; i < poolItemList.Count; i++)
        {
            PoolItem poolItem = poolItemList[i];

            if(poolItem.gameObject == removeObject)
            {
                activeCount--;

                poolItem.gameObject.SetActive(false);

                return;
            }
        }


    }
}
