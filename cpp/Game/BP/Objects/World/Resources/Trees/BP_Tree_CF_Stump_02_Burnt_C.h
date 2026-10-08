// /Game/BP/Objects/World/Resources/Trees/BP_Tree_CF_Stump_02_Burnt.BP_Tree_CF_Stump_02_Burnt_C
// Derives from: ABP_TreePrefab_Burnt_C > ABP_TreePrefab_C > ATreePrefab > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Tree_CF_Stump_02_Burnt_C : public ABP_TreePrefab_Burnt_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Stump_02_Burnt_R_T2;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Stump_02_Burnt_R_T1;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Stump_02_Burnt_R;  // 0x04D8, size 0x8
};
