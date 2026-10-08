// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_Molotov.BP_SKItem_Molotov_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x598, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_Molotov_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_TorchFire;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Molotov_Trail;  // 0x0590, size 0x8
};
