// /Game/BP/Objects/World/Items/Deployables/Missions/BP_ApeOutpostCage.BP_ApeOutpostCage_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ApeOutpostCage_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Cupboard_Metal;  // 0x0348, size 0x8
    UPROPERTY() FVector ShakeTimeline_Rotator_C328FCC6474CB1E74DA6C2931AD0E643;  // 0x0350, size 0xC
    UPROPERTY() TEnumAsByte<ETimelineDirection> ShakeTimeline__Direction_C328FCC6474CB1E74DA6C2931AD0E643;  // 0x035C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* ShakeTimeline;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x0368, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShakeAmount;  // 0x0374, size 0x4

    UFUNCTION(BlueprintCallable) void BigShake();
    UFUNCTION() void ExecuteUbergraph_BP_ApeOutpostCage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintCallable) void Shake();
    UFUNCTION() void ShakeTimeline__FinishedFunc();
    UFUNCTION() void ShakeTimeline__UpdateFunc();
};
