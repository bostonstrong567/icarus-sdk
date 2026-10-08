// /Game/BP/Behaviours/Ballistic/BP_BallisticBehaviour_FlareArrow.BP_BallisticBehaviour_FlareArrow_C
// Derives from: UBP_BallisticBehaviour_Base_C > UBallisticComponent > UTraitComponent > UActorComponent > UObject
// size 0xA84, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BallisticBehaviour_FlareArrow_C : public UBP_BallisticBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HadUpwardsTrajectory;  // 0x0A60, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredMaxSpeed;  // 0x0A64, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredGravityScale;  // 0x0A68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialized;  // 0x0A6C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaSeconds;  // 0x0A70, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0A74, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendSpeed;  // 0x0A78, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultGravityScale;  // 0x0A7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSpeedAtLaunch;  // 0x0A80, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_BallisticBehaviour_FlareArrow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
