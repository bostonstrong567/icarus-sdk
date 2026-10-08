// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Lithium_Bow.BP_SkeletalItem_Lithium_Bow_C
// Derives from: ABP_SkeletalItem_LithiumBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Lithium_Bow_C : public ABP_SkeletalItem_LithiumBase_C, public IIFireTransformProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Arrow;  // 0x05B0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ConsumeFuel(int32 Amount);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Lithium_Bow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
};
