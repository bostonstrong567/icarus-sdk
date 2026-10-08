// /Game/BP/Behaviours/Actionable/BP_Actionable_Fish_Convert_To_Chunks.BP_Actionable_Fish_Convert_To_Chunks_C
// Derives from: UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Fish_Convert_To_Chunks_C : public UBP_ActionableBehaviour_Hold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanHold();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompleteHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Fish_Convert_To_Chunks(int32 EntryPoint);  // parameters 0x4
};
