// /Game/BP/Objects/World/Resources/Trees/BP_TreePrefab_Snow.BP_TreePrefab_Snow_C
// Derives from: ABP_TreePrefab_C > ATreePrefab > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreePrefab_Snow_C : public ABP_TreePrefab_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NiagaraTreeSnow;  // 0x04C8, size 0x8
};
