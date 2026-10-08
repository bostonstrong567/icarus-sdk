// /Script/Icarus.ActionableData
// size 0x88, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ActionableComponent.generated.h

USTRUCT()
struct FActionableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FActionsRowHandle, FActionList> ActionMapping;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseClientPrediction;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRowHandle> GenericData;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSimultaneousActionExecution;  // 0x0080, size 0x1
};
