// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_FireExtinguisher.BP_SkeletalItem_FireExtinguisher_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_FireExtinguisher_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_fireExtinguisher;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ToggleParticle(bool Play);  // parameters 0x1
};
