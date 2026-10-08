// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Wood_Bow_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Arrow;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Wood_Bow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
