// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Bear_Target_RunAcross.BP_TargetRange_Bear_Target_RunAcross_C
// Derives from: ABP_TargetRange_Bear_Target_C > ATargetRangeTarget > AIcarusActor > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Bear_Target_RunAcross_C : public ABP_TargetRange_Bear_Target_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Pause;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Progress;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Foward;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float TargetYawRotation;  // 0x0344, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_Bear_Target_RunAcross(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PerformMovement(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
