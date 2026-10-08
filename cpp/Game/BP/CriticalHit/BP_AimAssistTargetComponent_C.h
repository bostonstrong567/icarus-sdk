// /Game/BP/CriticalHit/BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C
// Derives from: UActorComponent > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AimAssistTargetComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionRadiusScale;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideCollisionRadius;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugComponent;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USphereComponent* Collider;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredSize;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ColliderTags;  // 0x00D8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_AimAssistTargetComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
