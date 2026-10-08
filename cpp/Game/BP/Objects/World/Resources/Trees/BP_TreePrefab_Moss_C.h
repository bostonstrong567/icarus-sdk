// /Game/BP/Objects/World/Resources/Trees/BP_TreePrefab_Moss.BP_TreePrefab_Moss_C
// Derives from: ABP_TreePrefab_C > ATreePrefab > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreePrefab_Moss_C : public ABP_TreePrefab_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NiagaraTreeMoss;  // 0x04C8, size 0x8
};
