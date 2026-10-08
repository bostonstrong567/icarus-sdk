// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Bear_Target_Popup.BP_TargetRange_Bear_Target_Popup_C
// Derives from: ABP_TargetRange_Bear_Target_C > ATargetRangeTarget > AIcarusActor > AActor > UObject
// size 0x349, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Bear_Target_Popup_C : public ABP_TargetRange_Bear_Target_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hide;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Pause;  // 0x0348, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_Bear_Target_Popup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PerformMovement(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPause();
};
