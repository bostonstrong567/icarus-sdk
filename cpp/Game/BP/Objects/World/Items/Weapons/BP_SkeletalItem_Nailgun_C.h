// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Nailgun.BP_SkeletalItem_Nailgun_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Nailgun_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Building_C* BP_UIProjectionComponent_Building;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0590, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Building_Base_C* LastBuildingHit;  // 0x0598, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Nailgun(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
