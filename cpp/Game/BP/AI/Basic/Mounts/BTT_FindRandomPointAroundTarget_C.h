// /Game/BP/AI/Basic/Mounts/BTT_FindRandomPointAroundTarget.BTT_FindRandomPointAroundTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x14C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindRandomPointAroundTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector InTargetActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutTargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToGround;  // 0x0104, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectionDistance;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectionOffset;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PostProjectionOffset;  // 0x0110, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToNavigation;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector NavProjectionExtent;  // 0x0120, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakePostProjectionRelative;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddHalfCapsuleHeight;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* CharacterRef;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CapsuleHalfHeightMultiplier;  // 0x0148, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_FindRandomPointAroundTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
